#ifndef UE4SS_SDK_BP_NotifyCameraShake_HPP
#define UE4SS_SDK_BP_NotifyCameraShake_HPP

class UBP_NotifyCameraShake_C : public USCAnimNotify
{
    EAttackPowers HitPower;
    TSubclassOf<class UMatineeCameraShake> SpecificCameraShake;
    float ExtraMultiplier;
    TEnumAsByte<BP_CameraShakeNotifyBehaviorEnum> PlayMethod;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
