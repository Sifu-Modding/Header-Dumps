#ifndef UE4SS_SDK_BP_SCFootSteps_HPP
#define UE4SS_SDK_BP_SCFootSteps_HPP

class UBP_SCFootSteps_C : public UBP_SCFootsteps_Base_C
{
    float AudioDebug_Velocity;                                                        // 0x0050 (size: 0x4)

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
}; // Size: 0x54

#endif
