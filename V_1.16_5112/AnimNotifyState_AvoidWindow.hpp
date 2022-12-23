#ifndef UE4SS_SDK_AnimNotifyState_AvoidWindow_HPP
#define UE4SS_SDK_AnimNotifyState_AvoidWindow_HPP

class UAnimNotifyState_AvoidWindow_C : public UAvoidWindowNotifyState
{
    EAvoidType AvoidType;

    void Mirror(TEnumAsByte<Side> Side, TEnumAsByte<Side>& Side_out);
    bool Received_NotifyBeginExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, bool bPrediction, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
