#ifndef UE4SS_SDK_BP_RemananceAvoidGhost_HPP
#define UE4SS_SDK_BP_RemananceAvoidGhost_HPP

class ABP_RemananceAvoidGhost_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UPoseableMeshComponent* PoseableMesh;                                       // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    float SpawnTime;                                                                  // 0x02C8 (size: 0x4)
    float Duration;                                                                   // 0x02CC (size: 0x4)
    bool bHasAppeared;                                                                // 0x02D0 (size: 0x1)
    class UMaterialInstanceDynamic* Mid;                                              // 0x02D8 (size: 0x8)

    void CheckMID();
    void OnPoolablePostInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePreUninitializeComponents();
    void SetGhostAppears();
    void MakeGhostDisappears();
    void ExecuteUbergraph_BP_RemananceAvoidGhost(int32 EntryPoint);
}; // Size: 0x2E0

#endif
