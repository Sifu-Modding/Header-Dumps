#ifndef UE4SS_SDK_Amb_RTPCBox_HPP
#define UE4SS_SDK_Amb_RTPCBox_HPP

class AAmb_RTPCBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Endpoint;
    class UAkComponent* Ak;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    float RTPCMax;
    float RTPCMin;
    float DistanceMax;
    bool bUpdateRTPC;
    FName RTPCName;
    float UpdateRate;
    float DistanceMin;
    class UAkAudioEvent* LoopEventToPost;
    bool bIsOneShot;
    class UAkAudioEvent* EndingEventToPost;
    FVector EndpointLocation;

    void GetDistanceToPlayer(float& DistanceToPlayer);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateRTPC();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Amb_RTPCBox(int32 EntryPoint);
};

#endif
