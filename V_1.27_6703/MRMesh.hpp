#ifndef UE4SS_SDK_MRMesh_HPP
#define UE4SS_SDK_MRMesh_HPP

#include "MRMesh_enums.hpp"

struct FMRMeshConfiguration
{
}; // Size: 0x1

class UMRMeshComponent : public UPrimitiveComponent
{
    class UMaterialInterface* Material;                                               // 0x04A0 (size: 0x8)
    class UMaterialInterface* WireframeMaterial;                                      // 0x04A8 (size: 0x8)
    bool bCreateMeshProxySections;                                                    // 0x04B0 (size: 0x1)
    bool bUpdateNavMeshOnMeshUpdate;                                                  // 0x04B1 (size: 0x1)
    bool bNeverCreateCollisionMesh;                                                   // 0x04B2 (size: 0x1)
    class UBodySetup* CachedBodySetup;                                                // 0x04B8 (size: 0x8)
    TArray<class UBodySetup*> BodySetups;                                             // 0x04C0 (size: 0x10)

    void SetWireframeMaterial(class UMaterialInterface* InMaterial);
    void SetWireframeColor(const FLinearColor& InColor);
    void SetUseWireframe(bool bUseWireframe);
    void SetEnableMeshOcclusion(bool bEnable);
    bool IsConnected();
    FLinearColor GetWireframeColor();
    bool GetUseWireframe();
    bool GetEnableMeshOcclusion();
    void ForceNavMeshUpdate();
    void Clear();
}; // Size: 0x550

class UMeshReconstructorBase : public UObject
{

    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(class UMRMeshComponent* Mesh);
}; // Size: 0x28

class UMockDataMeshTrackerComponent : public USceneComponent
{
    FMockDataMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;           // 0x0208 (size: 0x10)
    void OnMockDataMeshTrackerUpdated(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    bool ScanWorld;                                                                   // 0x0218 (size: 0x1)
    bool RequestNormals;                                                              // 0x0219 (size: 0x1)
    bool RequestVertexConfidence;                                                     // 0x021A (size: 0x1)
    EMeshTrackerVertexColorMode VertexColorMode;                                      // 0x021B (size: 0x1)
    TArray<FColor> BlockVertexColors;                                                 // 0x0220 (size: 0x10)
    FLinearColor VertexColorFromConfidenceZero;                                       // 0x0230 (size: 0x10)
    FLinearColor VertexColorFromConfidenceOne;                                        // 0x0240 (size: 0x10)
    float UpdateInterval;                                                             // 0x0250 (size: 0x4)
    class UMRMeshComponent* MRMesh;                                                   // 0x0258 (size: 0x8)

    void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
}; // Size: 0x280

#endif
