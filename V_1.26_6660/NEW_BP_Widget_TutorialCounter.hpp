#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialCounter_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialCounter_HPP

class UNEW_BP_Widget_TutorialCounter_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* FadeAnim;                                                 // 0x0318 (size: 0x8)
    class UWidgetAnimation* Active;                                                   // 0x0320 (size: 0x8)
    class UWidgetAnimation* Inactive;                                                 // 0x0328 (size: 0x8)
    class UWidgetAnimation* CounterUpdate;                                            // 0x0330 (size: 0x8)
    class UWidgetAnimation* CounterComplete;                                          // 0x0338 (size: 0x8)
    class UBorder* Border_Inputs;                                                     // 0x0340 (size: 0x8)
    class UTextBlock* CounterTexts;                                                   // 0x0348 (size: 0x8)
    class USizeBox* InputsBox;                                                        // 0x0350 (size: 0x8)
    class UImage* Line;                                                               // 0x0358 (size: 0x8)
    class UScaleBox* ScaleText;                                                       // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0368 (size: 0x8)
    class UTextBlock* TextBlock_SubInfos;                                             // 0x0370 (size: 0x8)
    class UImage* ValidationStroke;                                                   // 0x0378 (size: 0x8)
    FText DisplayedText;                                                              // 0x0380 (size: 0x18)
    FStr_TutorialActionCounters Counter;                                              // 0x0398 (size: 0x40)
    bool IsCompleted;                                                                 // 0x03D8 (size: 0x1)

    void Highlight(bool Highlight, bool Force);
    void CreateInputDisplay();
    void ScaleWidget();
    void UpdateCounter(FStr_TutorialActionCounters UpdatedCount);
    void CounterCompleted();
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialCounter(int32 EntryPoint);
}; // Size: 0x3D9

#endif
