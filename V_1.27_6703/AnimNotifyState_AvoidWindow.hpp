#ifndef UE4SS_SDK_AnimNotifyState_AvoidWindow_HPP
#define UE4SS_SDK_AnimNotifyState_AvoidWindow_HPP

class UAnimNotifyState_AvoidWindow_C : public UAvoidWindowNotifyState
{
    EAvoidType avoidType;                                                             // 0x0090 (size: 0x1)

    void mirror(TEnumAsByte<Side> Side, TEnumAsByte<Side>& Side_out);
    bool Received_NotifyBeginExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, bool bPrediction, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x91

#endif
