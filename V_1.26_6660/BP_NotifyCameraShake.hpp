#ifndef UE4SS_SDK_BP_NotifyCameraShake_HPP
#define UE4SS_SDK_BP_NotifyCameraShake_HPP

class UBP_NotifyCameraShake_C : public USCAnimNotify
{
    EAttackPowers HitPower;                                                           // 0x0048 (size: 0x1)
    TSubclassOf<class UMatineeCameraShake> SpecificCameraShake;                       // 0x0050 (size: 0x8)
    float ExtraMultiplier;                                                            // 0x0058 (size: 0x4)
    TEnumAsByte<BP_CameraShakeNotifyBehaviorEnum> PlayMethod;                         // 0x005C (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x5D

#endif
