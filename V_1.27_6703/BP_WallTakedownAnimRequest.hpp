#ifndef UE4SS_SDK_BP_WallTakedownAnimRequest_HPP
#define UE4SS_SDK_BP_WallTakedownAnimRequest_HPP

class UBP_WallTakedownAnimRequest_C : public UBP_BaseTakedownAnimRequest_C
{
    TArray<FAnimSyncContainer> WallTD_North;                                          // 0x00B8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_North;                                        // 0x00C8 (size: 0x10)
    TArray<FAnimSyncContainer> FenceTD;                                               // 0x00D8 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_East;                                           // 0x00E8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_East;                                         // 0x00F8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_South;                                        // 0x0108 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_Blades_North;                                   // 0x0118 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_Blades_East;                                    // 0x0128 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Blades_North;                                 // 0x0138 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Blades_South;                                 // 0x0148 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Blades_East;                                  // 0x0158 (size: 0x10)
    TArray<FAnimSyncContainer> Blades_FenceTD;                                        // 0x0168 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_Bats_North;                                     // 0x0178 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_Bats_East;                                      // 0x0188 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Bats_North;                                   // 0x0198 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Bats_South;                                   // 0x01A8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Bats_East;                                    // 0x01B8 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_Staff_North;                                    // 0x01C8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Staff_North;                                  // 0x01D8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Staff_East;                                   // 0x01E8 (size: 0x10)
    TArray<FAnimSyncContainer> MidColTD_Staff_South;                                  // 0x01F8 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_Staff_East;                                     // 0x0208 (size: 0x10)
    TArray<FAnimSyncContainer> WallTD_South;                                          // 0x0218 (size: 0x10)

    void GetAllTakedownAnimations(TArray<FTakedownDebugAnim>& Array);
    void BPE_GetPushFromGrabAnimation(const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, ESCCardinalPoints _eCardinalDirection, const FNetOrderStructGrab& _grabInfos, const FNetOrderStructGrab& _grabbedInfos, const class UActorComponent* _environment, FAnimContainer& _instigatorAnims, FAnimContainer& _victimAnim);
    void BPE_GetAnimation(InputAction _eAction, const FTargetResult& _targetInfos, const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, const FNetOrderStructTakedown& _takedownInfos, const class UActorComponent* _environment, TArray<FAnimSyncContainer>& _anims, bool& _mirror, bool _bForceOnTraversal);
}; // Size: 0x228

#endif
