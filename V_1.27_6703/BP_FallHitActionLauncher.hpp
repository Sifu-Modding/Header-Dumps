#ifndef UE4SS_SDK_BP_FallHitActionLauncher_HPP
#define UE4SS_SDK_BP_FallHitActionLauncher_HPP

class UBP_FallHitActionLauncher_C : public UFallHitActionLauncher
{

    void BPE_GetDirection(class AActor* _Instigator, class AActor* _victim, FVector& _vOutStartDirection, FVector& _vOutTargetDirection, bool& _bOutForceStartDirection);
}; // Size: 0x2D8

#endif
