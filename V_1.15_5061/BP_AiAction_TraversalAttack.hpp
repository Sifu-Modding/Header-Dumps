#ifndef UE4SS_SDK_BP_AiAction_TraversalAttack_HPP
#define UE4SS_SDK_BP_AiAction_TraversalAttack_HPP

class UBP_AiAction_TraversalAttack_C : public UAIActionTraversalAttack
{
    FPointerToUberGraphFrame UberGraphFrame;

    FString BPE_GetName();
    void BPE_OnNamedEvent(FName _eventName);
    void ExecuteUbergraph_BP_AiAction_TraversalAttack(int32 EntryPoint);
};

#endif
