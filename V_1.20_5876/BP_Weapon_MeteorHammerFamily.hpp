#ifndef UE4SS_SDK_BP_Weapon_MeteorHammerFamily_HPP
#define UE4SS_SDK_BP_Weapon_MeteorHammerFamily_HPP

class ABP_Weapon_MeteorHammerFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0908 (size: 0x8)
    class AActor* FakeWeapon;                                                         // 0x0910 (size: 0x8)
    class USceneComponent* TargetSceneComp;                                           // 0x0918 (size: 0x8)
    FName WeaponTipSocket;                                                            // 0x0920 (size: 0x8)
    FName WeaponRootSocket;                                                           // 0x0928 (size: 0x8)
    TArray<FOrderType> FarHighGrabOrderTypes;                                         // 0x0930 (size: 0x10)
    class AActor* FarGrabTarget;                                                      // 0x0940 (size: 0x8)
    bool bWasStopped;                                                                 // 0x0948 (size: 0x1)
    class UAnimSequenceBase* ExitAnim;                                                // 0x0950 (size: 0x8)
    class USkeletalMeshComponent* LocalMeshWeaponBearer;                              // 0x0958 (size: 0x8)
    class ACharacter* localWeaponBearer_0;                                            // 0x0960 (size: 0x8)

    void FarHighGrab_Start();
    void FarHighGrab_Stop();
    void ReceiveBeginPlay();
    void CableDeactivation();
    void FarHighGrab_Cancel();
    void ExecuteUbergraph_BP_Weapon_MeteorHammerFamily(int32 EntryPoint);
}; // Size: 0x968

#endif
