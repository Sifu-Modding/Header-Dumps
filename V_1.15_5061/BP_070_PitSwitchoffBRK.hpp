#ifndef UE4SS_SDK_BP_070_PitSwitchoffBRK_HPP
#define UE4SS_SDK_BP_070_PitSwitchoffBRK_HPP

class ABP_070_PitSwitchoffBRK_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AActor*> ObjetToDestroy;

    void DestroyBRKFences();
    void ExecuteUbergraph_BP_070_PitSwitchoffBRK(int32 EntryPoint);
};

#endif
