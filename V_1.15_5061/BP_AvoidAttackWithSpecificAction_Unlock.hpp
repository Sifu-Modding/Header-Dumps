#ifndef UE4SS_SDK_BP_AvoidAttackWithSpecificAction_Unlock_HPP
#define UE4SS_SDK_BP_AvoidAttackWithSpecificAction_Unlock_HPP

class UBP_AvoidAttackWithSpecificAction_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UAnimSequence*> AnimUsedToAvoid;

    void OnAvoidSuccessDynamic_Event(FHitRequest _hitRequest, FHitDefenseResult _hitDefenseResult);
    void BPE_OnFirstConditionActive();
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_AvoidAttackWithSpecificAction_Unlock(int32 EntryPoint);
};

#endif
