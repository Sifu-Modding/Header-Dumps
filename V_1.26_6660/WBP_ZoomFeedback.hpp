#ifndef UE4SS_SDK_WBP_ZoomFeedback_HPP
#define UE4SS_SDK_WBP_ZoomFeedback_HPP

class UWBP_ZoomFeedback_C : public URangeFeedbackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UWidgetAnimation* FadeAnimation;                                            // 0x0330 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0338 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0340 (size: 0x8)
    class UImage* GradientBG;                                                         // 0x0348 (size: 0x8)
    class UHorizontalBox* HorizontalBoxActual;                                        // 0x0350 (size: 0x8)
    class UImage* ScaleActual;                                                        // 0x0358 (size: 0x8)
    class UImage* ScaleBottom;                                                        // 0x0360 (size: 0x8)
    class UImage* ScaleDefault;                                                       // 0x0368 (size: 0x8)
    class UImage* ScaleIMG;                                                           // 0x0370 (size: 0x8)
    class UImage* ScaleTop;                                                           // 0x0378 (size: 0x8)
    class UTextBlock* TxtActual;                                                      // 0x0380 (size: 0x8)
    class UTextBlock* TxtBottom;                                                      // 0x0388 (size: 0x8)
    class UTextBlock* TxtDefault;                                                     // 0x0390 (size: 0x8)
    class UTextBlock* TxtTop;                                                         // 0x0398 (size: 0x8)
    float KeepVisibleTimeAfterLastInput;                                              // 0x03A0 (size: 0x4)
    float TimeVisibleSinceLastInput;                                                  // 0x03A4 (size: 0x4)

    void IsHideUIModeActive(bool& Active);
    void SetZoomValue(float Alpha, class UCanvasPanelSlot* IMGWidget);
    void BPE_DisplayRangeValueFeedback(float _fValueAlpha);
    void BPE_OnDefaultValuesSet();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ZoomFeedback(int32 EntryPoint);
}; // Size: 0x3A8

#endif
