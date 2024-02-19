#ifndef UE4SS_SDK_AnimNotify_DisplaySpeedline_HPP
#define UE4SS_SDK_AnimNotify_DisplaySpeedline_HPP

class UAnimNotify_DisplaySpeedline_C : public UAnimNotify
{
    TEnumAsByte<Enum_Speedlines> Speedline;                                           // 0x0038 (size: 0x1)
    FVector LocationOffset;                                                           // 0x003C (size: 0xC)
    FRotator RotationOffset;                                                          // 0x0048 (size: 0xC)
    FVector Scale;                                                                    // 0x0054 (size: 0xC)
    bool OverrideLifetime;                                                            // 0x0060 (size: 0x1)
    float NewLifetime;                                                                // 0x0064 (size: 0x4)
    class UParticleSystem* PS_BigArc;                                                 // 0x0068 (size: 0x8)
    class UParticleSystem* PS_LittleArc;                                              // 0x0070 (size: 0x8)
    class UParticleSystem* PS_StraightLine;                                           // 0x0078 (size: 0x8)
    class UParticleSystem* PS_ConeBroke;                                              // 0x0080 (size: 0x8)
    class UParticleSystem* PS_Debug;                                                  // 0x0088 (size: 0x8)
    class UParticleSystem* PS_BigArc_Large;                                           // 0x0090 (size: 0x8)
    class UParticleSystem* PS_LittleArc_Large;                                        // 0x0098 (size: 0x8)
    FLinearColor SpeedLine Color;                                                     // 0x00A0 (size: 0x10)

    void MirrorOrientation(FRotator CurrentRotation, FRotator& FinalWorldRotation);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0xB0

#endif
