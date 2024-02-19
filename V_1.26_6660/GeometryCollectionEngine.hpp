#ifndef UE4SS_SDK_GeometryCollectionEngine_HPP
#define UE4SS_SDK_GeometryCollectionEngine_HPP

#include "GeometryCollectionEngine_enums.hpp"

struct FChaosBreakingEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Velocity;                                                                 // 0x000C (size: 0xC)
    float Mass;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FChaosBreakingEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinRadius;                                                                  // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinMass;                                                                    // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosBreakingSortMethod SortMethod;                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FChaosCollisionEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Normal;                                                                   // 0x000C (size: 0xC)
    FVector Velocity1;                                                                // 0x0018 (size: 0xC)
    FVector Velocity2;                                                                // 0x0024 (size: 0xC)
    float Mass1;                                                                      // 0x0030 (size: 0x4)
    float Mass2;                                                                      // 0x0034 (size: 0x4)
    FVector Impulse;                                                                  // 0x0038 (size: 0xC)

}; // Size: 0x58

struct FChaosCollisionEventRequestSettings
{
    int32 MaxNumberResults;                                                           // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinImpulse;                                                                 // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosCollisionSortMethod SortMethod;                                             // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FChaosTrailingEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Velocity;                                                                 // 0x000C (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0018 (size: 0xC)
    float Mass;                                                                       // 0x0024 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FChaosTrailingEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinAngularSpeed;                                                            // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosTrailingSortMethod SortMethod;                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FGeomComponentCacheParameters
{
    EGeometryCollectionCacheType CacheMode;                                           // 0x0000 (size: 0x1)
    class UGeometryCollectionCache* TargetCache;                                      // 0x0008 (size: 0x8)
    float ReverseCacheBeginTime;                                                      // 0x0010 (size: 0x4)
    bool SaveCollisionData;                                                           // 0x0014 (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x0015 (size: 0x1)
    int32 CollisionDataSizeMax;                                                       // 0x0018 (size: 0x4)
    bool DoCollisionDataSpatialHash;                                                  // 0x001C (size: 0x1)
    float CollisionDataSpatialHashRadius;                                             // 0x0020 (size: 0x4)
    int32 MaxCollisionPerCell;                                                        // 0x0024 (size: 0x4)
    bool SaveBreakingData;                                                            // 0x0028 (size: 0x1)
    bool DoGenerateBreakingData;                                                      // 0x0029 (size: 0x1)
    int32 BreakingDataSizeMax;                                                        // 0x002C (size: 0x4)
    bool DoBreakingDataSpatialHash;                                                   // 0x0030 (size: 0x1)
    float BreakingDataSpatialHashRadius;                                              // 0x0034 (size: 0x4)
    int32 MaxBreakingPerCell;                                                         // 0x0038 (size: 0x4)
    bool SaveTrailingData;                                                            // 0x003C (size: 0x1)
    bool DoGenerateTrailingData;                                                      // 0x003D (size: 0x1)
    int32 TrailingDataSizeMax;                                                        // 0x0040 (size: 0x4)
    float TrailingMinSpeedThreshold;                                                  // 0x0044 (size: 0x4)
    float TrailingMinVolumeThreshold;                                                 // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    class AChaosSolverActor* Solver;                                                  // 0x0008 (size: 0x8)
    class AGeometryCollectionActor* GeometryCollection;                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FGeometryCollectionDebugDrawWarningMessage
{
}; // Size: 0x1

struct FGeometryCollectionRepData
{
}; // Size: 0x18

struct FGeometryCollectionSizeSpecificData
{
    float MaxSize;                                                                    // 0x0000 (size: 0x4)
    ECollisionTypeEnum CollisionType;                                                 // 0x0004 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x0005 (size: 0x1)
    int32 MinLevelSetResolution;                                                      // 0x0008 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x000C (size: 0x4)
    int32 MinClusterLevelSetResolution;                                               // 0x0010 (size: 0x4)
    int32 MaxClusterLevelSetResolution;                                               // 0x0014 (size: 0x4)
    int32 CollisionObjectReductionPercentage;                                         // 0x0018 (size: 0x4)
    float CollisionParticlesFraction;                                                 // 0x001C (size: 0x4)
    int32 MaximumCollisionParticles;                                                  // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FGeometryCollectionSource
{
    FSoftObjectPath SourceGeometryObject;                                             // 0x0000 (size: 0x18)
    FTransform LocalTransform;                                                        // 0x0020 (size: 0x30)
    TArray<class UMaterialInterface*> SourceMaterial;                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

class AGeometryCollectionActor : public AActor
{
    class UGeometryCollectionComponent* GeometryCollectionComponent;                  // 0x02B0 (size: 0x8)
    class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x02B8 (size: 0x8)

    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
}; // Size: 0x2C0

class AGeometryCollectionDebugDrawActor : public AActor
{
    FGeometryCollectionDebugDrawWarningMessage WarningMessage;                        // 0x02B0 (size: 0x1)
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;             // 0x02B8 (size: 0x18)
    bool bDebugDrawWholeCollection;                                                   // 0x02D0 (size: 0x1)
    bool bDebugDrawHierarchy;                                                         // 0x02D1 (size: 0x1)
    bool bDebugDrawClustering;                                                        // 0x02D2 (size: 0x1)
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                       // 0x02D3 (size: 0x1)
    bool bShowRigidBodyId;                                                            // 0x02D4 (size: 0x1)
    bool bShowRigidBodyCollision;                                                     // 0x02D5 (size: 0x1)
    bool bCollisionAtOrigin;                                                          // 0x02D6 (size: 0x1)
    bool bShowRigidBodyTransform;                                                     // 0x02D7 (size: 0x1)
    bool bShowRigidBodyInertia;                                                       // 0x02D8 (size: 0x1)
    bool bShowRigidBodyVelocity;                                                      // 0x02D9 (size: 0x1)
    bool bShowRigidBodyForce;                                                         // 0x02DA (size: 0x1)
    bool bShowRigidBodyInfos;                                                         // 0x02DB (size: 0x1)
    bool bShowTransformIndex;                                                         // 0x02DC (size: 0x1)
    bool bShowTransform;                                                              // 0x02DD (size: 0x1)
    bool bShowParent;                                                                 // 0x02DE (size: 0x1)
    bool bShowLevel;                                                                  // 0x02DF (size: 0x1)
    bool bShowConnectivityEdges;                                                      // 0x02E0 (size: 0x1)
    bool bShowGeometryIndex;                                                          // 0x02E1 (size: 0x1)
    bool bShowGeometryTransform;                                                      // 0x02E2 (size: 0x1)
    bool bShowBoundingBox;                                                            // 0x02E3 (size: 0x1)
    bool bShowFaces;                                                                  // 0x02E4 (size: 0x1)
    bool bShowFaceIndices;                                                            // 0x02E5 (size: 0x1)
    bool bShowFaceNormals;                                                            // 0x02E6 (size: 0x1)
    bool bShowSingleFace;                                                             // 0x02E7 (size: 0x1)
    int32 SingleFaceIndex;                                                            // 0x02E8 (size: 0x4)
    bool bShowVertices;                                                               // 0x02EC (size: 0x1)
    bool bShowVertexIndices;                                                          // 0x02ED (size: 0x1)
    bool bShowVertexNormals;                                                          // 0x02EE (size: 0x1)
    bool bUseActiveVisualization;                                                     // 0x02EF (size: 0x1)
    float PointThickness;                                                             // 0x02F0 (size: 0x4)
    float LineThickness;                                                              // 0x02F4 (size: 0x4)
    bool bTextShadow;                                                                 // 0x02F8 (size: 0x1)
    float TextScale;                                                                  // 0x02FC (size: 0x4)
    float NormalScale;                                                                // 0x0300 (size: 0x4)
    float AxisScale;                                                                  // 0x0304 (size: 0x4)
    float ArrowScale;                                                                 // 0x0308 (size: 0x4)
    FColor RigidBodyIdColor;                                                          // 0x030C (size: 0x4)
    float RigidBodyTransformScale;                                                    // 0x0310 (size: 0x4)
    FColor RigidBodyCollisionColor;                                                   // 0x0314 (size: 0x4)
    FColor RigidBodyInertiaColor;                                                     // 0x0318 (size: 0x4)
    FColor RigidBodyVelocityColor;                                                    // 0x031C (size: 0x4)
    FColor RigidBodyForceColor;                                                       // 0x0320 (size: 0x4)
    FColor RigidBodyInfoColor;                                                        // 0x0324 (size: 0x4)
    FColor TransformIndexColor;                                                       // 0x0328 (size: 0x4)
    float TransformScale;                                                             // 0x032C (size: 0x4)
    FColor LevelColor;                                                                // 0x0330 (size: 0x4)
    FColor ParentColor;                                                               // 0x0334 (size: 0x4)
    float ConnectivityEdgeThickness;                                                  // 0x0338 (size: 0x4)
    FColor GeometryIndexColor;                                                        // 0x033C (size: 0x4)
    float GeometryTransformScale;                                                     // 0x0340 (size: 0x4)
    FColor BoundingBoxColor;                                                          // 0x0344 (size: 0x4)
    FColor FaceColor;                                                                 // 0x0348 (size: 0x4)
    FColor FaceIndexColor;                                                            // 0x034C (size: 0x4)
    FColor FaceNormalColor;                                                           // 0x0350 (size: 0x4)
    FColor SingleFaceColor;                                                           // 0x0354 (size: 0x4)
    FColor VertexColor;                                                               // 0x0358 (size: 0x4)
    FColor VertexIndexColor;                                                          // 0x035C (size: 0x4)
    FColor VertexNormalColor;                                                         // 0x0360 (size: 0x4)
    class UBillboardComponent* SpriteComponent;                                       // 0x0368 (size: 0x8)

}; // Size: 0x3A0

class AGeometryCollectionRenderLevelSetActor : public AActor
{
    class UVolumeTexture* TargetVolumeTexture;                                        // 0x02B0 (size: 0x8)
    class UMaterial* RayMarchMaterial;                                                // 0x02B8 (size: 0x8)
    float SurfaceTolerance;                                                           // 0x02C0 (size: 0x4)
    float Isovalue;                                                                   // 0x02C4 (size: 0x4)
    bool Enabled;                                                                     // 0x02C8 (size: 0x1)
    bool RenderVolumeBoundingBox;                                                     // 0x02C9 (size: 0x1)

}; // Size: 0x350

class UChaosDestructionListener : public USceneComponent
{
    uint8 bIsCollisionEventListeningEnabled;                                          // 0x0208 (size: 0x1)
    uint8 bIsBreakingEventListeningEnabled;                                           // 0x0208 (size: 0x1)
    uint8 bIsTrailingEventListeningEnabled;                                           // 0x0208 (size: 0x1)
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;                // 0x020C (size: 0x18)
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;                  // 0x0224 (size: 0x18)
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;                  // 0x023C (size: 0x18)
    TSet<AChaosSolverActor*> ChaosSolverActors;                                       // 0x0258 (size: 0x50)
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;                         // 0x02A8 (size: 0x50)
    FChaosDestructionListenerOnCollisionEvents OnCollisionEvents;                     // 0x02F8 (size: 0x10)
    void OnChaosCollisionEvents(const TArray<FChaosCollisionEventData>& CollisionEvents);
    FChaosDestructionListenerOnBreakingEvents OnBreakingEvents;                       // 0x0308 (size: 0x10)
    void OnChaosBreakingEvents(const TArray<FChaosBreakingEventData>& BreakingEvents);
    FChaosDestructionListenerOnTrailingEvents OnTrailingEvents;                       // 0x0318 (size: 0x10)
    void OnChaosTrailingEvents(const TArray<FChaosTrailingEventData>& TrailingEvents);

    void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
}; // Size: 0x430

class UGeometryCollection : public UObject
{
    TArray<FGeometryCollectionSource> GeometrySource;                                 // 0x0030 (size: 0x10)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0040 (size: 0x10)
    ECollisionTypeEnum CollisionType;                                                 // 0x0050 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x0051 (size: 0x1)
    int32 MinLevelSetResolution;                                                      // 0x0054 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x0058 (size: 0x4)
    int32 MinClusterLevelSetResolution;                                               // 0x005C (size: 0x4)
    int32 MaxClusterLevelSetResolution;                                               // 0x0060 (size: 0x4)
    float CollisionObjectReductionPercentage;                                         // 0x0064 (size: 0x4)
    bool bMassAsDensity;                                                              // 0x0068 (size: 0x1)
    float Mass;                                                                       // 0x006C (size: 0x4)
    float MinimumMassClamp;                                                           // 0x0070 (size: 0x4)
    float CollisionParticlesFraction;                                                 // 0x0074 (size: 0x4)
    int32 MaximumCollisionParticles;                                                  // 0x0078 (size: 0x4)
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;                     // 0x0080 (size: 0x10)
    bool EnableRemovePiecesOnFracture;                                                // 0x0090 (size: 0x1)
    TArray<class UMaterialInterface*> RemoveOnFractureMaterials;                      // 0x0098 (size: 0x10)
    FGuid PersistentGuid;                                                             // 0x00A8 (size: 0x10)
    FGuid StateGuid;                                                                  // 0x00B8 (size: 0x10)
    int32 BoneSelectedMaterialIndex;                                                  // 0x00C8 (size: 0x4)

}; // Size: 0xE0

class UGeometryCollectionCache : public UObject
{
    FRecordedTransformTrack RecordedData;                                             // 0x0028 (size: 0x10)
    class UGeometryCollection* SupportedCollection;                                   // 0x0038 (size: 0x8)
    FGuid CompatibleCollectionState;                                                  // 0x0040 (size: 0x10)

}; // Size: 0x50

class UGeometryCollectionComponent : public UMeshComponent
{
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x04C0 (size: 0x8)
    class UGeometryCollection* RestCollection;                                        // 0x05A8 (size: 0x8)
    TArray<class AFieldSystemActor*> InitializationFields;                            // 0x05B0 (size: 0x10)
    bool Simulating;                                                                  // 0x05C0 (size: 0x1)
    EObjectStateTypeEnum ObjectType;                                                  // 0x05C8 (size: 0x1)
    bool EnableClustering;                                                            // 0x05C9 (size: 0x1)
    int32 ClusterGroupIndex;                                                          // 0x05CC (size: 0x4)
    int32 MaxClusterLevel;                                                            // 0x05D0 (size: 0x4)
    TArray<float> DamageThreshold;                                                    // 0x05D8 (size: 0x10)
    EClusterConnectionTypeEnum ClusterConnectionType;                                 // 0x05E8 (size: 0x1)
    int32 CollisionGroup;                                                             // 0x05EC (size: 0x4)
    float CollisionSampleFraction;                                                    // 0x05F0 (size: 0x4)
    float LinearEtherDrag;                                                            // 0x05F4 (size: 0x4)
    float AngularEtherDrag;                                                           // 0x05F8 (size: 0x4)
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x0600 (size: 0x8)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x0608 (size: 0x1)
    FVector InitialLinearVelocity;                                                    // 0x060C (size: 0xC)
    FVector InitialAngularVelocity;                                                   // 0x0618 (size: 0xC)
    class UPhysicalMaterial* PhysicalMaterialOverride;                                // 0x0628 (size: 0x8)
    FGeomComponentCacheParameters CacheParameters;                                    // 0x0630 (size: 0x50)
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange; // 0x0680 (size: 0x10)
    void NotifyGeometryCollectionPhysicsStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x0690 (size: 0x10)
    void NotifyGeometryCollectionPhysicsLoadingStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;                  // 0x06B8 (size: 0x10)
    void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);
    float DesiredCacheTime;                                                           // 0x06C8 (size: 0x4)
    bool CachePlayback;                                                               // 0x06CC (size: 0x1)
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;      // 0x06D0 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    bool bNotifyBreaks;                                                               // 0x06E0 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x06E1 (size: 0x1)
    bool bEnableReplication;                                                          // 0x06E2 (size: 0x1)
    bool bEnableAbandonAfterLevel;                                                    // 0x06E3 (size: 0x1)
    int32 ReplicationAbandonClusterLevel;                                             // 0x06E4 (size: 0x4)
    FGeometryCollectionRepData RepData;                                               // 0x06E8 (size: 0x18)
    class UBodySetup* DummyBodySetup;                                                 // 0x0950 (size: 0x8)

    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void OnRep_RepData(const FGeometryCollectionRepData& OldData);
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NetAbandonCluster(int32 TransformIndex);
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyKinematicField(float Radius, FVector Position);
}; // Size: 0x980

class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
    class AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;        // 0x00C0 (size: 0x8)
    class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0x00C8 (size: 0x8)

}; // Size: 0xD8

class USkeletalMeshSimulationComponent : public UActorComponent
{
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x00C8 (size: 0x8)
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x00D0 (size: 0x8)
    class UPhysicsAsset* OverridePhysicsAsset;                                        // 0x00D8 (size: 0x8)
    bool bSimulating;                                                                 // 0x00E0 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x00E1 (size: 0x1)
    EObjectStateTypeEnum ObjectType;                                                  // 0x00E2 (size: 0x1)
    float Density;                                                                    // 0x00E4 (size: 0x4)
    float MinMass;                                                                    // 0x00E8 (size: 0x4)
    float MaxMass;                                                                    // 0x00EC (size: 0x4)
    ECollisionTypeEnum CollisionType;                                                 // 0x00F0 (size: 0x1)
    float ImplicitShapeParticlesPerUnitArea;                                          // 0x00F4 (size: 0x4)
    int32 ImplicitShapeMinNumParticles;                                               // 0x00F8 (size: 0x4)
    int32 ImplicitShapeMaxNumParticles;                                               // 0x00FC (size: 0x4)
    int32 MinLevelSetResolution;                                                      // 0x0100 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x0104 (size: 0x4)
    int32 CollisionGroup;                                                             // 0x0108 (size: 0x4)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x010C (size: 0x1)
    FVector InitialLinearVelocity;                                                    // 0x0110 (size: 0xC)
    FVector InitialAngularVelocity;                                                   // 0x011C (size: 0xC)
    FSkeletalMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;  // 0x0128 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
}; // Size: 0x148

class UStaticMeshSimulationComponent : public UActorComponent
{
    bool Simulating;                                                                  // 0x00C8 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x00C9 (size: 0x1)
    EObjectStateTypeEnum ObjectType;                                                  // 0x00CA (size: 0x1)
    float Mass;                                                                       // 0x00CC (size: 0x4)
    ECollisionTypeEnum CollisionType;                                                 // 0x00D0 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x00D1 (size: 0x1)
    int32 MinLevelSetResolution;                                                      // 0x00D4 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x00D8 (size: 0x4)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x00DC (size: 0x1)
    FVector InitialLinearVelocity;                                                    // 0x00E0 (size: 0xC)
    FVector InitialAngularVelocity;                                                   // 0x00EC (size: 0xC)
    float DamageThreshold;                                                            // 0x00F8 (size: 0x4)
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x0100 (size: 0x8)
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x0108 (size: 0x8)
    FStaticMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;    // 0x0110 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    TArray<class UPrimitiveComponent*> SimulatedComponents;                           // 0x0130 (size: 0x10)

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void ForceRecreatePhysicsState();
}; // Size: 0x148

#endif
