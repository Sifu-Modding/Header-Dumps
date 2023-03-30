#ifndef UE4SS_SDK_BP_GameFlow_Library_HPP
#define UE4SS_SDK_BP_GameFlow_Library_HPP

class UBP_GameFlow_Library_C : public UBlueprintFunctionLibrary
{

    void RestartMap(class UWGGameFlow* bpp__GameFlow__pf, class UObject* bpp____WorldContext__pf);
    void OpenLastStoryMap(class UObject* bpp____WorldContext__pf);
    void OpenArenaMenuMap(bool bpp__SaveMapChange__pf, bool bpp__GotoChallengeSelection__pf, class UObject* bpp____WorldContext__pf);
    bool Is Arena Map Parkour(class UObject* bpp____WorldContext__pf);
    void IsRunLegit(FString bpp__AchievementID__pf__const, class UObject* bpp____WorldContext__pf, bool& bpp__bRunLegit__pf);
    void GetWuguanTagFromHideoutMapTagName(FName bpp__HideoutMapTagName__pf, class UObject* bpp____WorldContext__pf, FGameplayTag& bpp__Tag__pf);
    void GetWuguanTagFromHideoutIndex(int32 bpp__HideoutIndex__pf, class UObject* bpp____WorldContext__pf, FGameplayTag& bpp__Tag__pf);
    void GetRunType(class UObject* bpp____WorldContext__pf, ERunType& bpp__eRunType__pf);
    void GetHideoutTagNameList(class UObject* bpp____WorldContext__pf, TArray<FName>& bpp__ListOfTagName__pf);
    void GetHideoutIndexFromMapTagName(FName bpp__MapTagName__pf, class UObject* bpp____WorldContext__pf, int32& bpp__Index__pf);
}; // Size: 0x28

#endif
