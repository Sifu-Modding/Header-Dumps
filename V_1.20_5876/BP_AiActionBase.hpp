#ifndef UE4SS_SDK_BP_AiActionBase_HPP
#define UE4SS_SDK_BP_AiActionBase_HPP

class UBP_AiActionBase_C : public UWGAiAction
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiActionBase(int32 EntryPoint);
}; // Size: 0x158

#endif
