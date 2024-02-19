#ifndef UE4SS_SDK_BP_IsInInvertAttack_HPP
#define UE4SS_SDK_BP_IsInInvertAttack_HPP

class UBP_IsInInvertAttack_C : public UComboTransitionCondition
{

    FString BPE_GetLog();
    uint8 BPE_GetTargetNode(const class AFightingCharacter* _owner, const class AActor* _target);
}; // Size: 0xD8

#endif
