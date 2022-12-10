#ifndef UE4SS_SDK_AnimNotify_SendRaycastAndDrawOnGround_HPP
#define UE4SS_SDK_AnimNotify_SendRaycastAndDrawOnGround_HPP

class UAnimNotify_SendRaycastAndDrawOnGround_C : public UAnimNotify
{
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectType;
    TEnumAsByte<Enum_Feet> Foot;
    float FootForwardOffset;

    void DrawOnGround(FHitResult Hit, FVector ForwardVector, class USCDynamicTextureMask* Target SCDTM Component);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
