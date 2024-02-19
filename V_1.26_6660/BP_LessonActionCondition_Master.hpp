#ifndef UE4SS_SDK_BP_LessonActionCondition_Master_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Master_HPP

class UBP_LessonActionCondition_Master_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    FBP_LessonActionCondition_Master_CActionFailed ActionFailed;                      // 0x01F0 (size: 0x10)
    void ActionFailed(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    class AFightingCharacter* SpawnedAI;                                              // 0x0200 (size: 0x8)
    FBP_LessonActionCondition_Master_CActionSuccessful ActionSuccessful;              // 0x0208 (size: 0x10)
    void ActionSuccessful();
    TArray<class UAttackDB*> AttackToUse;                                             // 0x0218 (size: 0x10)
    TEnumAsByte<Enum_Lesson_AIState> StateToCheck;                                    // 0x0228 (size: 0x1)
    FTimerHandle ParriedStateDelayTimer;                                              // 0x0230 (size: 0x8)
    TEnumAsByte<Enum_Lesson_Action> Action;                                           // 0x0238 (size: 0x1)
    bool AsDoneAvoid;                                                                 // 0x0239 (size: 0x1)
    bool AsDoneDeflect;                                                               // 0x023A (size: 0x1)

    void TimingCheck_Deflect();
    void TimingCheck_Avoid();
    void ConvertLessonStateToFightingState(TEnumAsByte<Enum_Lesson_AIState> Lesson, EFightingState& FightingState);
    void UnbindAll();
    void ActionFail(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
    void ActionSuccess();
    void ActionCheck_MCGetsHit();
    void ActionCheck_AIAttackFinished();
    void ActionCheck_AIGetsOutOfState(TEnumAsByte<Enum_Lesson_AIState> State);
    void ActionCheck_AIGetsAttacked();
    void OnAITakeAnyDamages(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void OnAIAttackFinished(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnCurrentAiAttackedFinished(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnMCGetsHit(class AController* ControllerInstigator, bool IsGuarding);
    void OnFightingStateChanged(EFightingState _eFightingState, bool _bPush);
    void OnAvoidedEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ParryDelay();
    void OnParriedStateEnded(EFightingState _eFightingState, bool _bPush);
    void OnMainCharStartAvoid(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAIAttackStarted_TimingCheck(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnMainCharStartGuard(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnKnockdownEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_LessonActionCondition_Master(int32 EntryPoint);
    void ActionSuccessful__DelegateSignature();
    void ActionFailed__DelegateSignature(TEnumAsByte<Enum_TrainingRoom_FailCause> Cause);
}; // Size: 0x23B

#endif
