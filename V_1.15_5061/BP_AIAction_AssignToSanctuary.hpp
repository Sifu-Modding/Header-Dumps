#ifndef UE4SS_SDK_BP_AIAction_AssignToSanctuary_HPP
#define UE4SS_SDK_BP_AIAction_AssignToSanctuary_HPP

class UBP_AIAction_AssignToSanctuary_C : public UBP_AiActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AIAction_AssignToSanctuary(int32 EntryPoint);
};

#endif
