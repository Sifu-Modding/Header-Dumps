#ifndef UE4SS_SDK_BP_WGSaveObjectGameData_HPP
#define UE4SS_SDK_BP_WGSaveObjectGameData_HPP

class UBP_WGSaveObjectGameData_C : public UWGSaveObjectGameData
{
    TArray<ESaveEntryTypes> GameOptions;
    TArray<ESaveEntryTypes> GlobalProgression;
    TArray<ESaveEntryTypes> ArenaProgression;
    TArray<ESaveEntryTypes> RunProgression;
    TArray<ESaveEntryTypes> DeathAntiCheat;
    bool bTutoFinished;
    FHideoutProgressionStruct Hideout1Progression;
    FHideoutProgressionStruct Hideout2Progression;
    FHideoutProgressionStruct Hideout3Progression;
    FHideoutProgressionStruct Hideout4Progression;
    FHideoutProgressionStruct Hideout5Progression;
    TArray<class UClass*> DefautSkills;
    TArray<ESaveEntryTypes> CheckpointProgression;
    bool bDisableStructureBrokenSlomo;
    FAchievementStruct Achievements;
    bool LastLife;
    TArray<ESaveEntryTypes> EndGameOptions;
    bool bHasSeenDeathCounterTuto;
    TArray<ESaveEntryTypes> SaveSnapshotWithCheats;
    FName PreviousWuguanMapTag;
    int32 iHideoutCompletedWithoutGettingHit;
    bool bCanMainCharPropSpawn;
    TArray<ESaveEntryTypes> InGameAntiExploit;
    class USCSaveObjectGameData* K2Node_Event__inSaveTo;
    int32 K2Node_Event__iTestMask;

    void StartActivity(FString bpp__ActivityID__pf__const);
    void Snapshot Save Data(int32 bpp__iMask__pf, FString& bpp__sSnapshotInfo__pf);
    void SaveSpecificEntry(ESaveEntryTypes bpp__SaveEntryType__pf, class UBP_WGSaveObjectGameData_C* bpp__SaveToWriteToDisk__pf, int32 bpp__iSnapshotID__pf, FString& bpp__sEntryInfo__pf);
    void Override Save With Snapshot(class USCSaveObjectGameData* bpp__SaveToOverride__pf, int32 bpp__RefSave__pf, FString& bpp__SnapshotInfo__pf);
    void InitDefaultValue();
    void InitDefaultSkills();
    void IncrementAchievement(FString bpp__AchievementID__pf__const, int32 bpp__IncrValue__pf, int32& bpp__NewValue__pf);
    void HasHideoutBeenReached(int32 bpp__iHideoutIndex__pf, bool& bpp__bHasBeenReached__pf);
    void Get Character Stat(int32 bpp__iSnapshotID__pf, ECharacterStat bpp__InStat__pf, float& bpp__CharacterStat__pf);
    void GetUnlockedSkills(int32 bpp__iSnapshotID__pf, TArray<class UClass*>& bpp__UnlockedSkills__pf);
    void GetSkillsPoints(TArray<class UClass*>& bpp__SkillsToEvaluate__pf, int32& bpp__SkillPoints__pf);
    void GetSkillConsolidationLevel(int32 bpp__iSnapshotID__pf, TMap<UClass*, int32>& bpp__UnlockedSkills__pf);
    void GetShrineEffects(int32 bpp__iSnapshotID__pf, TArray<class UClass*>& bpp__ShrineEffects__pf);
    void GetSaveEntryFromMask(int32 bpp__iMask__pf, TArray<ESaveEntryTypes>& bpp__SaveEntry__pf);
    void GetPlayerTags(int32 bpp__iSnapshotID__pf, FGameplayTagContainer& bpp__PlayerTags__pf);
    float GetMCDominationGauge(int32 bpp__iSnapshotID__pf);
    void GetLevelTitleFromMapName(FName bpp__MapTagName__pf, FText& bpp__LevelTitle__pf);
    int32 GetLastManGaugeValue(int32 bpp__iSnapshotID__pf);
    void GetHideoutIndexFromResumedActivity(FString bpp__ResumedActivity__pf__const, int32& bpp__iHideoutIdx__pf);
    void GetGender(int32 bpp__iSnapshotID__pf, ECharacterGender& bpp__eGender__pf);
    void GetGameplayTag(int32 bpp__iSnapshotID__pf, FGameplayTagContainer& bpp__GameplayTag__pf);
    void GetActivityState(FString bpp__ActivityID__pf__const, EActivityState& bpp__eActivityState__pf);
    void GetAchievementProgression(FString bpp__AchievementID__pf__const, int32& bpp__Value__pf, bool& bpp__bFoundAchievement__pf);
    void GetAchievementItemList(FString bpp__AchievementID__pf__const, TArray<FString>& bpp__ItemList__pf);
    void EndActivity(FString bpp__ActivityID__pf__const);
    void DidAllActivitiesEnd(TArray<FString>& bpp__ActivitiesToCheck__pf, bool& bpp__bAllActivitiesEnd__pf);
    void DidActivityEnd(FString bpp__ActivityID__pf__const, bool& bpp__bActivityEnded__pf);
    void CopyToSaveWithMask(class USCSaveObjectGameData* bpp__SaveTo__pf, int32 bpp__testMask__pf);
    bool BPE_ShouldLoadAntiCheatMap();
    void AddItemToAchievementList(FString bpp__AchievementID__pf__const, FString bpp__ItemToAdd__pf__const, TArray<FString>& bpp__OutList__pf);
};

#endif
