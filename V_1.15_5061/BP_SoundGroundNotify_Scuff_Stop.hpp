#ifndef UE4SS_SDK_BP_SoundGroundNotify_Scuff_Stop_HPP
#define UE4SS_SDK_BP_SoundGroundNotify_Scuff_Stop_HPP

class UBP_SoundGroundNotify_Scuff_Stop_C : public UBP_SoundGroundNotify_C
{

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
};

#endif
