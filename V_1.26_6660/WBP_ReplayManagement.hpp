#ifndef UE4SS_SDK_WBP_ReplayManagement_HPP
#define UE4SS_SDK_WBP_ReplayManagement_HPP

class UWBP_ReplayManagement_C : public UReplayManagementMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UImage* Background;                                                         // 0x03F0 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Confirm_Delete;                  // 0x03F8 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Confirm_Load;                    // 0x0400 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Confirm_Reset;                   // 0x0408 (size: 0x8)
    class UBP_Btn_ReplayManagement_Action_C* Btn_BackToEdit;                          // 0x0410 (size: 0x8)
    class UBP_Btn_ReplayManagement_Action_C* Btn_Delete;                              // 0x0418 (size: 0x8)
    class UBP_Btn_ReplayManagement_Action_C* Btn_Edit;                                // 0x0420 (size: 0x8)
    class UBP_Btn_ReplayManagement_Action_C* Btn_Reset;                               // 0x0428 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBack_1;                                              // 0x0430 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBulkAdd;                                             // 0x0438 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBulkDelete;                                          // 0x0440 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBulkRemove;                                          // 0x0448 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnBulkSelection;                                       // 0x0450 (size: 0x8)
    class UTextBlock* CantCreatenew;                                                  // 0x0458 (size: 0x8)
    class UCanvasPanel* CurrentReplayCanvas;                                          // 0x0460 (size: 0x8)
    class UBorder* CurrentReplaySpace_Border;                                         // 0x0468 (size: 0x8)
    class UTextBlock* ErrorMessage;                                                   // 0x0470 (size: 0x8)
    class UTextBlock* ErrorMessageReason;                                             // 0x0478 (size: 0x8)
    class UHorizontalBox* FreeSpace_HorizontalBox;                                    // 0x0480 (size: 0x8)
    class UScrollBox* GameplayScroll;                                                 // 0x0488 (size: 0x8)
    class UVerticalBox* HorizontalBox_Buttons;                                        // 0x0490 (size: 0x8)
    class UWidgetSwitcher* LoadingSwitcher;                                           // 0x0498 (size: 0x8)
    class UHorizontalBox* MaxReplaySizeVisualClue;                                    // 0x04A0 (size: 0x8)
    class UTextBlock* MaxSizeTxt;                                                     // 0x04A8 (size: 0x8)
    class UBorder* OccupiedSpace_Border;                                              // 0x04B0 (size: 0x8)
    class USpacer* OccupiedSpacer;                                                    // 0x04B8 (size: 0x8)
    class UCanvasPanel* Popup_Confirm;                                                // 0x04C0 (size: 0x8)
    class UOverlay* RecordInteruptPanel;                                              // 0x04C8 (size: 0x8)
    class UWidgetSwitcher* ReplayCountSwitcher;                                       // 0x04D0 (size: 0x8)
    class UTextBlock* ReplayCountTxt;                                                 // 0x04D8 (size: 0x8)
    class UTextBlock* ReplayCountWarningTxt;                                          // 0x04E0 (size: 0x8)
    class UBorder* ReplaySizeClue_Border;                                             // 0x04E8 (size: 0x8)
    class USpacer* ReplaySizeClue_Spacer;                                             // 0x04F0 (size: 0x8)
    class UTextBlock* ReplaySizeTxt;                                                  // 0x04F8 (size: 0x8)
    class UTextBlock* ReplayTitle;                                                    // 0x0500 (size: 0x8)
    class UTextBlock* ShouldDeleteOld;                                                // 0x0508 (size: 0x8)
    class UHorizontalBox* SpaceOccupied_HorizontalBox;                                // 0x0510 (size: 0x8)
    class UThrobber* Throbber_102;                                                    // 0x0518 (size: 0x8)
    class UTextBlock* TitleTextBulk;                                                  // 0x0520 (size: 0x8)
    class UTextBlock* TitleTextOverride;                                              // 0x0528 (size: 0x8)
    class UHorizontalBox* TooManyReplaysPanel;                                        // 0x0530 (size: 0x8)
    class UTextBlock* TooManyReplaysText;                                             // 0x0538 (size: 0x8)
    class UImage* WarningImg;                                                         // 0x0540 (size: 0x8)
    class UImage* WarningImg_1;                                                       // 0x0548 (size: 0x8)
    class UHorizontalBox* WarningPanel;                                               // 0x0550 (size: 0x8)
    class UWidgetSwitcher* WarningSwitcher;                                           // 0x0558 (size: 0x8)
    FWBP_ReplayManagement_CEnterReplayRequestedDispatcher EnterReplayRequestedDispatcher; // 0x0560 (size: 0x10)
    void EnterReplayRequestedDispatcher();
    FWBP_ReplayManagement_COnBackRequested OnBackRequested;                           // 0x0570 (size: 0x10)
    void OnBackRequested();
    FWBP_ReplayManagement_COnReplayEditorBackRequested OnReplayEditorBackRequested;   // 0x0580 (size: 0x10)
    void OnReplayEditorBackRequested();
    bool bStreamerTaskRunning;                                                        // 0x0590 (size: 0x1)
    FString StreamerTaskRunningName;                                                  // 0x0598 (size: 0x10)
    class UWBP_ReplayManagementItem_C* SelectedReplay;                                // 0x05A8 (size: 0x8)
    FReplaySizeManagement ReplaySizeManagement;                                       // 0x05B0 (size: 0x28)
    FLinearColor OutOfSpaceBrush;                                                     // 0x05D8 (size: 0x10)
    FLinearColor NotOutOfSpaceBrush;                                                  // 0x05E8 (size: 0x10)
    bool HasCustomQuit;                                                               // 0x05F8 (size: 0x1)
    TMap<class FString, class UTexture2D*> ReplayImagesByMaps;                        // 0x0600 (size: 0x50)
    bool InBulk;                                                                      // 0x0650 (size: 0x1)
    TArray<FReplayInfo> ReplayInfosBulkDelete;                                        // 0x0658 (size: 0x10)
    FWBP_ReplayManagement_COnMenuSecondaryRequested OnMenuSecondaryRequested;         // 0x0668 (size: 0x10)
    void OnMenuSecondaryRequested();
    bool bWantToLoadReplay;                                                           // 0x0678 (size: 0x1)

    void OnReplayReset();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void GetReplayFormattedName(FReplayInfo ReplayInfo, FText& FormattedName);
    void GetSelectedReplaysTotalSize(class UWBP_ReplayManagementItem_C* SelectedItem, int64& TotalSize);
    void OnSaveLoaded(ELoadResult LoadResult);
    void ShowBulkDeletePopup();
    void UpdateReplayCount();
    void GetReplayImageFromMap(FString MapFriendlyName, class UTexture2D*& Texture);
    void ShowPopup(class UBP_Menu_Popup_Validation_C* Popup);
    void YesConfirmationLoadPopup();
    void NoConfirmationLoadPopup();
    void UpdateWarnings();
    void YesConfirmationResetPopup();
    void NoConfirmationResetPopup();
    void NoConfirmationDeletePopup();
    void YesConfirmationDeletePopup();
    void UpdateOutOfSpaceFeedbacks();
    void UpdateSpaceFeedbacks(class UWBP_ReplayManagementItem_C* SelectedItem, bool ShowSizeBulk);
    void FocusOnFirstReplay();
    void FocusOnCurrentReplay();
    bool BPE_OnInputAction(InputAction eAction);
    void OnReplayClicked(class UWBP_ReplayManagementItem_C* Replay Management Item);
    void OnReplayFocusChanged(bool IsFocused, class UWBP_ReplayManagementItem_C* Instance);
    void OnReplayManagementTaskStateChanged(bool _bIsTaskRunning, FString _taskName);
    void OnBackReplayEditorClic(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnBackClic(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnReplayEditRequested();
    void OnReplayResetRequested();
    void OnReplayExportRequested();
    void OnReplayDeleteRequested();
    void ClearAllItems();
    void Construct();
    void BPE_OnStreamsEnumerated(bool _bError, const FReplayListInfo& _replayInfos);
    void BPE_OnStreamDeleted(bool _bError);
    void Destruct();
    void BndEvt__WBP_ReplayManagement_Btn_Reset_K2Node_ComponentBoundEvent_7_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__WBP_ReplayManagement_Btn_Delete_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_OnVisible();
    void OnReplayManagementReady();
    void OnWaitKeepReplayToComplete();
    void OnKeepReplayCompleted();
    void BndEvt__WBP_ReplayManagement_Btn_Edit_K2Node_ComponentBoundEvent_4_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BPE_OnStreamsDeleted(bool _bError);
    void ExecuteUbergraph_WBP_ReplayManagement(int32 EntryPoint);
    void OnMenuSecondaryRequested__DelegateSignature();
    void OnReplayEditorBackRequested__DelegateSignature();
    void OnBackRequested__DelegateSignature();
    void EnterReplayRequestedDispatcher__DelegateSignature();
}; // Size: 0x679

#endif
