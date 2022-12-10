#ifndef UE4SS_SDK_BP_AiActionBase_HPP
#define UE4SS_SDK_BP_AiActionBase_HPP

class UBP_AiActionBase_C : public UWGAiAction
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiActionBase(int32 EntryPoint);
};

#endif
