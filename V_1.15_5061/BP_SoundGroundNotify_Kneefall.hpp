#ifndef UE4SS_SDK_BP_SoundGroundNotify_Kneefall_HPP
#define UE4SS_SDK_BP_SoundGroundNotify_Kneefall_HPP

class UBP_SoundGroundNotify_Kneefall_C : public UBP_SoundGroundNotify_C
{

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
};

#endif
