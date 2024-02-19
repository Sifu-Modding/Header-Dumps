#ifndef UE4SS_SDK_BP_CompleteArenaBatchUnlock_HPP
#define UE4SS_SDK_BP_CompleteArenaBatchUnlock_HPP

class UBP_CompleteArenaBatchUnlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    bool bFinishedAllChallenges;                                                      // 0x01F0 (size: 0x1)

    void BPE_OnFirstConditionActive();
    void ExecuteUbergraph_BP_CompleteArenaBatchUnlock(int32 EntryPoint);
}; // Size: 0x1F1

#endif
