#ifndef UE4SS_SDK_WaterPipe_Blueprint_HPP
#define UE4SS_SDK_WaterPipe_Blueprint_HPP

class AWaterPipe_Blueprint_C : public AAkAmbientSound
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool CanPlay;
    class AActor* TriggerZone;

    void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_WaterPipe_Blueprint(int32 EntryPoint);
};

#endif
