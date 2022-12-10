#ifndef UE4SS_SDK_BP_SoundGroundNotify_HPP
#define UE4SS_SDK_BP_SoundGroundNotify_HPP

class UBP_SoundGroundNotify_C : public UBP_SCFootsteps_Base_C
{
    class UAkAudioEvent* SoundGround_AkEvent;
    class USurfacesData_C* SurfacesData;
    bool IsLoopSound;

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
};

#endif
