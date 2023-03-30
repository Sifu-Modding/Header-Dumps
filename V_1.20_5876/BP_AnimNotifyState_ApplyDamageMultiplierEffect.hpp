#ifndef UE4SS_SDK_BP_AnimNotifyState_ApplyDamageMultiplierEffect_HPP
#define UE4SS_SDK_BP_AnimNotifyState_ApplyDamageMultiplierEffect_HPP

class UBP_AnimNotifyState_ApplyDamageMultiplierEffect_C : public UAnimNotifyState
{
    TSubclassOf<class UGameplayEffect> DamageMultiplierEffect;                        // 0x0030 (size: 0x8)

    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    FString GetNotifyName();
}; // Size: 0x38

#endif
