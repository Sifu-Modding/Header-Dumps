#ifndef UE4SS_SDK_Tutorial_ActionCounterComponent_HPP
#define UE4SS_SDK_Tutorial_ActionCounterComponent_HPP

class UTutorial_ActionCounterComponent_C : public UActorComponent
{
    FTutorial_ActionCounterComponent_CCounterUpdated CounterUpdated;                  // 0x00C0 (size: 0x10)
    void CounterUpdated(FStr_TutorialActionCounters Counter);
    FTutorial_ActionCounterComponent_CCounterEnded CounterEnded;                      // 0x00D0 (size: 0x10)
    void CounterEnded(FStr_TutorialActionCounters Counter);
    TMap<class EOrderType, class FStr_TutorialActionCounters> ActiveActionCounters;   // 0x00E0 (size: 0x50)
    TMap<TEnumAsByte<Enum_TutorialActionCounterType>, EOrderType> CountersToOrders;   // 0x0130 (size: 0x50)
    class UOrderComponent* OrderComponent;                                            // 0x0180 (size: 0x8)
    FStr_TutorialActionCounters KilledEnemiesCounter;                                 // 0x0188 (size: 0x40)
    class ABP_FightingPlayer_C* Character;                                            // 0x01C8 (size: 0x8)
    TMap<FName, TEnumAsByte<Enum_TutorialActionCounterType>> AttackNamesToCounters;   // 0x01D0 (size: 0x50)
    TMap<TEnumAsByte<Enum_TutorialActionCounterType>, FStr_TutorialActionCounters> ActiveAttackCounters; // 0x0220 (size: 0x50)
    FTutorial_ActionCounterComponent_CCounterCreated CounterCreated;                  // 0x0270 (size: 0x10)
    void CounterCreated(FStr_TutorialActionCounters Counter);
    TEnumAsByte<Enum_TutorialActionCounterType> CurrentAttackType;                    // 0x0280 (size: 0x1)
    class AFightingCharacter* CurrentTarget;                                          // 0x0288 (size: 0x8)
    FStr_TutorialActionCounters DeflectCounter;                                       // 0x0290 (size: 0x40)
    FStr_TutorialActionCounters ThrowCounter;                                         // 0x02D0 (size: 0x40)
    FTutorial_ActionCounterComponent_CCounterHighlight CounterHighlight;              // 0x0310 (size: 0x10)
    void CounterHighlight(TEnumAsByte<Enum_TutorialActionCounterType> CounterType, bool Highlight, bool Force);
    FStr_TutorialActionCounters AvoidCounter;                                         // 0x0320 (size: 0x40)
    FStr_TutorialActionCounters InputAvoidDuckCounter;                                // 0x0360 (size: 0x40)
    FStr_TutorialActionCounters InputAvoidJumpCounter;                                // 0x03A0 (size: 0x40)
    TMap<TEnumAsByte<Enum_TutorialActionCounterType>, EOrderType> CountersToBPOrders; // 0x03E0 (size: 0x50)
    FStr_TutorialActionCounters OnEnemyDownCounter;                                   // 0x0430 (size: 0x40)

    void UpdateOnEnemyDownCounter(uint8 _ID, class UOrderComponent* _OrderComponent);
    void UpdateInputAvoidJumpCounter(uint8 _ID, class UOrderComponent* _OrderComponent);
    void UpdateInputAvoidDuckCounter(uint8 _ID, class UOrderComponent* _OrderComponent);
    void UpdateAvoidCounter(bool InAvoidSlomo);
    void UpdateThrowCounter(uint8 ID, class UOrderComponent* NewParam);
    void UpdateDeflectCounter();
    void UpdateAttackCounter(uint8 ID, class UOrderComponent* NewParam);
    void CheckAttackCounter(uint8 ID, class UOrderComponent* NewParam);
    void UpdateCounterKilledEnemies(class AActor* Victim, bool Is Only Assist, bool Killing Blow, class AActor* Instigator, FDamageInfos& Damage);
    void UpdateActionCounter(uint8 ID, class UOrderComponent* NewParam);
    void EndCounter(const TEnumAsByte<Enum_TutorialActionCounterType>& ActionType);
    void InitiateCounter(TEnumAsByte<Enum_TutorialActionCounterType> DesiredType, int32 Number, class ABP_FightingPlayer_C* Character, TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FText Name, FText Conditions, bool& Success, FStr_TutorialActionCounters& Counter);
    void CounterHighlight__DelegateSignature(TEnumAsByte<Enum_TutorialActionCounterType> CounterType, bool Highlight, bool Force);
    void CounterCreated__DelegateSignature(FStr_TutorialActionCounters Counter);
    void CounterEnded__DelegateSignature(FStr_TutorialActionCounters Counter);
    void CounterUpdated__DelegateSignature(FStr_TutorialActionCounters Counter);
}; // Size: 0x470

#endif
