#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x02B0 (size: 0x8)

}; // Size: 0x2C0

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x04B8 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x04B9 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x04C0 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x04E8 (size: 0x8)
    FVector EndLocation;                                                              // 0x04F0 (size: 0xC)
    float CableLength;                                                                // 0x04FC (size: 0x4)
    int32 NumSegments;                                                                // 0x0500 (size: 0x4)
    float SubstepTime;                                                                // 0x0504 (size: 0x4)
    int32 SolverIterations;                                                           // 0x0508 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x050C (size: 0x1)
    bool bUseSubstepping;                                                             // 0x050D (size: 0x1)
    bool bSkipCableUpdateWhenNotVisible;                                              // 0x050E (size: 0x1)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;                                // 0x050F (size: 0x1)
    bool bEnableCollision;                                                            // 0x0510 (size: 0x1)
    float CollisionFriction;                                                          // 0x0514 (size: 0x4)
    FVector CableForce;                                                               // 0x0518 (size: 0xC)
    float CableGravityScale;                                                          // 0x0524 (size: 0x4)
    float CableWidth;                                                                 // 0x0528 (size: 0x4)
    int32 NumSides;                                                                   // 0x052C (size: 0x4)
    float TileMaterial;                                                               // 0x0530 (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x550

#endif
