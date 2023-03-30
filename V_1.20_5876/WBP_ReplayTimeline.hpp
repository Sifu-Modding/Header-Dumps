#ifndef UE4SS_SDK_WBP_ReplayTimeline_HPP
#define UE4SS_SDK_WBP_ReplayTimeline_HPP

class UWBP_ReplayTimeline_C : public UReplayTimelineWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UImage* CursorImage;                                                        // 0x0360 (size: 0x8)
    class UBorder* KeysBackground_2;                                                  // 0x0368 (size: 0x8)
    class UBorder* KeyStateDurationBar;                                               // 0x0370 (size: 0x8)
    class UTextBlock* MillisecondsText;                                               // 0x0378 (size: 0x8)
    class UTextBlock* MinutesAndSecondsText;                                          // 0x0380 (size: 0x8)
    class UImage* NavModeCursorImage;                                                 // 0x0388 (size: 0x8)
    class UImage* NextBlendImage;                                                     // 0x0390 (size: 0x8)
    class UBorder* PastReadingBar;                                                    // 0x0398 (size: 0x8)
    class UImage* PrevBlendImage;                                                     // 0x03A0 (size: 0x8)
    class UTextBlock* ReplayLengthText;                                               // 0x03A8 (size: 0x8)
    class URetainerBox* RetainerBox;                                                  // 0x03B0 (size: 0x8)
    class UTextBlock* SecondCentiSeparator;                                           // 0x03B8 (size: 0x8)
    class UHorizontalBox* TimeCursor_HorizontalBox;                                   // 0x03C0 (size: 0x8)
    class UImage* TimelineWidgetBackground;                                           // 0x03C8 (size: 0x8)
    class UHorizontalBox* TransitionFeedbackContainer;                                // 0x03D0 (size: 0x8)
    float TimelinePaddingLeft;                                                        // 0x03D8 (size: 0x4)
    float LastDemoTimeUpdate;                                                         // 0x03DC (size: 0x4)
    float TimelinePaddingTop;                                                         // 0x03E0 (size: 0x4)
    bool HasTickedOnce;                                                               // 0x03E4 (size: 0x1)
    bool HasCachedGeometry;                                                           // 0x03E5 (size: 0x1)
    FWBP_ReplayTimeline_COnCachedGeometryAvailableDispatcher OnCachedGeometryAvailableDispatcher; // 0x03E8 (size: 0x10)
    void OnCachedGeometryAvailableDispatcher();
    TMap<class EReplayKeyTransition, class FText> BlendNames;                         // 0x03F8 (size: 0x50)
    bool HasKeySelectedOrHovered;                                                     // 0x0448 (size: 0x1)
    class UReplayKeyWidget* CurrentKeyForBlendProfile;                                // 0x0450 (size: 0x8)
    bool IsWhite;                                                                     // 0x0458 (size: 0x1)

    void ResetCursorState();
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
}; // Size: 0x459

#endif
