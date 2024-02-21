#ifndef UE4SS_SDK_TutorialPhase_GlobalTest_Environment_HPP
#define UE4SS_SDK_TutorialPhase_GlobalTest_Environment_HPP

class ATutorialPhase_GlobalTest_Environment_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UChildActorComponent* Table2;                                               // 0x03E8 (size: 0x8)
    class UChildActorComponent* Table;                                                // 0x03F0 (size: 0x8)
    class UChildActorComponent* Table1;                                               // 0x03F8 (size: 0x8)
    class UChildActorComponent* Table3;                                               // 0x0400 (size: 0x8)

    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void ExecuteUbergraph_TutorialPhase_GlobalTest_Environment(int32 EntryPoint);
}; // Size: 0x408

#endif
