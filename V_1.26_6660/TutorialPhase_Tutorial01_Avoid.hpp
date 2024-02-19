#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_Avoid_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_Avoid_HPP

class ATutorialPhase_Tutorial01_Avoid_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    int32 CounterCount;                                                               // 0x03E8 (size: 0x4)
    int32 PreCounterCount;                                                            // 0x03EC (size: 0x4)
    FTimerHandle TimerBeforeAvoidTest;                                                // 0x03F0 (size: 0x8)

    void DelayBeforeAvoidTest();
    void StartAvoidTest();
    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void DelayEnd();
    void ExecuteUbergraph_TutorialPhase_Tutorial01_Avoid(int32 EntryPoint);
}; // Size: 0x3F8

#endif
