#ifndef UE4SS_SDK_BP_BaseTakedownAnimRequest_HPP
#define UE4SS_SDK_BP_BaseTakedownAnimRequest_HPP

class UBP_BaseTakedownAnimRequest_C : public UTakedownAnimRequest
{
    TArray<FTakedownAnim> GenericTakedowns;                                           // 0x0028 (size: 0x10)
    TArray<FTakedownAnim> KnockdownTakedowns;                                         // 0x0038 (size: 0x10)
    TArray<FTakedownAnim> BatsTakedowns;                                              // 0x0048 (size: 0x10)
    TArray<FTakedownAnim> BladesTakedowns;                                            // 0x0058 (size: 0x10)
    TArray<FTakedownAnim> StaffTakedowns;                                             // 0x0068 (size: 0x10)
    TArray<FTakedownAnim> RushTakedown;                                               // 0x0078 (size: 0x10)
    TArray<FTakedownAnim> BatsTakedowns_KD;                                           // 0x0088 (size: 0x10)
    TArray<FTakedownAnim> BladesTakedowns_KD;                                         // 0x0098 (size: 0x10)
    TArray<FTakedownAnim> StaffTakedowns_KD;                                          // 0x00A8 (size: 0x10)

    void GetTakedownsFromArchetype(class AFightingCharacter* Character, FArchetypeTakedownAnims& Result, bool& Found);
    void GetTakedownType(class AFightingCharacter* Target, class AFightingCharacter* Instigator, FTargetResult& Targetting, TEnumAsByte<TakedownType>& Result, TArray<FTakedownAnim>& Anims);
    void GetKnockMirror(class ABaseCharacter* self2, bool& m_bMirror);
    void FilterAnims(TArray<FTakedownAnim>& Array, class AActor* Target, class AActor* Instigator, TArray<FAnimSyncContainer>& ResultA);
    void AddTakedownAnimations(bool Env, TArray<FTakedownAnim>& Anims, TArray<FTakedownDebugAnim>& Result);
    void GetAllTakedownAnimations(TArray<FTakedownDebugAnim>& Array);
    void BPE_GetAnimation(InputAction _eAction, const FTargetResult& _targetInfos, const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, const FNetOrderStructTakedown& _takedownInfos, const class UActorComponent* _environment, TArray<FAnimSyncContainer>& _anims, bool& _mirror, bool _bForceOnTraversal);
}; // Size: 0xB8

#endif
