#ifndef UE4SS_SDK_BP_FailsafeBonusCurrency_HPP
#define UE4SS_SDK_BP_FailsafeBonusCurrency_HPP

class UBP_FailsafeBonusCurrency_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TMap<FGameplayTag, int32> GoalsToCheck_AddedBonusValue;                           // 0x01F0 (size: 0x50)

    void BPE_Shutdown();
    void BPE_Init();
    void Check_Revised_Goals_Currency();
    void ExecuteUbergraph_BP_FailsafeBonusCurrency(int32 EntryPoint);
}; // Size: 0x240

#endif
