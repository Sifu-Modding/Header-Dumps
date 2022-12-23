#ifndef UE4SS_SDK_WBP_RollFeedback_HPP
#define UE4SS_SDK_WBP_RollFeedback_HPP

class UWBP_RollFeedback_C : public UAngleFeedbackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeAnimation;
    class UTextBlock* -90;
    class UTextBlock* 0;
    class UTextBlock* 90;
    class UCanvasPanel* AngleBar;
    class UBP_Btn_InputTip_C* BP_Btn_InputTip;
    class UCanvasPanel* Canvas;
    class UTextBlock* DegreeText;
    class UWBP_AvailableInputContainer_C* WBP_AvailableInputContainer;
    float KeepVisibleTimeAfterLastInput;
    float TimeVisibleSinceLastInput;

    void UpdateDegreeDisplay(float Angle);
    void BPE_DisplayAngleFeedback(float _fAngle);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_RollFeedback(int32 EntryPoint);
};

#endif
