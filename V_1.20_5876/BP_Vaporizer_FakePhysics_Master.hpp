#ifndef UE4SS_SDK_BP_Vaporizer_FakePhysics_Master_HPP
#define UE4SS_SDK_BP_Vaporizer_FakePhysics_Master_HPP

class ABP_Vaporizer_FakePhysics_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* FX_Interaction;                                   // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_LightRagdoll;                              // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Vaporizer;                                 // 0x02C8 (size: 0x8)
    class UFakePhysicComponent* FakePhysic;                                           // 0x02D0 (size: 0x8)
    class UBoxComponent* Box_Coll;                                                    // 0x02D8 (size: 0x8)
    class UDecalComponent* DecalFloor;                                                // 0x02E0 (size: 0x8)
    class UDecalComponent* DecalOrigin;                                               // 0x02E8 (size: 0x8)
    class USceneComponent* DecalRotator;                                              // 0x02F0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F8 (size: 0x8)
    class UPrimitiveComponent* Colliding Object;                                      // 0x0300 (size: 0x8)
    float CollidingSpeed;                                                             // 0x0308 (size: 0x4)
    bool Is On Breakable?;                                                            // 0x030C (size: 0x1)
    class UActorComponent* NewVar_0;                                                  // 0x0310 (size: 0x8)
    EFightingActionState Action State;                                                // 0x0318 (size: 0x1)
    bool Random Z Scale ?;                                                            // 0x0319 (size: 0x1)
    bool Scale OR Disapear;                                                           // 0x031A (size: 0x1)
    bool Scaled When Activeted?;                                                      // 0x031B (size: 0x1)
    FVector Activated Scale;                                                          // 0x031C (size: 0xC)
    TEnumAsByte<AKE_Vaporize_Switch> AKE_Vaporize_Switch;                             // 0x0328 (size: 0x1)
    bool DecalSpawn;                                                                  // 0x0329 (size: 0x1)
    bool DecalFloor(Traversal);                                                       // 0x032A (size: 0x1)
    bool FadeMaterial;                                                                // 0x032B (size: 0x1)
    bool Has been Activated;                                                          // 0x032C (size: 0x1)
    bool Random Decal Rotation;                                                       // 0x032D (size: 0x1)
    bool Is Physiced;                                                                 // 0x032E (size: 0x1)
    int32 Index_FadeMat;                                                              // 0x0330 (size: 0x4)
    bool Is Vaporizer;                                                                // 0x0334 (size: 0x1)
    TEnumAsByte<AKE_FakePhysical_Switch> AKE_FakePhysical_Switch;                     // 0x0335 (size: 0x1)
    class AActor* Interacting Actor;                                                  // 0x0338 (size: 0x8)
    TArray<EFightingActionState> IdleByActionStates;                                  // 0x0340 (size: 0x10)
    TArray<EFightingActionState> ActivatedByActionStates;                             // 0x0350 (size: 0x10)
    bool Is_Both;                                                                     // 0x0360 (size: 0x1)
    class UParticleSystem* FX_Activation;                                             // 0x0368 (size: 0x8)
    class UParticleSystem* FX_Medium;                                                 // 0x0370 (size: 0x8)
    float Max Bound Size;                                                             // 0x0378 (size: 0x4)
    float Min Draw Distance;                                                          // 0x037C (size: 0x4)
    float Max Draw Distance;                                                          // 0x0380 (size: 0x4)
    float CPD_Hue;                                                                    // 0x0384 (size: 0x4)
    float CPD_Lightness;                                                              // 0x0388 (size: 0x4)
    float CPD_Saturation;                                                             // 0x038C (size: 0x4)
    FVaporizerReplayInfo VaporizerReplayInfo;                                         // 0x0390 (size: 0x2)
    bool UseTrueHSL CPDP;                                                             // 0x0392 (size: 0x1)

    void OnRep_VaporizerReplayInfo();
    void OnCollisionDetected(bool bCharacterPushed);
    void Draw Distance by Bounds(class UStaticMeshComponent* Target, float Max Bound Size);
    void Trigger SFX_Physical();
    void Trigger SFX_Vaporize();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Box_Coll_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Vaporizer_FakePhysics_Master(int32 EntryPoint);
}; // Size: 0x393

#endif
