#ifndef UE4SS_SDK_BP_LimitBreakables_HPP
#define UE4SS_SDK_BP_LimitBreakables_HPP

class UBP_LimitBreakables_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TArray<TSoftObjectPtr<ABaseBreakable>> BreakablesToCheck;                         // 0x01F0 (size: 0x10)

    void BPE_OnFirstConditionActive();
    void BPE_OnAllSituationResolved();
    void OnObjectDestroyed();
    void ExecuteUbergraph_BP_LimitBreakables(int32 EntryPoint);
}; // Size: 0x200

#endif
