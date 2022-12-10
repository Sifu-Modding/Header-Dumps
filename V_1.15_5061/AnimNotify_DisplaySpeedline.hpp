#ifndef UE4SS_SDK_AnimNotify_DisplaySpeedline_HPP
#define UE4SS_SDK_AnimNotify_DisplaySpeedline_HPP

class UAnimNotify_DisplaySpeedline_C : public UAnimNotify
{
    TEnumAsByte<Enum_Speedlines> Speedline;
    FVector LocationOffset;
    FRotator RotationOffset;
    FVector Scale;
    bool OverrideLifetime;
    float NewLifetime;
    class UParticleSystem* PS_BigArc;
    class UParticleSystem* PS_LittleArc;
    class UParticleSystem* PS_StraightLine;
    class UParticleSystem* PS_ConeBroke;
    class UParticleSystem* PS_Debug;
    class UParticleSystem* PS_BigArc_Large;
    class UParticleSystem* PS_LittleArc_Large;
    FLinearColor SpeedLine Color;

    void MirrorOrientation(FRotator CurrentRotation, FRotator& FinalWorldRotation);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
