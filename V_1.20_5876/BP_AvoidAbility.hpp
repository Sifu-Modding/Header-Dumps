#ifndef UE4SS_SDK_BP_AvoidAbility_HPP
#define UE4SS_SDK_BP_AvoidAbility_HPP

class UBP_AvoidAbility_C : public UAvoidAbility
{
    TMap<class ESCCardinalPoints, class FAnimContainer> Anims;                        // 0x0820 (size: 0x50)
    TArray<FAnimContainer> m_NeutralDodges_High_Left_Thrust;                          // 0x0870 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_High_Left_Horizontal;                      // 0x0880 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_High_Middle_Thrust;                        // 0x0890 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_High_Middle_Horizontal;                    // 0x08A0 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_High_Right_Thrust;                         // 0x08B0 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_High_Right_Horizontal;                     // 0x08C0 (size: 0x10)
    TArray<FAnimContainer> m_MidAvoid;                                                // 0x08D0 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_FromBack_Horizontal;                       // 0x08E0 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges_FromBack_Vertical;                         // 0x08F0 (size: 0x10)
    TArray<FAnimContainer> m_NeutralDodges;                                           // 0x0900 (size: 0x10)
    TArray<FAnimContainer> m_SideAvoids;                                              // 0x0910 (size: 0x10)
    bool bCanMirror;                                                                  // 0x0920 (size: 0x1)
    TArray<FAnimContainer> m_NeutralDodges_FromBack;                                  // 0x0928 (size: 0x10)
    TArray<FAnimContainer> m_MidAvoid_FromBack;                                       // 0x0938 (size: 0x10)

    ESCCardinalPoints BPE_GetCardinalAvoidForHitBox(const FHitBox& _hitbox);
    void BPE_GetAvoidAnimationsBis(class AActor* _forActor, class AActor* _forTarget, ESCCardinalPoints _eCardinal, ESCCardinalPoints _eTargetCardinal, const bool _bTargetAttackIsMirrored, const bool _bIsHitBoxValid, const FHitBox& _hitbox, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType);
    void BPE_PostUpdatePayloadFromTargetting(class UAbilityPayload* _payload, class AActor* _self, InputAction _eInput, const FTargetResult& _target);
    ESCCardinalPoints GetCardinalToAttacker(class AFightingCharacter* self2, class AActor* _specifiedTarget, const FSCGameplayAbilityActorInfo& _actoInfos);
    void MirrrorAttackOrigin(EAttackOrigin Origin, bool mirror, EAttackOrigin& FinalOrigin);
    void BPE_GetAvoidAnimations(const FSCGameplayAbilityActorInfo& _infos, const FGameplayEventData& _triggerEventData, class UAbilityPayload* _payload, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType);
}; // Size: 0x948

#endif
