#ifndef UE4SS_SDK_BP_BaseBreakable_HPP
#define UE4SS_SDK_BP_BaseBreakable_HPP

class ABP_BaseBreakable_C : public ABaseBreakable
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UPushedObstacleComponent* PushedObstacle;                                   // 0x0458 (size: 0x8)
    class UAIBehaviorSwitchActorComponent* AIBehaviorSwitchActor;                     // 0x0460 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;              // 0x0468 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0470 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComp;                                       // 0x0478 (size: 0x8)
    bool Spawn Item At Destruction;                                                   // 0x0480 (size: 0x1)
    TSubclassOf<class AActor> Actor to Spawn;                                         // 0x0488 (size: 0x8)
    bool EnableHardSleepOnDestruction;                                                // 0x0490 (size: 0x1)
    bool DestructionVFXEnabled;                                                       // 0x0491 (size: 0x1)
    class UParticleSystem* DestructionVFX;                                            // 0x0498 (size: 0x8)
    bool DestructionSFXEnabled;                                                       // 0x04A0 (size: 0x1)
    float ImpulseRadius;                                                              // 0x04A4 (size: 0x4)
    bool bDestructibleByDamage;                                                       // 0x04A8 (size: 0x1)
    bool bDisableCollisionOnDestruction;                                              // 0x04A9 (size: 0x1)
    FVector ActorSpawnedOffset;                                                       // 0x04AC (size: 0xC)
    float HitResistance;                                                              // 0x04B8 (size: 0x4)
    bool bAlertAIsOnDestruction;                                                      // 0x04BC (size: 0x1)
    class UTexture* TextureToProjectOn;                                               // 0x04C0 (size: 0x8)
    float ProjectionLength;                                                           // 0x04C8 (size: 0x4)
    float ProjectionRadius;                                                           // 0x04CC (size: 0x4)
    bool bOverrideMaterial;                                                           // 0x04D0 (size: 0x1)
    bool bUseGlassMaterial;                                                           // 0x04D1 (size: 0x1)
    FLinearColor PlaceHolderColor;                                                    // 0x04D4 (size: 0x10)
    bool bUseFadeCam;                                                                 // 0x04E4 (size: 0x1)
    float MassOverride;                                                               // 0x04E8 (size: 0x4)
    float LinearDamping;                                                              // 0x04EC (size: 0x4)
    float AngularDamping;                                                             // 0x04F0 (size: 0x4)
    bool bMoveBillboardToTop;                                                         // 0x04F4 (size: 0x1)
    float BillboardHeightOffset;                                                      // 0x04F8 (size: 0x4)
    float HitImpulseStrength;                                                         // 0x04FC (size: 0x4)
    float Hue;                                                                        // 0x0500 (size: 0x4)
    float Lightness;                                                                  // 0x0504 (size: 0x4)
    float Saturation;                                                                 // 0x0508 (size: 0x4)
    FName RTPC Name;                                                                  // 0x050C (size: 0x8)
    class UAkAudioEvent* Audio Break Event;                                           // 0x0518 (size: 0x8)
    FVector DebrisLocation;                                                           // 0x0520 (size: 0xC)
    class UAkAudioEvent* Audio Debris Event;                                          // 0x0530 (size: 0x8)
    int32 AkPlayingID;                                                                // 0x0538 (size: 0x4)
    FBP_BaseBreakable_COnBreakableDestroyed OnBreakableDestroyed;                     // 0x0540 (size: 0x10)
    void OnBreakableDestroyed();
    bool bDealDamageOnCostlySetup;                                                    // 0x0550 (size: 0x1)
    bool bIsBroken;                                                                   // 0x0551 (size: 0x1)
    bool bForceNoFadeCam;                                                             // 0x0552 (size: 0x1)
    class AFightingCharacter* LastPusher;                                             // 0x0558 (size: 0x8)
    bool bAlreadyCheckLastPusher;                                                     // 0x0560 (size: 0x1)

    void CostlySetupManagement(class AActor* LocalInstigator);
    void OnRep Destructible State (Replay)(EReplayableDestructibleState _eState);
    void InitInteractionObjectComps();
    void Switch Visibility(bool Show Static);
    float BPE_GetRTPCValue();
    float BPE_GetMassOverride();
    float BPE_GetHitResistance();
    void On Destruction Fracture(FVector HitPoint, FVector Hit Direction, bool Silent);
    void UpdateMaterials();
    void Is Hit Successful(FHitDescription& InHitDescription, bool& bIsSucessfull, FVector& HurtOrigin);
    void UserConstructionScript();
    void BndEvt__BP_EnvironmentalHitComponent_K2Node_ComponentBoundEvent_0_HittedDynamicDelegate__DelegateSignature(const FHitDescription& HitDescription);
    void ReceiveBeginPlay();
    void BndEvt__m_ReplayableDestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature(const FVector& HitPoint, const FVector& HitDirection);
    void On Wake Changed(bool bIsAwake);
    void On Re Create Physics State();
    void OnDestructionVFX(FVector Location, FVector Direction);
    void OnDestructionSFX(FVector Location, FVector Direction, float RTPC_Value, FName RTPC_Name, class UAkAudioEvent* AudioBreakEvent);
    void BndEvt__m_ReplayableDestructibleComponent_K2Node_ComponentBoundEvent_2_ComponentFractureSignature__DelegateSignature(const FVector& HitPoint, const FVector& HitDirection);
    void OnDestructionSpawnActor(FVector Location, FVector Direction);
    void BndEvt__BP_BaseBreakable_m_ReplayableDestructibleComponent_K2Node_ComponentBoundEvent_18_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_BaseBreakable(int32 EntryPoint);
    void OnBreakableDestroyed__DelegateSignature();
}; // Size: 0x561

#endif
