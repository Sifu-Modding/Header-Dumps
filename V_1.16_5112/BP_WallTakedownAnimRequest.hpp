#ifndef UE4SS_SDK_BP_WallTakedownAnimRequest_HPP
#define UE4SS_SDK_BP_WallTakedownAnimRequest_HPP

class UBP_WallTakedownAnimRequest_C : public UBP_BaseTakedownAnimRequest_C
{
    TArray<FAnimSyncContainer> WallTD_North;
    TArray<FAnimSyncContainer> MidColTD_North;
    TArray<FAnimSyncContainer> FenceTD;
    TArray<FAnimSyncContainer> WallTD_East;
    TArray<FAnimSyncContainer> MidColTD_East;
    TArray<FAnimSyncContainer> MidColTD_South;
    TArray<FAnimSyncContainer> WallTD_Blades_North;
    TArray<FAnimSyncContainer> WallTD_Blades_East;
    TArray<FAnimSyncContainer> MidColTD_Blades_North;
    TArray<FAnimSyncContainer> MidColTD_Blades_South;
    TArray<FAnimSyncContainer> MidColTD_Blades_East;
    TArray<FAnimSyncContainer> Blades_FenceTD;
    TArray<FAnimSyncContainer> WallTD_Bats_North;
    TArray<FAnimSyncContainer> WallTD_Bats_East;
    TArray<FAnimSyncContainer> MidColTD_Bats_North;
    TArray<FAnimSyncContainer> MidColTD_Bats_South;
    TArray<FAnimSyncContainer> MidColTD_Bats_East;
    TArray<FAnimSyncContainer> WallTD_Staff_North;
    TArray<FAnimSyncContainer> MidColTD_Staff_North;
    TArray<FAnimSyncContainer> MidColTD_Staff_East;
    TArray<FAnimSyncContainer> MidColTD_Staff_South;
    TArray<FAnimSyncContainer> WallTD_Staff_East;
    TArray<FAnimSyncContainer> WallTD_South;

    void GetAllTakedownAnimations(TArray<FTakedownDebugAnim>& Array);
    void BPE_GetPushFromGrabAnimation(const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, ESCCardinalPoints _eCardinalDirection, const FNetOrderStructGrab& _grabInfos, const FNetOrderStructGrab& _grabbedInfos, const class UActorComponent* _environment, FAnimContainer& _instigatorAnims, FAnimContainer& _victimAnim);
    void BPE_GetAnimation(InputAction _eAction, const FTargetResult& _targetInfos, const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, const FNetOrderStructTakedown& _takedownInfos, const class UActorComponent* _environment, TArray<FAnimSyncContainer>& _anims, bool& _mirror, bool _bForceOnTraversal);
};

#endif
