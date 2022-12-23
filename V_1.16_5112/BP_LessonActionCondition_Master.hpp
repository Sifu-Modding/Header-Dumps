#ifndef UE4SS_SDK_BP_LessonActionCondition_Master_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Master_HPP

class UBP_LessonActionCondition_Master_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_LessonActionCondition_Master_CActionFailed ActionFailed;
    void ActionFailed();
    class AFightingCharacter* SpawnedAI;
    FBP_LessonActionCondition_Master_CActionSuccessful ActionSuccessful;
    void ActionSuccessful();
    TArray<class UAttackDB*> AttackToUse;
    TEnumAsByte<Enum_Lesson_AIState> StateToCheck;
    FTimerHandle ParriedStateDelayTimer;

    void ConvertLessonStateToFightingState(TEnumAsByte<Enum_Lesson_AIState> Lesson, EFightingState& FightingState);
    void UnbindAll();
    void ActionFail();
    void ActionSuccess();
    void ActionCheck_MCGetsHit();
    void ActionCheck_AIAttackFinished();
    void ActionCheck_AIGetsOutOfState(TEnumAsByte<Enum_Lesson_AIState> State);
    void ActionCheck_AIGetsAttacked();
    void OnCurrentAiAttackedFinished(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAIAttackFinished(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnMCGetsHit(class AController* ControllerInstigator, bool IsGuarding);
    void OnFightingStateChanged(EFightingState _eFightingState, bool _bPush);
    void OnAvoidedEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAITakeAnyDamages(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ParryDelay();
    void OnParriedStateEnded(EFightingState _eFightingState, bool _bPush);
    void ExecuteUbergraph_BP_LessonActionCondition_Master(int32 EntryPoint);
    void ActionSuccessful__DelegateSignature();
    void ActionFailed__DelegateSignature();
};

#endif
