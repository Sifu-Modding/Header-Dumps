#ifndef UE4SS_SDK_BP_FakeBeamLight_HPP
#define UE4SS_SDK_BP_FakeBeamLight_HPP

class ABP_FakeBeamLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sm_Fakelight_Cone_Dancefloor;
    class UStaticMeshComponent* FakeLight_Contact;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    float Intensity;
    FLinearColor Color;
    float Light Group Index;
    bool Is Random;
    float Random Speed;

    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_FakeBeamLight(int32 EntryPoint);
};

#endif
