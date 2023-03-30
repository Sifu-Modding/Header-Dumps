#ifndef UE4SS_SDK_BP_AiActionChangePhase_HPP
#define UE4SS_SDK_BP_AiActionChangePhase_HPP

class UBP_AiActionChangePhase_C : public UBP_AiActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0158 (size: 0x8)
    FAIPhaseNodeSoftLink Phase;                                                       // 0x0160 (size: 0x40)
    TArray<FSCAITicketEnum> Tickets To Reset;                                         // 0x01A0 (size: 0x10)

    FString BPE_GetName();
    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiActionChangePhase(int32 EntryPoint);
}; // Size: 0x1B0

#endif
