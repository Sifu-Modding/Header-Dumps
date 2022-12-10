#ifndef UE4SS_SDK_AnimNotify_DynamicPropEject_HPP
#define UE4SS_SDK_AnimNotify_DynamicPropEject_HPP

class UAnimNotify_DynamicPropEject_C : public UAnimNotify
{
    bool ExitActivity;
    FVector Add Impulse;
    bool LoopHide;
    bool HandSwap;
    TEnumAsByte<Enum_Props_Idle_Event> IdleProps Action;

    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
