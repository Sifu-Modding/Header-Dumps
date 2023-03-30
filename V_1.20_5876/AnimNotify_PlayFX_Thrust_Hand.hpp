#ifndef UE4SS_SDK_AnimNotify_PlayFX_Thrust_Hand_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_Thrust_Hand_HPP

class UAnimNotify_PlayFX_Thrust_Hand_C : public UAnimNotify_PlayParticleEffect_Extended_C
{
    class UParticleSystem* PS_Thrust_Light;                                           // 0x00A8 (size: 0x8)
    class UParticleSystem* PS_Thrust_Medium;                                          // 0x00B0 (size: 0x8)
    class UParticleSystem* PS_Thrust_Strong;                                          // 0x00B8 (size: 0x8)
    class UParticleSystem* PS_PL_Thrust_Light;                                        // 0x00C0 (size: 0x8)
    class UParticleSystem* PS_PL_Thrust_Medium;                                       // 0x00C8 (size: 0x8)
    class UParticleSystem* PS_PL_Thrust_Strong;                                       // 0x00D0 (size: 0x8)
    bool PreviewPL;                                                                   // 0x00D8 (size: 0x1)
    TEnumAsByte<AttackProperties> Attack Property;                                    // 0x00D9 (size: 0x1)
    class UParticleSystem* PS_Thrust_Interrupt_Light;                                 // 0x00E0 (size: 0x8)
    class UParticleSystem* PS_Thrust_Interrupt_Medium;                                // 0x00E8 (size: 0x8)
    class UParticleSystem* PS_Thrust_Interrupt_Strong;                                // 0x00F0 (size: 0x8)
    class UParticleSystem* PS_Thrust_GuardBreak_Light;                                // 0x00F8 (size: 0x8)
    class UParticleSystem* PS_Thrust_GuardBreak_Medium;                               // 0x0100 (size: 0x8)
    class UParticleSystem* PS_Thrust_GuardBreak_Strong;                               // 0x0108 (size: 0x8)

    void GetParticleSystem(EAttackPowers AttackPower, class USkeletalMeshComponent* Mesh, TArray<class UParticleSystem*>& ParticleSystems1);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x110

#endif
