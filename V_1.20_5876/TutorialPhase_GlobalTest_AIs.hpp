#ifndef UE4SS_SDK_TutorialPhase_GlobalTest_AIs_HPP
#define UE4SS_SDK_TutorialPhase_GlobalTest_AIs_HPP

class ATutorialPhase_GlobalTest_AIs_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)

    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void ExecuteUbergraph_TutorialPhase_GlobalTest_AIs(int32 EntryPoint);
}; // Size: 0x3E8

#endif
