#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_BasicAttacks_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_BasicAttacks_HPP

class ATutorialPhase_Tutorial01_BasicAttacks_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)

    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void CounterUpdated(FStr_TutorialActionCounters Counter);
    void ExecuteUbergraph_TutorialPhase_Tutorial01_BasicAttacks(int32 EntryPoint);
}; // Size: 0x3E8

#endif
