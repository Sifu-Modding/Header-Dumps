#ifndef UE4SS_SDK_BP_Menu_Detective_HPP
#define UE4SS_SDK_BP_Menu_Detective_HPP

class UBP_Menu_Detective_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Bkg;
    class UHorizontalBox* Border_InputsnoAnim;
    class UDetectiveBoardWidget_C* DetectiveBoardWidget;
    class UCanvasPanel* DetectiveCanvas;
    class UDetectiveInvestigationSelector_C* DetectiveInvestigationSelector;
    class UBP_Btn_InputTip_C* Input_Investigation;
    class UBP_Btn_InputTip_C* Input_ZoomItem;
    class UBP_Btn_InputTip_C* InputTip_Navigate;
    class UBP_Btn_InputTip_C* InputTip_ZoomIn;
    class UBP_Btn_InputTip_C* InputTip_ZoomOut;
    class UBP_Btn_InputTip_C* NavigationButton_Back;
    class UScaleBox* ScaleBoard;
    float ZoomScrollingSpeedDefault;
    float ZoomScrollingSpeed;
    class UCurveFloat* Curve_Zoom_ScrollingSpeed;
    bool bIsInFocusPath;
    bool bStickyModeActivated;
    FVector2D StickyAlignement;
    bool bInterpToStickyAlignement;
    float TimePassedInStickyMode;
    float StickyModeInterpSpeed;
    ESCBlendType eStickyBlendMode;
    float StickyModeBlendDuration;
    class UDetectiveBoardItem_C* HoveredItem;
    float ZoomMin;
    float ZoomMax;
    FVector2D PrevAlignement;
    float BoardInterpDuration;
    float TimeElapsed;
    FVector2D PrevCursorPosition;
    FVector2D MaxAligmentSpeedByMouse;
    class UCurveFloat* FreeCursorSpeedByViewportDisplacement;
    bool bControllerMouseModeEnabled;
    bool bLinkAlignementToCursorPosition;
    bool bForceCursorToCenter;
    class UDetectiveBoardItem_C* PendingHoverItem;
    class UBP_HUD_BoardCursor_C* TransientCursor;
    bool bAlignmentCorrectionDelayed;
    FVector2D PrevPendingHoverItemLocation;
    class UCurveFloat* StickRemapCurve;

    void UpdateLinkedAlignement(float InDeltaTime, FVector2D InCanvasAbsoluteSize, FVector2D InScaleBoardAbsoluteSize);
    void StartBlending();
    void DoVisualBlending(float InDeltaTime, bool bBlendStickyAlignement, bool bApplyAlignement, bool bBlendCursorPosition);
    void UpdateUsingMouseCursor(float InDeltaTime);
    void UpdateStickyAlignmentFromMouseSpeedRatio(float InDeltaTime, FVector2D SpeedRatio, FVector2D& CorrectionVector);
    void ClearItemImages();
    FVector2D ComputeCursorPositionForItem(class UDetectiveBoardItem_C* InItem);
    bool IsMouseModeEnabled();
    FVector2D ComputeAlignmentForItem(class UDetectiveBoardItem_C* InItem);
    void Print Scale Board Canvas Values();
    void SetStickyAlignment(FVector2D InAlignement, bool bForce, bool& bHasChanged, FVector2D& CorrectionVector);
    class UDetectiveBoardItem_C* FocusItemByEntryTagAsName(FName InEntryTagAsName, bool bOpenInvestigationBoard);
    bool BPE_OnMenuActionSecondaryPressed();
    void AlignCursorToCurrentMap();
    void Set Scale and Scrolling Speed(float Scale, bool bPlaySound);
    bool OnItemClicked(class UDetectiveBoardItem_C* Item Clicked);
    void Item Unhovered(class UDetectiveBoardItem_C* Item);
    void Item Hovered(class UDetectiveBoardItem_C* Item, bool bByMouse);
    void TranslateBoardUsingAlignement(float Delta Time);
    void DisableCursorNavigation();
    void EnableCursorNavigation();
    FVector2D ComputeViewportCenter();
    bool BPE_OnAltPageNavigation(ECycleDirection _eDirection);
    bool BPE_OnBackButtonPressed();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__DetectiveInvestigationSelector_K2Node_ComponentBoundEvent_0_ShowInvestigationBoard__DelegateSignature(TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void HandleMenuRequest(FString InArguments);
    void BPE_GiveFocus();
    void BPE_OnDataUpdated();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Menu_Detective_DetectiveBoardWidget_K2Node_ComponentBoundEvent_1_ItemHoveredBoard__DelegateSignature(class UDetectiveBoardItem_C* Item, bool bByMouse);
    void BndEvt__BP_Menu_Detective_DetectiveBoardWidget_K2Node_ComponentBoundEvent_2_ItemUnhoveredBoard__DelegateSignature(class UDetectiveBoardItem_C* Item);
    void BndEvt__BP_Menu_Detective_DetectiveBoardWidget_K2Node_ComponentBoundEvent_3_ItemClickedBoard__DelegateSignature(class UDetectiveBoardItem_C* Item);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void TryToSnapCursorToPendingHoverItem();
    void SetPendingHoverItem(class UDetectiveBoardItem_C* InItem);
    void TryFocusPendingItem();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void ExecuteUbergraph_BP_Menu_Detective(int32 EntryPoint);
};

#endif
