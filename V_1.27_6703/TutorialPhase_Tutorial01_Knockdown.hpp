#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_Knockdown_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_Knockdown_HPP

class ATutorialPhase_Tutorial01_Knockdown_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    int32 CounterCount;                                                               // 0x03E8 (size: 0x4)
    FStr_TutorialActionCounters KDCOunter;                                            // 0x03F0 (size: 0x40)
    FStr_TutorialActionCounters PushCounter;                                          // 0x0430 (size: 0x40)
    FStr_TutorialActionCounters KillCOunter;                                          // 0x0470 (size: 0x40)

    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void ExecuteUbergraph_TutorialPhase_Tutorial01_Knockdown(int32 EntryPoint);
}; // Size: 0x4B0

#endif
