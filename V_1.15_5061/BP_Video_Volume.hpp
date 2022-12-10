#ifndef UE4SS_SDK_BP_Video_Volume_HPP
#define UE4SS_SDK_BP_Video_Volume_HPP

class ABP_Video_Volume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Collision Volume;
    class USceneComponent* DefaultSceneRoot;
    class UMediaPlayer* MediaPlayer;
    bool ActivateVideo;
    class UMediaSource* MediaSource;

    void ReceiveBeginPlay();
    void BndEvt__BP_SunLight_Volume_Collision Volume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Video_Volume(int32 EntryPoint);
};

#endif
