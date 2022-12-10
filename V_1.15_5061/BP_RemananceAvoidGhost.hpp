#ifndef UE4SS_SDK_BP_RemananceAvoidGhost_HPP
#define UE4SS_SDK_BP_RemananceAvoidGhost_HPP

class ABP_RemananceAvoidGhost_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPoseableMeshComponent* PoseableMesh;
    class USceneComponent* DefaultSceneRoot;
    float SpawnTime;
    float Duration;
    bool bHasAppeared;
    class UMaterialInstanceDynamic* Mid;

    void CheckMID();
    void OnPoolablePostInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePreUninitializeComponents();
    void SetGhostAppears();
    void MakeGhostDisappears();
    void ExecuteUbergraph_BP_RemananceAvoidGhost(int32 EntryPoint);
};

#endif
