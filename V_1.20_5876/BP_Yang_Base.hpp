#ifndef UE4SS_SDK_BP_Yang_Base_HPP
#define UE4SS_SDK_BP_Yang_Base_HPP

class ABP_Yang_Base_C : public ABP_AICharacter_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1F10 (size: 0x8)
    class AActor* ArenaWaypoint;                                                      // 0x1F18 (size: 0x8)
    FActiveGameplayEffectHandle LastPhaseEffectOnPlayer;                              // 0x1F20 (size: 0x8)
    class USCAbilitySystemComponent* MCAbilityComponent;                              // 0x1F28 (size: 0x8)
    FTimerHandle TimerDefensiveBark;                                                  // 0x1F30 (size: 0x8)
    bool MidLifeP3;                                                                   // 0x1F38 (size: 0x1)
    bool OnTauntCooldown;                                                             // 0x1F39 (size: 0x1)
    bool IsTraining;                                                                  // 0x1F3A (size: 0x1)
    FActiveGameplayEffectHandle CounterThrowEffectHandle;                             // 0x1F3C (size: 0x8)
    bool OnP3BarkCooldown;                                                            // 0x1F44 (size: 0x1)

    void ArenaWaypointDistanceCheck(FSCMathExpressionFloat Condition, bool& Success);
    void YangPhaseChanged(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void OnYangHitted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void StartTauntCooldown();
    void OnTauntCooldownEnded();
    void PlayDefensiveBark();
    void OnMcHit(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void CannotUseFocus();
    void ReceiveBeginPlay();
    void PlayP3Barks();
    void CooldownP3Bark();
    void PlayTauntVoiceline();
    void ExecuteUbergraph_BP_Yang_Base(int32 EntryPoint);
}; // Size: 0x1F45

#endif
