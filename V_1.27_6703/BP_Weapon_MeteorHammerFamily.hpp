#ifndef UE4SS_SDK_BP_Weapon_MeteorHammerFamily_HPP
#define UE4SS_SDK_BP_Weapon_MeteorHammerFamily_HPP

class ABP_Weapon_MeteorHammerFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0958 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0960 (size: 0x8)
    class AActor* FakeWeapon;                                                         // 0x0968 (size: 0x8)
    class USceneComponent* TargetSceneComp;                                           // 0x0970 (size: 0x8)
    FName WeaponTipSocket;                                                            // 0x0978 (size: 0x8)
    FName WeaponRootSocket;                                                           // 0x0980 (size: 0x8)
    TArray<FOrderType> FarHighGrabOrderTypes;                                         // 0x0988 (size: 0x10)
    class AActor* FarGrabTarget;                                                      // 0x0998 (size: 0x8)
    bool bWasStopped;                                                                 // 0x09A0 (size: 0x1)
    class UAnimSequenceBase* ExitAnim;                                                // 0x09A8 (size: 0x8)
    class USkeletalMeshComponent* LocalMeshWeaponBearer;                              // 0x09B0 (size: 0x8)
    class ACharacter* localWeaponBearer_0;                                            // 0x09B8 (size: 0x8)

    void OnRep_TargetSceneComp();
    void OnRep_bWasStopped();
    void OnRep_LocalWeaponBearer_0();
    void OnRep_FarGrabTarget();
    void FarHighGrab_Start();
    void FarHighGrab_Stop();
    void ReceiveBeginPlay();
    void CableDeactivation();
    void FarHighGrab_Cancel();
    void ExecuteUbergraph_BP_Weapon_MeteorHammerFamily(int32 EntryPoint);
}; // Size: 0x9C0

#endif
