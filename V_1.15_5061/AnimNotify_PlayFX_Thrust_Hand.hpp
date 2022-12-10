#ifndef UE4SS_SDK_AnimNotify_PlayFX_Thrust_Hand_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_Thrust_Hand_HPP

class UAnimNotify_PlayFX_Thrust_Hand_C : public UAnimNotify_PlayParticleEffect_Extended_C
{
    class UParticleSystem* PS_Thrust_Light;
    class UParticleSystem* PS_Thrust_Medium;
    class UParticleSystem* PS_Thrust_Strong;
    class UParticleSystem* PS_PL_Thrust_Light;
    class UParticleSystem* PS_PL_Thrust_Medium;
    class UParticleSystem* PS_PL_Thrust_Strong;
    bool PreviewPL;
    TEnumAsByte<AttackProperties> Attack Property;
    class UParticleSystem* PS_Thrust_Interrupt_Light;
    class UParticleSystem* PS_Thrust_Interrupt_Medium;
    class UParticleSystem* PS_Thrust_Interrupt_Strong;
    class UParticleSystem* PS_Thrust_GuardBreak_Light;
    class UParticleSystem* PS_Thrust_GuardBreak_Medium;
    class UParticleSystem* PS_Thrust_GuardBreak_Strong;

    void GetParticleSystem(EAttackPowers AttackPower, class USkeletalMeshComponent* Mesh, TArray<class UParticleSystem*>& ParticleSystems1);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
