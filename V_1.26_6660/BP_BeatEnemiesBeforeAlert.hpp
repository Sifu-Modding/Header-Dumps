#ifndef UE4SS_SDK_BP_BeatEnemiesBeforeAlert_HPP
#define UE4SS_SDK_BP_BeatEnemiesBeforeAlert_HPP

class UBP_BeatEnemiesBeforeAlert_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TArray<TSoftObjectPtr<AAISituationActor>> SituationToNotAlert;                    // 0x01F0 (size: 0x10)

    void BPE_OnFirstConditionActive();
    void OnAIDeathDetected_Event(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    void BPE_OnSituationActivated(class AAISituationActor* _situation);
    void ExecuteUbergraph_BP_BeatEnemiesBeforeAlert(int32 EntryPoint);
}; // Size: 0x200

#endif
