#ifndef UE4SS_SDK_BP_LimitBreakables_HPP
#define UE4SS_SDK_BP_LimitBreakables_HPP

class UBP_LimitBreakables_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<TSoftObjectPtr<ABaseBreakable>> BreakablesToCheck;

    void BPE_OnFirstConditionActive();
    void BPE_OnAllSituationResolved();
    void OnObjectDestroyed();
    void ExecuteUbergraph_BP_LimitBreakables(int32 EntryPoint);
};

#endif
