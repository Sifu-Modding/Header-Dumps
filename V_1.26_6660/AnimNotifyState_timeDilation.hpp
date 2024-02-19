#ifndef UE4SS_SDK_AnimNotifyState_timeDilation_HPP
#define UE4SS_SDK_AnimNotifyState_timeDilation_HPP

class UAnimNotifyState_timeDilation_C : public UAnimNotifyState
{
    float TimeDilatationRatio;                                                        // 0x0030 (size: 0x4)
    float TimeDilatationEndWindow;                                                    // 0x0034 (size: 0x4)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x38

#endif
