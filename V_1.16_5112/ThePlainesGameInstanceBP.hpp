#ifndef UE4SS_SDK_ThePlainesGameInstanceBP_HPP
#define UE4SS_SDK_ThePlainesGameInstanceBP_HPP

class UThePlainesGameInstanceBP_C : public UThePlainesGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SchoolGameModeRequirement;
    TArray<class UAkAudioBank*> GenericSoundBanks;
    FName mapTap;
    int32 iSnapshotID;
    TArray<class UMaterialInterface*> LevelSelectMaterials_Transient;
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_TempSoftRef;
    class UUserWidget* gameIntentPopup;

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
};

#endif
