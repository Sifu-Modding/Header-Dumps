#ifndef UE4SS_SDK_BP_TargetPlaysOrder_HPP
#define UE4SS_SDK_BP_TargetPlaysOrder_HPP

class UBP_TargetPlaysOrder_C : public UComboTransitionCondition
{
    EOrderType Order;

    FString BPE_GetLog();
    uint8 BPE_GetTargetNode(const class AFightingCharacter* _owner, const class AActor* _target);
};

#endif
