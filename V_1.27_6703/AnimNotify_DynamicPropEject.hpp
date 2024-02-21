#ifndef UE4SS_SDK_AnimNotify_DynamicPropEject_HPP
#define UE4SS_SDK_AnimNotify_DynamicPropEject_HPP

class UAnimNotify_DynamicPropEject_C : public UAnimNotify
{
    bool ExitActivity;                                                                // 0x0038 (size: 0x1)
    FVector Add Impulse;                                                              // 0x003C (size: 0xC)
    bool LoopHide;                                                                    // 0x0048 (size: 0x1)
    bool HandSwap;                                                                    // 0x0049 (size: 0x1)
    TEnumAsByte<Enum_Props_Idle_Event> IdleProps Action;                              // 0x004A (size: 0x1)

    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x4B

#endif
