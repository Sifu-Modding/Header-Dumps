#ifndef UE4SS_SDK_ThePlainesGameInstanceBP_HPP
#define UE4SS_SDK_ThePlainesGameInstanceBP_HPP

class UThePlainesGameInstanceBP_C : public UThePlainesGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    int32 SchoolGameModeRequirement;                                                  // 0x0578 (size: 0x4)
    TArray<class UAkAudioBank*> GenericSoundBanks;                                    // 0x0580 (size: 0x10)
    FName mapTap;                                                                     // 0x0590 (size: 0x8)
    int32 iSnapshotID;                                                                // 0x0598 (size: 0x4)
    TArray<class UMaterialInterface*> LevelSelectMaterials_Transient;                 // 0x05A0 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_TempSoftRef;      // 0x05B0 (size: 0x10)
    class UUserWidget* gameIntentPopup;                                               // 0x05C0 (size: 0x8)

    void BindTrackingEvents();
    void SendAchievementTrackingEvents(FGameplayTag _objectUnlockedTag);
    bool BPE_OnGameActivityActivationRequestComplete(FString _activityID, bool _bStartedGameFromActivity);
    void OnLoaded_C71803774C4C1D5DCAE737B4B221A843(class UObject* Loaded);
    void OnLoaded_F4EAD6274B5D07A05393C7B4FF9055F1(class UObject* Loaded);
    void ReceiveInit();
    void LoadLevelSelectMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Mats);
    void OnConfirmActivityPopup();
    void OnCancelActivityPopup();
    void BPE_OnAchievementObjectUnlocked(FGameplayTag ObjectUnlockedTag);
    void ExecuteUbergraph_ThePlainesGameInstanceBP(int32 EntryPoint);
}; // Size: 0x5C8

#endif
