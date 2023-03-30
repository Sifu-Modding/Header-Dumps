#ifndef UE4SS_SDK_BP_AIDirectorActor_HPP
#define UE4SS_SDK_BP_AIDirectorActor_HPP

class ABP_AIDirectorActor_C : public AAIDirectorActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0498 (size: 0x8)
    TArray<class AAISituationActor*> SituationsActive;                                // 0x04A0 (size: 0x10)
    bool AlertedBarkPlayedOnce;                                                       // 0x04B0 (size: 0x1)
    float MCPickupCooldownTimer;                                                      // 0x04B4 (size: 0x4)
    FTimerHandle MCPickupCooldownFunctionTimer;                                       // 0x04B8 (size: 0x8)
    FTimerHandle DominationCooldownFunctionTimer;                                     // 0x04C0 (size: 0x8)
    float DominationCooldownTimer;                                                    // 0x04C8 (size: 0x4)
    FTimerHandle AIReactionTDCooldownFunctionTimer;                                   // 0x04D0 (size: 0x8)
    float AIReactionTDCooldownTimer;                                                  // 0x04D8 (size: 0x4)
    EMcDominationGaugeSteps NewDominationStep;                                        // 0x04DC (size: 0x1)
    class AFightingCharacter* SelectedAI;                                             // 0x04E0 (size: 0x8)

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
}; // Size: 0x4E8

#endif
