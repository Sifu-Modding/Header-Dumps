#ifndef UE4SS_SDK_WBP_RollFeedback_HPP
#define UE4SS_SDK_WBP_RollFeedback_HPP

class UWBP_RollFeedback_C : public UAngleFeedbackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* FadeAnimation;                                            // 0x0318 (size: 0x8)
    class UTextBlock* -90;                                                            // 0x0320 (size: 0x8)
    class UTextBlock* 0;                                                              // 0x0328 (size: 0x8)
    class UTextBlock* 90;                                                             // 0x0330 (size: 0x8)
    class UCanvasPanel* AngleBar;                                                     // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_Btn_InputTip;                                        // 0x0340 (size: 0x8)
    class UCanvasPanel* Canvas;                                                       // 0x0348 (size: 0x8)
    class UTextBlock* DegreeText;                                                     // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* WBP_AvailableInputContainer;                // 0x0358 (size: 0x8)
    float KeepVisibleTimeAfterLastInput;                                              // 0x0360 (size: 0x4)
    float TimeVisibleSinceLastInput;                                                  // 0x0364 (size: 0x4)

    void IsHideUIModeActive(bool& Active);
    void UpdateDegreeDisplay(float Angle);
    void BPE_DisplayAngleFeedback(float _fAngle);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_RollFeedback(int32 EntryPoint);
}; // Size: 0x368

#endif
