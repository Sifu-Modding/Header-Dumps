#ifndef UE4SS_SDK_BP_AiAction_StandardAttack_HPP
#define UE4SS_SDK_BP_AiAction_StandardAttack_HPP

class UBP_AiAction_StandardAttack_C : public UBP_AiAction_Attack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    class UAttackDB* Attack DB;                                                       // 0x0170 (size: 0x8)
    FName Attack Name;                                                                // 0x0178 (size: 0x8)
    float Attack Start Ratio;                                                         // 0x0180 (size: 0x4)
    float AttackRange Ratio;                                                          // 0x0184 (size: 0x4)
    bool bIgnoreCheckDistance;                                                        // 0x0188 (size: 0x1)

    float BPE_GetAttackRange();
    FString BPE_GetName();
    void BPE_OnPreCreateOrderAttackParams(FName _paramsName, class UOrderAttackParams* _orderParams);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiAction_StandardAttack(int32 EntryPoint);
}; // Size: 0x189

#endif
