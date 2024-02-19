#ifndef UE4SS_SDK_BP_Training_WeaponSpawner_HPP
#define UE4SS_SDK_BP_Training_WeaponSpawner_HPP

class ABP_Training_WeaponSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    TSubclassOf<class ABPWeapon_C> WeaponClass;                                       // 0x02C0 (size: 0x8)
    class ABaseWeapon* WeaponSpawned;                                                 // 0x02C8 (size: 0x8)
    float TimeBeforeRespawn;                                                          // 0x02D0 (size: 0x4)
    bool HasBeenPickedUp;                                                             // 0x02D4 (size: 0x1)

    void CleanWeapon();
    void Reset Weapon();
    void SpawnWeapon();
    void ReceiveBeginPlay();
    void OnStateChanged(EThrowableState State);
    void ExecuteUbergraph_BP_Training_WeaponSpawner(int32 EntryPoint);
}; // Size: 0x2D5

#endif
