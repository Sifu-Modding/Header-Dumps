#ifndef UE4SS_SDK_BP_AiAction_Attack_HPP
#define UE4SS_SDK_BP_AiAction_Attack_HPP

class UBP_AiAction_Attack_C : public UAIActionAttack
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0158 (size: 0x8)
    bool Notify Attack Hit;                                                           // 0x0160 (size: 0x1)

    void On Hit Target(EGuardType GuardType);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void On Attack Hits(const FHitDescription& HitDescription);
    void BPE_OnFinished(bool _bSucceeded);
    void ExecuteUbergraph_BP_AiAction_Attack(int32 EntryPoint);
}; // Size: 0x161

#endif
