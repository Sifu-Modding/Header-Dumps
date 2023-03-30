#ifndef UE4SS_SDK_BP_KilledSpecificArchetype_Unlock_HPP
#define UE4SS_SDK_BP_KilledSpecificArchetype_Unlock_HPP

class UBP_KilledSpecificArchetype_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)
    class UPDA_TrainingSelectableAI_C* TrainingSelectableArchetypesDB;                // 0x01E8 (size: 0x8)
    TMap<TSoftClassPtr<UArchetypeAsset>, TEnumAsByte<Enum_TrainingSelectableArchetypes>> ArchetypeAssetToEnum; // 0x01F0 (size: 0x50)
    TArray<FName> P2Names;                                                            // 0x0240 (size: 0x10)
    bool bPhase1;                                                                     // 0x0250 (size: 0x1)

    void HandleAIDeathOrPhaseChanged(class AFightingCharacter* AICharacter, bool bIsPhase1ForBoss);
    void AreAllArchetypesKilled(bool& AllKilled);
    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_OnSituationResolved(class AAISituationActor* _situation, bool _bHasActiveSituation);
    void BPE_OnMatchEnded(bool _bHasWon);
    void OnAIDeathDetected_Event(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    void BPE_Init();
    void BPE_OnSituationActivated(class AAISituationActor* _situation);
    void BPE_UnlockAchievement_Debug();
    void OnAIPhaseChangeSequenceFinished_Event(class AFightingCharacter* FightingChar);
    void ExecuteUbergraph_BP_KilledSpecificArchetype_Unlock(int32 EntryPoint);
}; // Size: 0x251

#endif
