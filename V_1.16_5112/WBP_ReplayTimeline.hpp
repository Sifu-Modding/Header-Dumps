#ifndef UE4SS_SDK_WBP_ReplayTimeline_HPP
#define UE4SS_SDK_WBP_ReplayTimeline_HPP

class UWBP_ReplayTimeline_C : public UReplayTimelineWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CursorImage;
    class UBorder* KeysBackground_2;
    class UBorder* KeyStateDurationBar;
    class UTextBlock* MillisecondsText;
    class UTextBlock* MinutesAndSecondsText;
    class UImage* NavModeCursorImage;
    class UImage* NextBlendImage;
    class UBorder* PastReadingBar;
    class UImage* PrevBlendImage;
    class UTextBlock* ReplayLengthText;
    class URetainerBox* RetainerBox;
    class UTextBlock* SecondCentiSeparator;
    class UHorizontalBox* TimeCursor_HorizontalBox;
    class UImage* TimelineWidgetBackground;
    class UHorizontalBox* TransitionFeedbackContainer;
    float TimelinePaddingLeft;
    float LastDemoTimeUpdate;
    float TimelinePaddingTop;
    bool HasTickedOnce;
    bool HasCachedGeometry;
    FWBP_ReplayTimeline_COnCachedGeometryAvailableDispatcher OnCachedGeometryAvailableDispatcher;
    void OnCachedGeometryAvailableDispatcher();
    TMap<class EReplayKeyTransition, class FText> BlendNames;
    bool HasKeySelectedOrHovered;
    class UReplayKeyWidget* CurrentKeyForBlendProfile;
    bool IsWhite;

    void UpdateCursorVisual(bool KeyHover);
    void UpdateNavmodeIcon(bool Scrub);
    void SetTimelineLengthText();
    void SetStyle(bool IsWhite, bool IsFocus);
    void OnCurrentBlendFeedbackKeyMoved(const class UReplayKeyWidget* _widget);
    void UpdateFeedbackContainerPosition(class UReplayKey* _key);
    void BPE_OnPaintTimelineBounds(const FFloatRange& _zoomRescaleRange, const FFloatRange& _timelineRange, FPaintContext& _context);
    void BPE_OnDebugPaintCursor(FVector2D _vStartPosition, FVector2D _vEndPosition, EReplayTimelineDebugType _eDebugType, FPaintContext& _context);
    void BPE_OnPaintCursorPreview(FVector2D _vStartPosition, FVector2D _vEndPosition, FPaintContext& _context);
    void GetCursorPosition(float& Position);
    void GetSelectedOrHoveredCutTimelinePosition(float& Position, bool& IsValid);
    void GetMainWidget(class UReplayMainUserWidget*& Main User Widget);
    void GetTimelineController(class UReplayTimelineController*& Timeline Controller);
    void UpdateTransitionProfileText(class UReplayKey* Key, class UImage* BlendImageWidget);
    void Update Transition Profile Display(class UReplayKey* Key, bool DisplayOnlyCurrentBlend);
    void GetModel(class UReplayTimelineModel*& Keys);
    void GetModelKeys(TArray<class UReplayKey*>& Keys);
    void PaintCursor(FPaintContext& Context);
    void UpdateDemoTimeTextDisplay();
    void OnPaint(FPaintContext& Context);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_RequestKeysDisplayUpdate();
    void BPE_OnUpdateKeySelectedDisplay(class UReplayKey* _key);
    void Construct();
    void BPE_OnKeyWidgetHoverOrSelectChange(const class UReplayKeyWidget* _widget);
    void BPE_OnTimelineControllerTransitionContextInitialized(const class UReplayKey* _currentCameraKey);
    void ExecuteUbergraph_WBP_ReplayTimeline(int32 EntryPoint);
    void OnCachedGeometryAvailableDispatcher__DelegateSignature();
};

#endif
