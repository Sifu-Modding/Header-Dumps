#ifndef UE4SS_SDK_WBP_ReplayManagementItem_HPP
#define UE4SS_SDK_WBP_ReplayManagementItem_HPP

class UWBP_ReplayManagementItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UImage* Background;                                                         // 0x0828 (size: 0x8)
    class UImage* BulkedSelectionCheckmark;                                           // 0x0830 (size: 0x8)
    class UImage* CurrentReplayNotif_Img;                                             // 0x0838 (size: 0x8)
    class UTextBlock* ErrorTitle;                                                     // 0x0840 (size: 0x8)
    class UImage* Img_ReplayThumbnail;                                                // 0x0848 (size: 0x8)
    class UTextBlock* LastEdit;                                                       // 0x0850 (size: 0x8)
    class UTextBlock* ReplayDurationThumbnail;                                        // 0x0858 (size: 0x8)
    class UTextBlock* ReplaySize_2;                                                   // 0x0860 (size: 0x8)
    class UTextBlock* ReplayTimeDuration;                                             // 0x0868 (size: 0x8)
    class UTextBlock* ReplayTitle;                                                    // 0x0870 (size: 0x8)
    class UTextBlock* Separator;                                                      // 0x0878 (size: 0x8)
    FReplayInfo Info;                                                                 // 0x0880 (size: 0x68)
    FWBP_ReplayManagementItem_COnExportDispatch OnExportDispatch;                     // 0x08E8 (size: 0x10)
    void OnExportDispatch(FReplayInfo Info);
    FWBP_ReplayManagementItem_COnEditDispatch OnEditDispatch;                         // 0x08F8 (size: 0x10)
    void OnEditDispatch(FReplayInfo Info);
    FWBP_ReplayManagementItem_COnDeleteDispatch OnDeleteDispatch;                     // 0x0908 (size: 0x10)
    void OnDeleteDispatch(FReplayInfo Info);
    FWBP_ReplayManagementItem_COnResetDispatch OnResetDispatch;                       // 0x0918 (size: 0x10)
    void OnResetDispatch(FReplayInfo Info);
    bool IsFocused;                                                                   // 0x0928 (size: 0x1)
    bool IsSelected;                                                                  // 0x0929 (size: 0x1)
    FWBP_ReplayManagementItem_COnClickDispatch OnClickDispatch;                       // 0x0930 (size: 0x10)
    void OnClickDispatch(class UWBP_ReplayManagementItem_C* Replay Management Item);
    FWBP_ReplayManagementItem_COnFocusChangedDispatch OnFocusChangedDispatch;         // 0x0940 (size: 0x10)
    void OnFocusChangedDispatch(bool IsFocused, class UWBP_ReplayManagementItem_C* Instance);
    bool IsInBulk;                                                                    // 0x0950 (size: 0x1)

    void SetImageTexture(class UTexture2D* Texture);
    void SetCurrentReplayState(bool IsCurrent);
    void OnReplaySelected();
    void SetErrorState();
    void IsCurrentReplay(bool& CurrentReplay);
    void IsIncompatible(bool& Incompatible);
    void IsCorrupted(bool& Corrupted);
    void SetBulkState(bool InBulk);
    void SetSelectedState(bool Selected);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetFocusState(bool Focused);
    void OnReplayManagementTaskStateChanged(bool bTaskIsRunning, FString TaskName);
    void OnItemMarkedCurrentReplay();
    void OnItemMarkedCorrupted();
    void OnItemMarkedIncompatible();
    void NumberToFormattedString(int32 Number, int32 Count, FString& Result);
    void SetData(FReplayInfo Info);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Onclick(class UButtonUserWidget* _button, bool _bWithMouse);
    void ExecuteUbergraph_WBP_ReplayManagementItem(int32 EntryPoint);
    void OnFocusChangedDispatch__DelegateSignature(bool IsFocused, class UWBP_ReplayManagementItem_C* Instance);
    void OnClickDispatch__DelegateSignature(class UWBP_ReplayManagementItem_C* Replay Management Item);
    void OnResetDispatch__DelegateSignature(FReplayInfo Info);
    void OnDeleteDispatch__DelegateSignature(FReplayInfo Info);
    void OnEditDispatch__DelegateSignature(FReplayInfo Info);
    void OnExportDispatch__DelegateSignature(FReplayInfo Info);
}; // Size: 0x951

#endif
