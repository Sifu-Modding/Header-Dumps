#ifndef UE4SS_SDK_BP_Throwable_HeavyLow_Master_HPP
#define UE4SS_SDK_BP_Throwable_HeavyLow_Master_HPP

class ABP_Throwable_HeavyLow_Master_C : public ABP_Throwable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0848 (size: 0x8)
    class UReplayableDestructibleComponent* ReplayableDestructible;                   // 0x0850 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0858 (size: 0x8)
    class UFakePhysicComponent* FakePhysic;                                           // 0x0860 (size: 0x8)
    class UPushedObstacleComponent* PushedObstacle;                                   // 0x0868 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0870 (size: 0x8)
    class UDestructibleMesh* New Mesh;                                                // 0x0878 (size: 0x8)
    class UReplayableDestructibleComponent* Replayable Destructible;                  // 0x0880 (size: 0x8)
    float Hue;                                                                        // 0x0888 (size: 0x4)
    float Lightness;                                                                  // 0x088C (size: 0x4)
    float Saturation;                                                                 // 0x0890 (size: 0x4)

    InputAction BPE_FindAppropriateActionFromContext(class AFightingCharacter* _user);
    void Get_Hit_VFX(EGuardType GuardingType, TArray<class UParticleSystem*>& ParticleSystems);
    void UserConstructionScript();
    void BPE_OnObjectBreak(bool _bIsSilent);
    void ReceiveBeginPlay();
    void On Rep Broken State(bool bBroken);
    void ExecuteUbergraph_BP_Throwable_HeavyLow_Master(int32 EntryPoint);
}; // Size: 0x894

#endif
