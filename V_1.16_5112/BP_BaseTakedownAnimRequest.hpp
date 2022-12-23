#ifndef UE4SS_SDK_BP_BaseTakedownAnimRequest_HPP
#define UE4SS_SDK_BP_BaseTakedownAnimRequest_HPP

class UBP_BaseTakedownAnimRequest_C : public UTakedownAnimRequest
{
    TArray<FTakedownAnim> GenericTakedowns;
    TArray<FTakedownAnim> KnockdownTakedowns;
    TArray<FTakedownAnim> BatsTakedowns;
    TArray<FTakedownAnim> BladesTakedowns;
    TArray<FTakedownAnim> StaffTakedowns;
    TArray<FTakedownAnim> RushTakedown;
    TArray<FTakedownAnim> BatsTakedowns_KD;
    TArray<FTakedownAnim> BladesTakedowns_KD;
    TArray<FTakedownAnim> StaffTakedowns_KD;

    void GetTakedownsFromArchetype(class AFightingCharacter* Character, FArchetypeTakedownAnims& Result, bool& Found);
    void GetTakedownType(class AFightingCharacter* Target, class AFightingCharacter* Instigator, FTargetResult& Targetting, TEnumAsByte<TakedownType>& Result, TArray<FTakedownAnim>& Anims);
    void GetKnockMirror(class ABaseCharacter* self2, bool& m_bMirror);
    void FilterAnims(TArray<FTakedownAnim>& Array, class AActor* Target, class AActor* Instigator, TArray<FAnimSyncContainer>& ResultA);
    void AddTakedownAnimations(bool Env, TArray<FTakedownAnim>& Anims, TArray<FTakedownDebugAnim>& Result);
    void GetAllTakedownAnimations(TArray<FTakedownDebugAnim>& Array);
    void BPE_GetAnimation(InputAction _eAction, const FTargetResult& _targetInfos, const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, const FNetOrderStructTakedown& _takedownInfos, const class UActorComponent* _environment, TArray<FAnimSyncContainer>& _anims, bool& _mirror, bool _bForceOnTraversal);
};

#endif
