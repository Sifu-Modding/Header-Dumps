#ifndef UE4SS_SDK_WBP_ZoomFeedback_HPP
#define UE4SS_SDK_WBP_ZoomFeedback_HPP

class UWBP_ZoomFeedback_C : public URangeFeedbackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeAnimation;
    class UImage* Arrow;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* GradientBG;
    class UHorizontalBox* HorizontalBoxActual;
    class UImage* ScaleActual;
    class UImage* ScaleBottom;
    class UImage* ScaleDefault;
    class UImage* ScaleIMG;
    class UImage* ScaleTop;
    class UTextBlock* TxtActual;
    class UTextBlock* TxtBottom;
    class UTextBlock* TxtDefault;
    class UTextBlock* TxtTop;
    float KeepVisibleTimeAfterLastInput;
    float TimeVisibleSinceLastInput;

    void SetZoomValue(float Alpha, class UCanvasPanelSlot* IMGWidget);
    void BPE_DisplayRangeValueFeedback(float _fValueAlpha);
    void BPE_OnDefaultValuesSet();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ZoomFeedback(int32 EntryPoint);
};

#endif
