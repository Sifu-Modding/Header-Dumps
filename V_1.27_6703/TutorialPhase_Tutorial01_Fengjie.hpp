#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_Fengjie_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_Fengjie_HPP

class ATutorialPhase_Tutorial01_Fengjie_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    int32 CounterCount;                                                               // 0x03E8 (size: 0x4)
    FStr_TutorialActionCounters KillCOunter;                                          // 0x03F0 (size: 0x40)
    FTimerHandle TimerResetHighlight;                                                 // 0x0430 (size: 0x8)
    TEnumAsByte<Enum_TutorialActionCounterType> DownCounter;                          // 0x0438 (size: 0x1)
    bool FinalPhase;                                                                  // 0x0439 (size: 0x1)

    void HighlightPostKD(bool Highlight);
    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void CounterUpdated(FStr_TutorialActionCounters Counter);
    void ResetHighlight();
    void ExecuteUbergraph_TutorialPhase_Tutorial01_Fengjie(int32 EntryPoint);
}; // Size: 0x43A

#endif
