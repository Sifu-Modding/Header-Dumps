#ifndef UE4SS_SDK_BP_AiSituation_HPP
#define UE4SS_SDK_BP_AiSituation_HPP

class ABP_AiSituation_C : public AAISituationActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FSCSoundSwitchValue> PostFightSwitchs;
    bool AutoSaveOnSituationResolved;
    FBP_AiSituation_COn All AIs Died On All AIs Died;
    void On All AIs Died();
    EGlobalBehaviors Force Behavior At Spawn;
    TArray<class ASCPlayerVolume*> Spawn On Enter Player Volumes;
    bool bSpawnAtBeginPlay;
    TArray<FSCSoundSwitchValue> PostFightAbandonSwitchs;
    int32 Abandoners Count;
    TArray<class AAISpawner*> Abandon on those AIs Death;
    FBP_AiSituation_COn AI Phase Changed On AI Phase Changed;
    void On AI Phase Changed(class AFightingCharacter* Character, int32 iPreviousPhaseIndex, FName Phase Name);
    TMap<class FGameplayTag, class FCarriedByAIDetectiveTagInfos> DetectiveVisibleActorsToSpawn;
    TArray<class AActor*> SpawnedDetectiveVisibleActors;
    TMap<class AAISpawner*, class FBP_SoundSwitchs> Post AI Death Switchs;
    TSoftObjectPtr<ABP_PortalDoor_C> PortalDoorBP;
    bool SendTrackingForThisSituation;
    FString TrackingContextID;
    bool Trigger Post Fight Switchs On Resolve All Groups;
    bool bIsBoss;
    TArray<FSCSoundSwitchValue> On All AIs Died Set States;

    bool IsBoss();
    void Is Trigger Post Fight Switchs On Resolve All Groups(bool& Result);
    void GetPostFightSwitchs(TArray<FSCSoundSwitchValue>& OutPostFightSwitchs, TArray<FSCSoundSwitchValue>& OutPostFightAbandonSwitchs);
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
};

#endif
