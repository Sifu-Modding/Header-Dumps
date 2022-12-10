#ifndef UE4SS_SDK_SoundTriggerSwitch_HPP
#define UE4SS_SDK_SoundTriggerSwitch_HPP

class ASoundTriggerSwitch_C : public ABP_Volume_Template_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    FVector PosAtBeginOverlap;
    FSCSoundSwitchValue SoundStateGroup_Way1;
    FSCSoundSwitchValue SoundStateGroup_Way2;
    class UAkAudioEvent* EventToPlayWay1;
    class UAkAudioEvent* EventToPlayWay2;

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_SoundTriggerSwitch(int32 EntryPoint);
};

#endif
