#ifndef UE4SS_SDK_BP_Menu_Detective_HPP
#define UE4SS_SDK_BP_Menu_Detective_HPP

class UBP_Menu_Detective_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UImage* Bkg;                                                                // 0x03E0 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x03E8 (size: 0x8)
    class UDetectiveBoardWidget_C* DetectiveBoardWidget;                              // 0x03F0 (size: 0x8)
    class UCanvasPanel* DetectiveCanvas;                                              // 0x03F8 (size: 0x8)
    class UDetectiveInvestigationSelector_C* DetectiveInvestigationSelector;          // 0x0400 (size: 0x8)
    class UBP_Btn_InputTip_C* Input_Investigation;                                    // 0x0408 (size: 0x8)
    class UBP_Btn_InputTip_C* Input_ZoomItem;                                         // 0x0410 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Navigate;                                      // 0x0418 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_ZoomIn;                                        // 0x0420 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_ZoomOut;                                       // 0x0428 (size: 0x8)
    class UBP_Btn_InputTip_C* NavigationButton_Back;                                  // 0x0430 (size: 0x8)
    class UScaleBox* ScaleBoard;                                                      // 0x0438 (size: 0x8)
    float ZoomScrollingSpeedDefault;                                                  // 0x0440 (size: 0x4)
    float ZoomScrollingSpeed;                                                         // 0x0444 (size: 0x4)
    class UCurveFloat* Curve_Zoom_ScrollingSpeed;                                     // 0x0448 (size: 0x8)
    bool bIsInFocusPath;                                                              // 0x0450 (size: 0x1)
    bool bStickyModeActivated;                                                        // 0x0451 (size: 0x1)
    FVector2D StickyAlignement;                                                       // 0x0454 (size: 0x8)
    bool bInterpToStickyAlignement;                                                   // 0x045C (size: 0x1)
    float TimePassedInStickyMode;                                                     // 0x0460 (size: 0x4)
    float StickyModeInterpSpeed;                                                      // 0x0464 (size: 0x4)
    ESCBlendType eStickyBlendMode;                                                    // 0x0468 (size: 0x1)
    float StickyModeBlendDuration;                                                    // 0x046C (size: 0x4)
    class UDetectiveBoardItem_C* HoveredItem;                                         // 0x0470 (size: 0x8)
    float ZoomMin;                                                                    // 0x0478 (size: 0x4)
    float ZoomMax;                                                                    // 0x047C (size: 0x4)
    FVector2D PrevAlignement;                                                         // 0x0480 (size: 0x8)
    float BoardInterpDuration;                                                        // 0x0488 (size: 0x4)
    float TimeElapsed;                                                                // 0x048C (size: 0x4)
    FVector2D PrevCursorPosition;                                                     // 0x0490 (size: 0x8)
    FVector2D MaxAligmentSpeedByMouse;                                                // 0x0498 (size: 0x8)
    class UCurveFloat* FreeCursorSpeedByViewportDisplacement;                         // 0x04A0 (size: 0x8)
    bool bControllerMouseModeEnabled;                                                 // 0x04A8 (size: 0x1)
    bool bLinkAlignementToCursorPosition;                                             // 0x04A9 (size: 0x1)
    bool bForceCursorToCenter;                                                        // 0x04AA (size: 0x1)
    class UDetectiveBoardItem_C* PendingHoverItem;                                    // 0x04B0 (size: 0x8)
    class UBP_HUD_BoardCursor_C* TransientCursor;                                     // 0x04B8 (size: 0x8)
    bool bAlignmentCorrectionDelayed;                                                 // 0x04C0 (size: 0x1)
    FVector2D PrevPendingHoverItemLocation;                                           // 0x04C4 (size: 0x8)
    class UCurveFloat* StickRemapCurve;                                               // 0x04D0 (size: 0x8)

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
}; // Size: 0x4D8

#endif
