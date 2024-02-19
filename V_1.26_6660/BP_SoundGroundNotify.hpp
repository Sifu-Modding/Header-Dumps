#ifndef UE4SS_SDK_BP_SoundGroundNotify_HPP
#define UE4SS_SDK_BP_SoundGroundNotify_HPP

class UBP_SoundGroundNotify_C : public UBP_SCFootsteps_Base_C
{
    class UAkAudioEvent* SoundGround_AkEvent;                                         // 0x0050 (size: 0x8)
    class USurfacesData_C* SurfacesData;                                              // 0x0058 (size: 0x8)
    bool IsLoopSound;                                                                 // 0x0060 (size: 0x1)

    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
}; // Size: 0x61

#endif
