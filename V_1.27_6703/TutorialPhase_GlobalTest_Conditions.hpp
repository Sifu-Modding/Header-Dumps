#ifndef UE4SS_SDK_TutorialPhase_GlobalTest_Conditions_HPP
#define UE4SS_SDK_TutorialPhase_GlobalTest_Conditions_HPP

class ATutorialPhase_GlobalTest_Conditions_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03E8 (size: 0x8)
    FText ConditionBoxTrigger;                                                        // 0x03F0 (size: 0x18)
    InputAction NewVar_0_0;                                                           // 0x0408 (size: 0x1)

    void StartPhase(bool& Success);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_TutorialPhase_GlobalTest_Conditions(int32 EntryPoint);
}; // Size: 0x409

#endif
