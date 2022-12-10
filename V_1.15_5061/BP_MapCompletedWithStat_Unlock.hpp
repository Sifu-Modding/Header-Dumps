#ifndef UE4SS_SDK_BP_MapCompletedWithStat_Unlock_HPP
#define UE4SS_SDK_BP_MapCompletedWithStat_Unlock_HPP

class UBP_MapCompletedWithStat_Unlock_C : public UBP_MapCompletedAchievement_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ESCMathCondition TestMethod;
    int32 iWantedValue;
    ECharacterStat eWantedStat;

    void BPE_OnMatchEnded(bool _bHasWon);
    void ExecuteUbergraph_BP_MapCompletedWithStat_Unlock(int32 EntryPoint);
};

#endif
