#ifndef UE4SS_SDK_BP_GPESpawner_HPP
#define UE4SS_SDK_BP_GPESpawner_HPP

class ABP_GPESpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    TSubclassOf<class AThrowableActor> WeaponClass;                                   // 0x02C0 (size: 0x8)
    class ABaseWeapon* WeaponSpawned;                                                 // 0x02C8 (size: 0x8)
    float TimeBeforeRespawn;                                                          // 0x02D0 (size: 0x4)

    void OnStateChanged(EThrowableState State);
    void SpawnWeapon();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GPESpawner(int32 EntryPoint);
}; // Size: 0x2D4

#endif
