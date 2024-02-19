#ifndef UE4SS_SDK_BP_WeaponSmearAnimNotify_HPP
#define UE4SS_SDK_BP_WeaponSmearAnimNotify_HPP

class UBP_WeaponSmearAnimNotify_C : public UAnimNotifyState
{
    float Debug Size;                                                                 // 0x0030 (size: 0x4)
    float MaxVelocity;                                                                // 0x0034 (size: 0x4)
    float Smear Length Multiplier;                                                    // 0x0038 (size: 0x4)
    float Smear Curvature Multiplier;                                                 // 0x003C (size: 0x4)
    float Private Smear Length Multiplier;                                            // 0x0040 (size: 0x4)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x44

#endif
