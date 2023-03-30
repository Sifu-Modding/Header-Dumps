#ifndef UE4SS_SDK_AnimNotify_TimedParticleEffect_RainDash_HPP
#define UE4SS_SDK_AnimNotify_TimedParticleEffect_RainDash_HPP

class UAnimNotify_TimedParticleEffect_RainDash_C : public UAnimNotifyState_TimedParticleEffect
{
    class UParticleSystem* RedRoomAlternative;                                        // 0x0060 (size: 0x8)

    class UParticleSystem* GetPSTemplate(class USkeletalMeshComponent* MeshComp);
}; // Size: 0x68

#endif
