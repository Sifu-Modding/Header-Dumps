#ifndef UE4SS_SDK_BP_WeaponSmearAnimNotify_HPP
#define UE4SS_SDK_BP_WeaponSmearAnimNotify_HPP

class UBP_WeaponSmearAnimNotify_C : public UAnimNotifyState
{
    float Debug Size;
    float MaxVelocity;
    float Smear Length Multiplier;
    float Smear Curvature Multiplier;
    float Private Smear Length Multiplier;

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

#endif
