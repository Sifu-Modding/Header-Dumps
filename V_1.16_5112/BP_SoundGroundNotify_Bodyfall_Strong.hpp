#ifndef UE4SS_SDK_BP_SoundGroundNotify_Bodyfall_Strong_HPP
#define UE4SS_SDK_BP_SoundGroundNotify_Bodyfall_Strong_HPP

class UBP_SoundGroundNotify_Bodyfall_Strong_C : public UBP_SoundGroundNotify_C
{

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
};

#endif
