#ifndef UE4SS_SDK_BP_AIActionTimedPauseInCombat_HPP
#define UE4SS_SDK_BP_AIActionTimedPauseInCombat_HPP

class UBP_AIActionTimedPauseInCombat_C : public UAIActionTimedPauseInCombat
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)

    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AIActionTimedPauseInCombat(int32 EntryPoint);
}; // Size: 0x170

#endif
