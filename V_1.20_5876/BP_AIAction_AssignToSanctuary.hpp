#ifndef UE4SS_SDK_BP_AIAction_AssignToSanctuary_HPP
#define UE4SS_SDK_BP_AIAction_AssignToSanctuary_HPP

class UBP_AIAction_AssignToSanctuary_C : public UBP_AiActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0158 (size: 0x8)

    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AIAction_AssignToSanctuary(int32 EntryPoint);
}; // Size: 0x160

#endif
