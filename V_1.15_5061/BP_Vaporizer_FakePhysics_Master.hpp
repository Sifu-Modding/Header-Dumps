#ifndef UE4SS_SDK_BP_Vaporizer_FakePhysics_Master_HPP
#define UE4SS_SDK_BP_Vaporizer_FakePhysics_Master_HPP

class ABP_Vaporizer_FakePhysics_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* FX_Interaction;
    class UStaticMeshComponent* StaticMesh_LightRagdoll;
    class UStaticMeshComponent* StaticMesh_Vaporizer;
    class UFakePhysicComponent* FakePhysic;
    class UBoxComponent* Box_Coll;
    class UDecalComponent* DecalFloor;
    class UDecalComponent* DecalOrigin;
    class USceneComponent* DecalRotator;
    class USceneComponent* DefaultSceneRoot;
    class UPrimitiveComponent* Colliding Object;
    float CollidingSpeed;
    bool Is On Breakable?;
    class UActorComponent* NewVar_0;
    EFightingActionState Action State;
    bool Random Z Scale ?;
    bool Scale OR Disapear;
    bool Scaled When Activeted?;
    FVector Activated Scale;
    TEnumAsByte<AKE_Vaporize_Switch> AKE_Vaporize_Switch;
    bool DecalSpawn;
    bool DecalFloor(Traversal);
    bool FadeMaterial;
    bool Has been Activated;
    bool Random Decal Rotation;
    bool Is Physiced;
    int32 Index_FadeMat;
    bool Is Vaporizer;
    TEnumAsByte<AKE_FakePhysical_Switch> AKE_FakePhysical_Switch;
    class AActor* Interacting Actor;
    TArray<EFightingActionState> IdleByActionStates;
    TArray<EFightingActionState> ActivatedByActionStates;
    bool Is_Both;
    class UParticleSystem* FX_Activation;
    class UParticleSystem* FX_Medium;
    float Max Bound Size;
    float Min Draw Distance;
    float Max Draw Distance;
    float CPD_Hue;
    float CPD_Lightness;
    float CPD_Saturation;
    FVaporizerReplayInfo VaporizerReplayInfo;

    void OnRep_VaporizerReplayInfo();
    void OnCollisionDetected(bool bCharacterPushed);
    void Draw Distance by Bounds(class UStaticMeshComponent* Target, float Max Bound Size);
    void Trigger SFX_Physical();
    void Trigger SFX_Vaporize();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Box_Coll_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Vaporizer_FakePhysics_Master(int32 EntryPoint);
};

#endif
