#ifndef UE4SS_SDK_WBP_ReplayManagementItem_HPP
#define UE4SS_SDK_WBP_ReplayManagementItem_HPP

class UWBP_ReplayManagementItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* CurrentReplayNotif_Img;
    class UTextBlock* ErrorTitle;
    class UImage* Img_ReplayThumbnail;
    class UTextBlock* ReplayDurationThumbnail;
    class UTextBlock* ReplaySize_2;
    class UTextBlock* ReplayTimeDuration;
    class UTextBlock* ReplayTitle;
    class UTextBlock* Separator;
    FReplayInfo Info;
    FWBP_ReplayManagementItem_COnExportDispatch OnExportDispatch;
    void OnExportDispatch(FReplayInfo Info);
    FWBP_ReplayManagementItem_COnEditDispatch OnEditDispatch;
    void OnEditDispatch(FReplayInfo Info);
    FWBP_ReplayManagementItem_COnDeleteDispatch OnDeleteDispatch;
    void OnDeleteDispatch(FReplayInfo Info);
    FWBP_ReplayManagementItem_COnResetDispatch OnResetDispatch;
    void OnResetDispatch(FReplayInfo Info);
    bool IsFocused;
    bool IsSelected;
    FWBP_ReplayManagementItem_COnClickDispatch OnClickDispatch;
    void OnClickDispatch(class UWBP_ReplayManagementItem_C* Replay Management Item);
    FWBP_ReplayManagementItem_COnFocusChangedDispatch OnFocusChangedDispatch;
    void OnFocusChangedDispatch(bool IsFocused, class UWBP_ReplayManagementItem_C* Instance);

    void SetImageTexture(class UTexture2D* Texture);
    void SetCurrentReplayState(bool IsCurrent);
    void OnReplaySelected();
    void SetErrorState();
    void IsCurrentReplay(bool& CurrentReplay);
    void IsIncompatible(bool& Incompatible);
    void IsCorrupted(bool& Corrupted);
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
};

#endif
