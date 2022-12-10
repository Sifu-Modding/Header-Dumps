#ifndef UE4SS_SDK_BP_AiAction_StandardAttack_HPP
#define UE4SS_SDK_BP_AiAction_StandardAttack_HPP

class UBP_AiAction_StandardAttack_C : public UBP_AiAction_Attack_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAttackDB* Attack DB;
    FName Attack Name;
    float Attack Start Ratio;
    float AttackRange Ratio;
    bool bIgnoreCheckDistance;

    float BPE_GetAttackRange();
    FString BPE_GetName();
    void BPE_OnPreCreateOrderAttackParams(FName _paramsName, class UOrderAttackParams* _orderParams);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiAction_StandardAttack(int32 EntryPoint);
};

#endif
