#ifndef UE4SS_SDK_BP_SoundGroundNotify_Land_HPP
#define UE4SS_SDK_BP_SoundGroundNotify_Land_HPP

class UBP_SoundGroundNotify_Land_C : public UBP_SoundGroundNotify_C
{

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
}; // Size: 0x61

#endif
