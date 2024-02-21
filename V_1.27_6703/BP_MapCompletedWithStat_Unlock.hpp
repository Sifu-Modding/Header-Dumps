#ifndef UE4SS_SDK_BP_MapCompletedWithStat_Unlock_HPP
#define UE4SS_SDK_BP_MapCompletedWithStat_Unlock_HPP

class UBP_MapCompletedWithStat_Unlock_C : public UBP_MapCompletedAchievement_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    ESCMathCondition TestMethod;                                                      // 0x0228 (size: 0x1)
    int32 iWantedValue;                                                               // 0x022C (size: 0x4)
    ECharacterStat eWantedStat;                                                       // 0x0230 (size: 0x1)

    void BPE_OnMatchEnded(bool _bHasWon);
    void ExecuteUbergraph_BP_MapCompletedWithStat_Unlock(int32 EntryPoint);
}; // Size: 0x231

#endif
