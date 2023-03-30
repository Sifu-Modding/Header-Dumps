#ifndef UE4SS_SDK_BP_AiSituation_HPP
#define UE4SS_SDK_BP_AiSituation_HPP

class ABP_AiSituation_C : public AAISituationActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    TArray<FSCSoundSwitchValue> PostFightSwitchs;                                     // 0x0498 (size: 0x10)
    bool AutoSaveOnSituationResolved;                                                 // 0x04A8 (size: 0x1)
    FBP_AiSituation_COn All AIs Died On All AIs Died;                                 // 0x04B0 (size: 0x10)
    void On All AIs Died();
    EGlobalBehaviors Force Behavior At Spawn;                                         // 0x04C0 (size: 0x1)
    TArray<class ASCPlayerVolume*> Spawn On Enter Player Volumes;                     // 0x04C8 (size: 0x10)
    bool bSpawnAtBeginPlay;                                                           // 0x04D8 (size: 0x1)
    TArray<FSCSoundSwitchValue> PostFightAbandonSwitchs;                              // 0x04E0 (size: 0x10)
    int32 Abandoners Count;                                                           // 0x04F0 (size: 0x4)
    TArray<class AAISpawner*> Abandon on those AIs Death;                             // 0x04F8 (size: 0x10)
    FBP_AiSituation_COn AI Phase Changed On AI Phase Changed;                         // 0x0508 (size: 0x10)
    void On AI Phase Changed(class AFightingCharacter* Character, int32 iPreviousPhaseIndex, FName Phase Name);
    TMap<class FGameplayTag, class FCarriedByAIDetectiveTagInfos> DetectiveVisibleActorsToSpawn; // 0x0518 (size: 0x50)
    TArray<class AActor*> SpawnedDetectiveVisibleActors;                              // 0x0568 (size: 0x10)
    TMap<class AAISpawner*, class FBP_SoundSwitchs> Post AI Death Switchs;            // 0x0578 (size: 0x50)
    TSoftObjectPtr<ABP_PortalDoor_C> PortalDoorBP;                                    // 0x05C8 (size: 0x28)
    bool SendTrackingForThisSituation;                                                // 0x05F0 (size: 0x1)
    FString TrackingContextID;                                                        // 0x05F8 (size: 0x10)
    bool Trigger Post Fight Switchs On Resolve All Groups;                            // 0x0608 (size: 0x1)
    bool bIsBoss;                                                                     // 0x0609 (size: 0x1)
    TArray<FSCSoundSwitchValue> On All AIs Died Set States;                           // 0x0610 (size: 0x10)

    bool IsBoss();
    void Is Trigger Post Fight Switchs On Resolve All Groups(bool& Result);
    void GetPostFightSwitchs(TArray<FSCSoundSwitchValue>& OutPostFightSwitchs, TArray<FSCSoundSwitchValue>& OutPostFightAbandonSwitchs);
    EGlobalBehaviors BPF_GetBehaviorOverride();
    void OpenPortalDoor();
    void TryToSpawnDetectiveActorFromInfos(FGameplayTag DetectiveTag, FCarriedByAIDetectiveTagInfos Infos);
    void Internal_SpawnDetectiveActorFromInfos(FGameplayTag DetectiveTag, FCarriedByAIDetectiveTagInfos Infos);
    void DestroyDetectiveVisibleActors();
    void SpawnDetectiveVisibleActors();
    void Is Need to Abandon(TArray<class UAIFightingComponent*>& AIs, bool& Result);
    void BPF Spawn();
    void ReceiveBeginPlay();
    void CE_OnSitutationresolved(class AAISituationActor* SituationChanged);
    void BPE On One AI Died(class ABaseCharacter* Character);
    void BPE On All AIs Died();
    void On Spawned(class AAISituationActor* SituationChanged);
    void On Enter Spawn Player Volume(class AActor* OverlappedActor, class AActor* OtherActor);
    void On Activated(class AAISituationActor* SituationChanged);
    void BPE_OnEndAIPhaseChanged(class AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex, FName _currentPhaseName);
    void On AI Spawned(class ABaseCharacter* Character);
    void OnUpdatedFromSave();
    void CE_OnSituationActivated(class AAISituationActor* SituationChanged);
    void ExecuteUbergraph_BP_AiSituation(int32 EntryPoint);
    void On AI Phase Changed__DelegateSignature(class AFightingCharacter* Character, int32 iPreviousPhaseIndex, FName Phase Name);
    void On All AIs Died__DelegateSignature();
}; // Size: 0x620

#endif
