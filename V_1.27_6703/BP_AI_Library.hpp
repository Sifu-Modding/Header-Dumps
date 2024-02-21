#ifndef UE4SS_SDK_BP_AI_Library_HPP
#define UE4SS_SDK_BP_AI_Library_HPP

class UBP_AI_Library_C : public UBlueprintFunctionLibrary
{

    bool IsOwnerLastMan(class UAIComponent* bpp__InAiComp__pf, class UObject* bpp____WorldContext__pf);
    bool IsLastMan(class AActor* bpp__InActor__pf, class UObject* bpp____WorldContext__pf);
    void IsInBossSituation(class UObject* bpp____WorldContext__pf, bool& bpp__bInBossSituation__pf);
    bool HasAnyLastMan(class UObject* bpp____WorldContext__pf);
}; // Size: 0x28

#endif
