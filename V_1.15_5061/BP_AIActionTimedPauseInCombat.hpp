#ifndef UE4SS_SDK_BP_AIActionTimedPauseInCombat_HPP
#define UE4SS_SDK_BP_AIActionTimedPauseInCombat_HPP

class UBP_AIActionTimedPauseInCombat_C : public UAIActionTimedPauseInCombat
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AIActionTimedPauseInCombat(int32 EntryPoint);
};

#endif
