#ifndef UE4SS_SDK_BP_LibraryAchievements_HPP
#define UE4SS_SDK_BP_LibraryAchievements_HPP

class UBP_LibraryAchievements_C : public UBlueprintFunctionLibrary
{

    void Activities_UpdateDetectiveBoard(FGameplayTag bpp__UpdatedTag__pf, class APlayerController* bpp__PlayerController__pf, class UAbilitySystemComponent* bpp__AbilityComponent__pf, class UObject* bpp____WorldContext__pf);
    void Activities_StartDBoardActivity(FString bpp__ActivityID__pf__const, FString bpp__TaskID__pf__const, class APlayerController* bpp__PlayerController__pf, EActivityWantedState bpp__eActivityWantedState__pf, EActivityWantedState bpp__eTaskWantedState__pf, class UObject* bpp____WorldContext__pf);
    void Activities_EndDBoardActivity(FString bpp__ActivityID__pf__const, class APlayerController* bpp__PlayerController__pf, bool bpp__bStayAvailable__pf, class UObject* bpp____WorldContext__pf);
    void Activities_CheckActivityCompletion(FGameplayTagContainer bpp__TagsToCheck__pf, class UObject* bpp____WorldContext__pf, bool& bpp__bAllTasksEnded__pf);
    void Achievement Is Not in A Wuguan(FString bpp__CurrentLevelName__pf__const, class UObject* bpp____WorldContext__pf, bool& bpp__LevelOK__pf);
    void Achievement_IncrementTimed(FString bpp__AchievementID__pf__const, bool bpp__IncrementOnCall__pf, class APlayerController* bpp__PlayerController__pf, class UObject* bpp____WorldContext__pf);
    void Achievement_IncrementCompletion(FString bpp__AchievementID__pf__const, int32 bpp__IncrValue__pf, class APlayerController* bpp__PlayerController__pf, class UObject* bpp____WorldContext__pf);
    void Achievement_Completed(FString bpp__AchievementID__pf__const, class APlayerController* bpp__PlayerController__pf, class UObject* bpp____WorldContext__pf);
    void Achievement_CheckFullDetectiveBoard(int32 bpp__Hideout_x1_to_5x_0_x_CheckAllx__pfL20K, class APlayerController* bpp__PlayerController__pf, class UAbilitySystemComponent* bpp__AbilityComponent__pf, class UObject* bpp____WorldContext__pf, bool& bpp__bIsComplete__pf);
    void Achievement_CheckDeathlessBoss(bool bpp__bInstance_xSetTrueOnBossStartx__pfLK, class APawn* bpp__PlayerPawnReference__pf, class APlayerController* bpp__PlayerController__pf, bool bpp__ForceNewAgeToCompareTo_xInstanceFalsex__pfLK, int32 bpp__ForcedNewAgeToCompareTo_xInstanceFalsex__pfLK, class UObject* bpp____WorldContext__pf, int32& bpp__AgeAtInstance_xInstanceTruex__pfLK);
    void Achievement_Add Item to List(FString bpp__AchievementID__pf__const, FString bpp__ItemToAdd__pf__const, class APlayerController* bpp__PlayerController__pf, class UObject* bpp____WorldContext__pf);
};

#endif
