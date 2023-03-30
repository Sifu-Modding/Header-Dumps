#ifndef UE4SS_SDK_SoundTriggerSwitch_HPP
#define UE4SS_SDK_SoundTriggerSwitch_HPP

class ASoundTriggerSwitch_C : public ABP_Volume_Template_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0300 (size: 0x8)
    FVector PosAtBeginOverlap;                                                        // 0x0308 (size: 0xC)
    FSCSoundSwitchValue SoundStateGroup_Way1;                                         // 0x0314 (size: 0x10)
    FSCSoundSwitchValue SoundStateGroup_Way2;                                         // 0x0324 (size: 0x10)
    class UAkAudioEvent* EventToPlayWay1;                                             // 0x0338 (size: 0x8)
    class UAkAudioEvent* EventToPlayWay2;                                             // 0x0340 (size: 0x8)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_SoundTriggerSwitch(int32 EntryPoint);
}; // Size: 0x348

#endif
