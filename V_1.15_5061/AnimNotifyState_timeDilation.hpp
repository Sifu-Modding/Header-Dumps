#ifndef UE4SS_SDK_AnimNotifyState_timeDilation_HPP
#define UE4SS_SDK_AnimNotifyState_timeDilation_HPP

class UAnimNotifyState_timeDilation_C : public UAnimNotifyState
{
    float TimeDilatationRatio;
    float TimeDilatationEndWindow;

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
};

#endif
