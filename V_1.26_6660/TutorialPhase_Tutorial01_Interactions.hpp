#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_Interactions_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_Interactions_HPP

class ATutorialPhase_Tutorial01_Interactions_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UChildActorComponent* ChildActor5;                                          // 0x03E8 (size: 0x8)
    class UChildActorComponent* ChildActor4;                                          // 0x03F0 (size: 0x8)
    class UChildActorComponent* ChildActor3;                                          // 0x03F8 (size: 0x8)
    class UChildActorComponent* ChildActor2;                                          // 0x0400 (size: 0x8)
    class UChildActorComponent* ChildActor1;                                          // 0x0408 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0410 (size: 0x8)
    class UChildActorComponent* Table;                                                // 0x0418 (size: 0x8)
    class UChildActorComponent* Table3;                                               // 0x0420 (size: 0x8)

    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void ExecuteUbergraph_TutorialPhase_Tutorial01_Interactions(int32 EntryPoint);
}; // Size: 0x428

#endif
