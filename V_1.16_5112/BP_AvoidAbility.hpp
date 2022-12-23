#ifndef UE4SS_SDK_BP_AvoidAbility_HPP
#define UE4SS_SDK_BP_AvoidAbility_HPP

class UBP_AvoidAbility_C : public UAvoidAbility
{
    TMap<class ESCCardinalPoints, class FAnimContainer> Anims;
    TArray<FAnimContainer> m_NeutralDodges_High_Left_Thrust;
    TArray<FAnimContainer> m_NeutralDodges_High_Left_Horizontal;
    TArray<FAnimContainer> m_NeutralDodges_High_Middle_Thrust;
    TArray<FAnimContainer> m_NeutralDodges_High_Middle_Horizontal;
    TArray<FAnimContainer> m_NeutralDodges_High_Right_Thrust;
    TArray<FAnimContainer> m_NeutralDodges_High_Right_Horizontal;
    TArray<FAnimContainer> m_MidAvoid;
    TArray<FAnimContainer> m_NeutralDodges_FromBack_Horizontal;
    TArray<FAnimContainer> m_NeutralDodges_FromBack_Vertical;
    TArray<FAnimContainer> m_NeutralDodges;
    TArray<FAnimContainer> m_SideAvoids;
    bool bCanMirror;
    TArray<FAnimContainer> m_NeutralDodges_FromBack;
    TArray<FAnimContainer> m_MidAvoid_FromBack;

    ESCCardinalPoints BPE_GetCardinalAvoidForHitBox(const FHitBox& _hitbox);
    void BPE_GetAvoidAnimationsBis(class AActor* _forActor, class AActor* _forTarget, ESCCardinalPoints _eCardinal, ESCCardinalPoints _eTargetCardinal, const bool _bTargetAttackIsMirrored, const bool _bIsHitBoxValid, const FHitBox& _hitbox, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType);
    void BPE_PostUpdatePayloadFromTargetting(class UAbilityPayload* _payload, class AActor* _self, InputAction _eInput, const FTargetResult& _target);
    ESCCardinalPoints GetCardinalToAttacker(class AFightingCharacter* self2, class AActor* _specifiedTarget, const FSCGameplayAbilityActorInfo& _actoInfos);
    void MirrrorAttackOrigin(EAttackOrigin Origin, bool Mirror, EAttackOrigin& FinalOrigin);
    void BPE_GetAvoidAnimations(const FSCGameplayAbilityActorInfo& _infos, const FGameplayEventData& _triggerEventData, class UAbilityPayload* _payload, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType);
};

#endif
