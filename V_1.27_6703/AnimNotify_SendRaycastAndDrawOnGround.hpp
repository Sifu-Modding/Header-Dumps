#ifndef UE4SS_SDK_AnimNotify_SendRaycastAndDrawOnGround_HPP
#define UE4SS_SDK_AnimNotify_SendRaycastAndDrawOnGround_HPP

class UAnimNotify_SendRaycastAndDrawOnGround_C : public UAnimNotify
{
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectType;                                 // 0x0038 (size: 0x10)
    TEnumAsByte<Enum_Feet> Foot;                                                      // 0x0048 (size: 0x1)
    float FootForwardOffset;                                                          // 0x004C (size: 0x4)

    void DrawOnGround(FHitResult Hit, FVector ForwardVector, class USCDynamicTextureMask* Target SCDTM Component);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x50

#endif
