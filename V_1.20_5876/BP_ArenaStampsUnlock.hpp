#ifndef UE4SS_SDK_BP_ArenaStampsUnlock_HPP
#define UE4SS_SDK_BP_ArenaStampsUnlock_HPP

class UBP_ArenaStampsUnlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    int32 iWantedStamps;                                                              // 0x01F0 (size: 0x4)
    FGameplayTag RestrictedTag;                                                       // 0x01F4 (size: 0x8)

    void BPE_OnFirstConditionActive();
    void ExecuteUbergraph_BP_ArenaStampsUnlock(int32 EntryPoint);
}; // Size: 0x1FC

#endif
