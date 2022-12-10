#ifndef UE4SS_SDK_BP_LDCameraActor_WithRail_HPP
#define UE4SS_SDK_BP_LDCameraActor_WithRail_HPP

class ABP_LDCameraActor_WithRail_C : public ABP_LDCameraActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* DebugPosOnRefActorSpline;
    class USplineComponent* SplineRefActor;
    class USplineComponent* CameraRail;
    float TargettedTime;
    float CurrentTime;
    float DampingFactor;
    float debugTime;
    FVector WantedCameraPosition;
    class AActor* TargetChar;
    bool UpdateRTPC;
    bool AlreadyPushed;
    bool EnableDistanceAttenuation;

    FTransform GetActorRefTransform(float _fDt);
    void SetActorRef(class AActor* TargetChar);
    void UpdateSound(float Time);
    void SwitchToGameplayCamera();
    void SwitchToLDCamera(class AActor* ActorRef, class AActor* ReplayCameraAnchor);
    void ScrubDebugTime();
    void DrawDebug(float Time);
    void UpdateCameraPosition();
    void ComputeTargettedTime(float DeltaTime);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LDCameraActor_WithRail(int32 EntryPoint);
};

#endif
