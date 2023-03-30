#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialCounterManager_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialCounterManager_HPP

class UNEW_BP_Widget_TutorialCounterManager_C : public UUserWidget
{
    class UVerticalBox* VB_Counters;                                                  // 0x0268 (size: 0x8)
    TMap<TEnumAsByte<Enum_TutorialActionCounterType>, UNEW_BP_Widget_TutorialCounter_C*> CreatedCounters; // 0x0270 (size: 0x50)
    FNEW_BP_Widget_TutorialCounterManager_CAllCountersDone AllCountersDone;           // 0x02C0 (size: 0x10)
    void AllCountersDone();
    TMap<class FString, class UNEW_BP_Widget_TutorialCustomCondition_C*> CreatedConditions; // 0x02D0 (size: 0x50)
    TMap<TEnumAsByte<Enum_TutorialActionCounterType>, FText> CountersToText;          // 0x0320 (size: 0x50)

    void HighlightCounterWidget(TEnumAsByte<Enum_TutorialActionCounterType> CounterType, bool Highlight, bool Force);
    void PlayUpdateSound();
    void SelectEndSound(class UAkAudioEvent*& AudioEvent);
    void PlayEndSound();
    void EndConditionWidget(FText Condition);
    void CreateConditionWidget(FText Condition);
    void CleanWidgets();
    void EndCounterWidget(FStr_TutorialActionCounters Counter);
    void UpdateCounterWidget(FStr_TutorialActionCounters Counter);
    void CreateCounterWidget(FStr_TutorialActionCounters ActionCounters);
    void AllCountersDone__DelegateSignature();
}; // Size: 0x370

#endif
