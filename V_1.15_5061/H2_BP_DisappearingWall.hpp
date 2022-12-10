#ifndef UE4SS_SDK_H2_BP_DisappearingWall_HPP
#define UE4SS_SDK_H2_BP_DisappearingWall_HPP

class AH2_BP_DisappearingWall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene3;
    class USceneComponent* Scene2;
    class USceneComponent* Scene1;
    class USceneComponent* Scene;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    bool AllJointHidden;

    void GetJoinPositions();
    void Renderring Wall();
    void ReceiveTick(float DeltaSeconds);
    void DelayingTick();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_H2_BP_DisappearingWall(int32 EntryPoint);
};

#endif
