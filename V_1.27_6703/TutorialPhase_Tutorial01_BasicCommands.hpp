#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_BasicCommands_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_BasicCommands_HPP

class ATutorialPhase_Tutorial01_BasicCommands_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UBoxComponent* BoxEnd2;                                                     // 0x03E8 (size: 0x8)
    class UBoxComponent* BoxEnd1;                                                     // 0x03F0 (size: 0x8)
    class UBoxComponent* BoxEnd;                                                      // 0x03F8 (size: 0x8)
    FText BoxTriggerCondition;                                                        // 0x0400 (size: 0x18)

    void StartPhase(bool& Success);
    void BndEvt__BoxEnd_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BoxEnd1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BoxEnd2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_TutorialPhase_Tutorial01_BasicCommands(int32 EntryPoint);
}; // Size: 0x418

#endif
