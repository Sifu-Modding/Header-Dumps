#ifndef UE4SS_SDK_BP_AiAction_Attack_HPP
#define UE4SS_SDK_BP_AiAction_Attack_HPP

class UBP_AiAction_Attack_C : public UAIActionAttack
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Notify Attack Hit;

    void On Hit Target(EGuardType GuardType);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void On Attack Hits(const FHitDescription& HitDescription);
    void BPE_OnFinished(bool _bSucceeded);
    void ExecuteUbergraph_BP_AiAction_Attack(int32 EntryPoint);
};

#endif
