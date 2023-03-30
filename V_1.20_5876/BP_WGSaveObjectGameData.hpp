#ifndef UE4SS_SDK_BP_WGSaveObjectGameData_HPP
#define UE4SS_SDK_BP_WGSaveObjectGameData_HPP

class UBP_WGSaveObjectGameData_C : public UWGSaveObjectGameData
{
    TArray<ESaveEntryTypes> GameOptions;                                              // 0x0410 (size: 0x10)
    TArray<ESaveEntryTypes> GlobalProgression;                                        // 0x0420 (size: 0x10)
    TArray<ESaveEntryTypes> ArenaProgression;                                         // 0x0430 (size: 0x10)
    TArray<ESaveEntryTypes> RunProgression;                                           // 0x0440 (size: 0x10)
    TArray<ESaveEntryTypes> DeathAntiCheat;                                           // 0x0450 (size: 0x10)
    bool bTutoFinished;                                                               // 0x0460 (size: 0x1)
    FHideoutProgressionStruct Hideout1Progression;                                    // 0x0468 (size: 0x10)
    FHideoutProgressionStruct Hideout2Progression;                                    // 0x0478 (size: 0x10)
    FHideoutProgressionStruct Hideout3Progression;                                    // 0x0488 (size: 0x10)
    FHideoutProgressionStruct Hideout4Progression;                                    // 0x0498 (size: 0x10)
    FHideoutProgressionStruct Hideout5Progression;                                    // 0x04A8 (size: 0x10)
    TArray<class UClass*> DefautSkills;                                               // 0x04B8 (size: 0x10)
    TArray<ESaveEntryTypes> CheckpointProgression;                                    // 0x04C8 (size: 0x10)
    bool bDisableStructureBrokenSlomo;                                                // 0x04D8 (size: 0x1)
    FAchievementStruct Achievements;                                                  // 0x04E0 (size: 0xF0)
    bool LastLife;                                                                    // 0x05D0 (size: 0x1)
    TArray<ESaveEntryTypes> EndGameOptions;                                           // 0x05D8 (size: 0x10)
    bool bHasSeenDeathCounterTuto;                                                    // 0x05E8 (size: 0x1)
    TArray<ESaveEntryTypes> SaveSnapshotWithCheats;                                   // 0x05F0 (size: 0x10)
    FName PreviousWuguanMapTag;                                                       // 0x0600 (size: 0x8)
    int32 iHideoutCompletedWithoutGettingHit;                                         // 0x0608 (size: 0x4)
    bool bCanMainCharPropSpawn;                                                       // 0x060C (size: 0x1)
    TArray<ESaveEntryTypes> InGameAntiExploit;                                        // 0x0610 (size: 0x10)
    TArray<FString> CompletedLessons;                                                 // 0x0620 (size: 0x10)
    class USCSaveObjectGameData* K2Node_Event__inSaveTo;                              // 0x0630 (size: 0x8)
    int32 K2Node_Event__iTestMask;                                                    // 0x0638 (size: 0x4)

    void StartActivity(FString bpp__ActivityID__pf__const);
    void Snapshot Save Data(int32 bpp__iMask__pf, int32 bpp__EntryToExclude__pf, FString& bpp__sSnapshotInfo__pf);
    void SaveSpecificEntry(ESaveEntryTypes bpp__SaveEntryType__pf, class UBP_WGSaveObjectGameData_C* bpp__SaveToWriteToDisk__pf, int32 bpp__iSnapshotID__pf, FString& bpp__sEntryInfo__pf);
    void Override Save With Snapshot(class USCSaveObjectGameData* bpp__SaveToOverride__pf, int32 bpp__RefSave__pf, FString& bpp__SnapshotInfo__pf);
    void InitDefaultValue();
    void InitDefaultSkills();
    void IncrementAchievement(FString bpp__AchievementID__pf__const, int32 bpp__IncrValue__pf, int32& bpp__NewValue__pf);
    void HasHideoutBeenReached(int32 bpp__iHideoutIndex__pf, bool& bpp__bHasBeenReached__pf);
    void Get Save Entry From Mask(int32 bpp__iMask__pf, TArray<ESaveEntryTypes>& bpp__Entries__pf);
    void Get Character Stat(int32 bpp__iSnapshotID__pf, ECharacterStat bpp__InStat__pf, float& bpp__CharacterStat__pf);
    void GetUnlockedSkills(int32 bpp__iSnapshotID__pf, TArray<class UClass*>& bpp__UnlockedSkills__pf);
    void GetSkillsPoints(TArray<class UClass*>& bpp__SkillsToEvaluate__pf, int32& bpp__SkillPoints__pf);
    void GetSkillConsolidationLevel(int32 bpp__iSnapshotID__pf, TMap<UClass*, int32>& bpp__UnlockedSkills__pf);
    void GetShrineEffects(int32 bpp__iSnapshotID__pf, TArray<class UClass*>& bpp__ShrineEffects__pf);
    void GetSaveEntryTypeFromMask(int32 bpp__iMask__pf, TArray<ESaveEntryTypes>& bpp__SaveEntry__pf);
    void GetPlayerTags(int32 bpp__iSnapshotID__pf, FGameplayTagContainer& bpp__PlayerTags__pf);
    float GetMCDominationGauge(int32 bpp__iSnapshotID__pf);
    void GetLevelTitleFromMapName(FName bpp__MapTagName__pf, FText& bpp__LevelTitle__pf);
    int32 GetLastManGaugeValue(int32 bpp__iSnapshotID__pf);
    void GetIsLessonCompleted(FString bpp__LessonToCheck__pf__const, bool& bpp__IsCompleted__pf);
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
}; // Size: 0x640

#endif
