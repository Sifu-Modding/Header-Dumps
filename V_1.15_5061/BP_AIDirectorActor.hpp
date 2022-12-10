#ifndef UE4SS_SDK_BP_AIDirectorActor_HPP
#define UE4SS_SDK_BP_AIDirectorActor_HPP

class ABP_AIDirectorActor_C : public AAIDirectorActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AAISituationActor*> SituationsActive;
    bool AlertedBarkPlayedOnce;
    float MCPickupCooldownTimer;
    FTimerHandle MCPickupCooldownFunctionTimer;
    FTimerHandle DominationCooldownFunctionTimer;
    float DominationCooldownTimer;
    FTimerHandle AIReactionTDCooldownFunctionTimer;
    float AIReactionTDCooldownTimer;
    EMcDominationGaugeSteps NewDominationStep;
    class AFightingCharacter* SelectedAI;

    bool BPE_CanAICharacterSpeak(const class AFightingCharacter* Character);
    void AIReactionTDResetCooldown();
    void DominationResetCooldown();
    void MCPickupResetCooldown();
    void GetDirectOpponent(class AActor* Enemy, class AFightingCharacter*& AICharacter);
    void PickRandomAIActor(class AActor* Enemy, class AFightingCharacter*& AICharacter);
    void BPE_OnMCDominationChanged(EMcDominationGaugeSteps _NewStep);
    void BPE_OnEnemyPickedWeapon(const class AFightingCharacter* _Enemy);
    void BPE_OnEnemyRevival(class ABaseCharacter* _Enemy);
    void BPE_OnSafeSanctuaryBarkTrigger(const class AFightingCharacter* _Enemy);
    void BPE_OnAIActionExecute(const class UAIFightingComponent* _aiComponent, const class USCAiAction* _AIAction);
    void BPE_OnGlobalBehaviorChanged(const class UAIFightingComponent* _aiComponent, EGlobalBehaviors _NewBehavior, EAlertedReason _AlertedReason, bool _SkipBark);
    void BPE_OnLastManPhaseStarted(const class UAIFightingComponent* _aiComponent);
    void BPE_OnSituationDeactivated(const class AAISituationActor* _situationActor);
    void PlayBarkMCDominating();
    void PlayBarkMCDominated();
    void BPE_OnSituationActivated(const class AAISituationActor* _situationActor);
    void ExecuteUbergraph_BP_AIDirectorActor(int32 EntryPoint);
};

#endif
