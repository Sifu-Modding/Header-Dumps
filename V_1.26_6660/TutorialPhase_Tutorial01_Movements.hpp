#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_Movements_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_Movements_HPP

class ATutorialPhase_Tutorial01_Movements_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x03E8 (size: 0x8)
    int32 CounterCount;                                                               // 0x03F0 (size: 0x4)
    FText BoxTriggerCondition;                                                        // 0x03F8 (size: 0x18)

    void StartPhase(bool& Success);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_TutorialPhase_Tutorial01_Movements(int32 EntryPoint);
}; // Size: 0x410

#endif
