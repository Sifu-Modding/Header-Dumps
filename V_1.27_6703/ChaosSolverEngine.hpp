#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

struct FBreakEventCallbackWrapper
{
}; // Size: 0x40

struct FChaosBreakEvent
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FVector Velocity;                                                                 // 0x0014 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0020 (size: 0xC)
    float Mass;                                                                       // 0x002C (size: 0x4)

}; // Size: 0x30

struct FChaosDebugSubstepControl
{
    bool bPause;                                                                      // 0x0000 (size: 0x1)
    bool bSubstep;                                                                    // 0x0001 (size: 0x1)
    bool bStep;                                                                       // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;                                                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FChaosPhysicsCollisionInfo
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    class UPrimitiveComponent* OtherComponent;                                        // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0xC)
    FVector Normal;                                                                   // 0x001C (size: 0xC)
    FVector AccumulatedImpulse;                                                       // 0x0028 (size: 0xC)
    FVector Velocity;                                                                 // 0x0034 (size: 0xC)
    FVector OtherVelocity;                                                            // 0x0040 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x004C (size: 0xC)
    FVector OtherAngularVelocity;                                                     // 0x0058 (size: 0xC)
    float Mass;                                                                       // 0x0064 (size: 0x4)
    float OtherMass;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class AChaosSolverActor : public AActor
{
    FChaosSolverConfiguration Properties;                                             // 0x02B0 (size: 0x68)
    float TimeStepMultiplier;                                                         // 0x0318 (size: 0x4)
    int32 CollisionIterations;                                                        // 0x031C (size: 0x4)
    int32 PushOutIterations;                                                          // 0x0320 (size: 0x4)
    int32 PushOutPairIterations;                                                      // 0x0324 (size: 0x4)
    float ClusterConnectionFactor;                                                    // 0x0328 (size: 0x4)
    EClusterConnectionTypeEnum ClusterUnionConnectionType;                            // 0x032C (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x032D (size: 0x1)
    FSolverCollisionFilterSettings CollisionFilterSettings;                           // 0x0330 (size: 0x10)
    bool DoGenerateBreakingData;                                                      // 0x0340 (size: 0x1)
    FSolverBreakingFilterSettings BreakingFilterSettings;                             // 0x0344 (size: 0x10)
    bool DoGenerateTrailingData;                                                      // 0x0354 (size: 0x1)
    FSolverTrailingFilterSettings TrailingFilterSettings;                             // 0x0358 (size: 0x10)
    float MassScale;                                                                  // 0x0368 (size: 0x4)
    bool bGenerateContactGraph;                                                       // 0x036C (size: 0x1)
    bool bHasFloor;                                                                   // 0x036D (size: 0x1)
    float FloorHeight;                                                                // 0x0370 (size: 0x4)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;                               // 0x0374 (size: 0x3)
    class UBillboardComponent* SpriteComponent;                                       // 0x0378 (size: 0x8)
    class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;            // 0x0398 (size: 0x8)

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x3B0

class IChaosNotifyHandlerInterface : public IInterface
{
}; // Size: 0x28

class UChaosDebugDrawComponent : public UActorComponent
{
}; // Size: 0xC8

class UChaosEventListenerComponent : public UActorComponent
{
}; // Size: 0xC8

class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    TMap<class UPrimitiveComponent*, class FChaosHandlerSet> CollisionEventRegistrations; // 0x01D8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x0228 (size: 0x50)

}; // Size: 0x280

class UChaosSolver : public UObject
{
}; // Size: 0x28

class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28

class UChaosSolverSettings : public UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;                                      // 0x0040 (size: 0x18)

}; // Size: 0x58

#endif
