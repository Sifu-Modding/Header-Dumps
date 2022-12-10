#ifndef UE4SS_SDK_BP_Throwable_HeavyLow_Master_HPP
#define UE4SS_SDK_BP_Throwable_HeavyLow_Master_HPP

class ABP_Throwable_HeavyLow_Master_C : public ABP_Throwable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UReplayableDestructibleComponent* ReplayableDestructible;
    class USphereComponent* Sphere;
    class UFakePhysicComponent* FakePhysic;
    class UPushedObstacleComponent* PushedObstacle;
    class UBillboardComponent* Billboard;
    class UDestructibleMesh* New Mesh;
    class UReplayableDestructibleComponent* Replayable Destructible;
    float Hue;
    float Lightness;
    float Saturation;

    InputAction BPE_FindAppropriateActionFromContext(class AFightingCharacter* _user);
    void Get_Hit_VFX(EGuardType GuardingType, TArray<class UParticleSystem*>& ParticleSystems);
    void UserConstructionScript();
    void BPE_OnObjectBreak(bool _bIsSilent);
    void ReceiveBeginPlay();
    void On Rep Broken State(bool bBroken);
    void ExecuteUbergraph_BP_Throwable_HeavyLow_Master(int32 EntryPoint);
};

#endif
