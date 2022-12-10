#ifndef UE4SS_SDK_BP_LDCameraActor_HPP
#define UE4SS_SDK_BP_LDCameraActor_HPP

class ABP_LDCameraActor_C : public ALDCameraActor
{
    class UChildActorComponent* DebugCameraActor;
    class UBlackboardComponent* CameraBlackBoard;
    TEnumAsByte<BP_EnumCameraLDSlot> CameraSlot;
    class UAbstractCameraData* CameraData;
    bool PlayWoosh;
    float VolumeOffset;
    class UCameraComponentThird* CameraThirdComp;
    class UAkAudioEvent* Whoosh GameplayCamera;
    class UAkAudioEvent* Whoosh LDCamera;

    void GetCameraThird(class UCameraComponentThird*& CameraThirdComp);
    void SetAudioState(class UAkAudioEvent* WhooshEvent, FName AMB_Camera_State, float VolumeOffset);
    void GetCameraBlackBoard(class UBlackboardComponent*& BlackboardComp);
    void SwitchToGameplayCamera();
    void SwitchToLDCamera(class AActor* ActorRef, class AActor* ReplayCameraAnchor);
};

#endif
