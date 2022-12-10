#ifndef UE4SS_SDK_BP_BaseBreakable_HPP
#define UE4SS_SDK_BP_BaseBreakable_HPP

class ABP_BaseBreakable_C : public ABaseBreakable
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPushedObstacleComponent* PushedObstacle;
    class UAIBehaviorSwitchActorComponent* AIBehaviorSwitchActor;
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;
    class UBillboardComponent* Billboard;
    class UStaticMeshComponent* StaticMeshComp;
    bool Spawn Item At Destruction;
    TSubclassOf<class AActor> Actor to Spawn;
    bool EnableHardSleepOnDestruction;
    bool DestructionVFXEnabled;
    class UParticleSystem* DestructionVFX;
    bool DestructionSFXEnabled;
    float ImpulseRadius;
    bool bDestructibleByDamage;
    bool bDisableCollisionOnDestruction;
    FVector ActorSpawnedOffset;
    float HitResistance;
    bool bAlertAIsOnDestruction;
    class UTexture* TextureToProjectOn;
    float ProjectionLength;
    float ProjectionRadius;
    bool bOverrideMaterial;
    bool bUseGlassMaterial;
    FLinearColor PlaceholderColor;
    bool bUseFadeCam;
    float MassOverride;
    float LinearDamping;
    float AngularDamping;
    bool bMoveBillboardToTop;
    float BillboardHeightOffset;
    float HitImpulseStrength;
    float Hue;
    float Lightness;
    float Saturation;
    FName RTPC Name;
    class UAkAudioEvent* Audio Break Event;
    FVector DebrisLocation;
    class UAkAudioEvent* Audio Debris Event;
    int32 AkPlayingID;
    FBP_BaseBreakable_COnBreakableDestroyed OnBreakableDestroyed;
    void OnBreakableDestroyed();

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
    void BndEvt__BP_BaseBreakable_StaticMeshComp_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void On Re Create Physics State();
    void OnDestructionVFX(FVector Location, FVector Direction);
    void OnDestructionSFX(FVector Location, FVector Direction, float RTPC_Value, FName RTPC_Name, class UAkAudioEvent* AudioBreakEvent);
    void BndEvt__m_ReplayableDestructibleComponent_K2Node_ComponentBoundEvent_2_ComponentFractureSignature__DelegateSignature(const FVector& HitPoint, const FVector& HitDirection);
    void OnDestructionSpawnActor(FVector Location, FVector Direction);
    void ExecuteUbergraph_BP_BaseBreakable(int32 EntryPoint);
    void OnBreakableDestroyed__DelegateSignature();
};

#endif
