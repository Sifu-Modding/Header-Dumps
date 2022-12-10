#ifndef UE4SS_SDK_BP_AiAction_GotoActor_HPP
#define UE4SS_SDK_BP_AiAction_GotoActor_HPP

class UBP_AiAction_GotoActor_C : public UBP_AiActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* Actor To Reach;
    FName BB Key Actor To Reach;
    float Reach Tolerance;

    FString BPE_GetName();
    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiAction_GotoActor(int32 EntryPoint);
};

#endif
