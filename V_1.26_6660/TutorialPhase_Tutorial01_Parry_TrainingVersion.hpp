#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_Parry_TrainingVersion_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_Parry_TrainingVersion_HPP

class ATutorialPhase_Tutorial01_Parry_TrainingVersion_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    int32 GrabCounterCount;                                                           // 0x03E8 (size: 0x4)
    FTimerHandle TimerBeforeParryTest;                                                // 0x03F0 (size: 0x8)
    int32 ParryCounterCount;                                                          // 0x03F8 (size: 0x4)
    TEnumAsByte<Enum_TutorialPlayerInputsName> EmptyCommand;                          // 0x03FC (size: 0x1)
    FTimerHandle TimerResetHighlight;                                                 // 0x0400 (size: 0x8)
    TEnumAsByte<Enum_TutorialActionCounterType> ParryCounter;                         // 0x0408 (size: 0x1)

    void StopHighlights(bool Highlight);
    void DelayBeforeParryTest();
    void StartParryTest(bool& Success);
    void HighlightPostParry(bool Highlight);
    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void CounterUpdated(FStr_TutorialActionCounters Counter);
    void ResetHighlight();
    void DelayEnd();
    void ExecuteUbergraph_TutorialPhase_Tutorial01_Parry_TrainingVersion(int32 EntryPoint);
}; // Size: 0x409

#endif
