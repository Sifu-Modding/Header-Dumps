#ifndef UE4SS_SDK_BP_Weapon_MeteorHammerFamily_HPP
#define UE4SS_SDK_BP_Weapon_MeteorHammerFamily_HPP

class ABP_Weapon_MeteorHammerFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCableComponent* Cable;
    class AActor* FakeWeapon;
    class USceneComponent* TargetSceneComp;
    FName WeaponTipSocket;
    FName WeaponRootSocket;
    TArray<FOrderType> FarHighGrabOrderTypes;
    class AActor* FarGrabTarget;
    bool bWasStopped;
    class UAnimSequenceBase* ExitAnim;
    class USkeletalMeshComponent* LocalMeshWeaponBearer;
    class ACharacter* localWeaponBearer_0;

    void FarHighGrab_Start();
    void FarHighGrab_Stop();
    void ReceiveBeginPlay();
    void CableDeactivation();
    void FarHighGrab_Cancel();
    void ExecuteUbergraph_BP_Weapon_MeteorHammerFamily(int32 EntryPoint);
};

#endif
