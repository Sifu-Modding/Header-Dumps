#ifndef UE4SS_SDK_BP_Yang_Base_HPP
#define UE4SS_SDK_BP_Yang_Base_HPP

class ABP_Yang_Base_C : public ABP_AICharacter_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* ArenaWaypoint;
    FActiveGameplayEffectHandle LastPhaseEffectOnPlayer;
    class USCAbilitySystemComponent* MCAbilityComponent;
    FTimerHandle TimerDefensiveBark;
    bool MidLifeP3;
    bool OnTauntCooldown;
    bool IsTraining;
    FActiveGameplayEffectHandle CounterThrowEffectHandle;
    bool OnP3BarkCooldown;

    void ArenaWaypointDistanceCheck(FSCMathExpressionFloat Condition, bool& Success);
    void YangPhaseChanged(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void OnYangHitted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void StartTauntCooldown();
    void OnTauntCooldownEnded();
    void PlayDefensiveBark();
    void OnMCHit(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void CannotUseFocus();
    void ReceiveBeginPlay();
    void PlayP3Barks();
    void CooldownP3Bark();
    void PlayTauntVoiceline();
    void ExecuteUbergraph_BP_Yang_Base(int32 EntryPoint);
};

#endif
