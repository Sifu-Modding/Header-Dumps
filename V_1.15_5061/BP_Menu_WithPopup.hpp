#ifndef UE4SS_SDK_BP_Menu_WithPopup_HPP
#define UE4SS_SDK_BP_Menu_WithPopup_HPP

class UBP_Menu_WithPopup_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Menu_Popup_Validation_C* CurrentPopup;
    class UBP_Popup_Background_C* PopupBackground;
    FVector2D Alignement;
    FVector2D Size;
    FAnchors Anchors;
    bool LastPopupResult;

    void NoClicked();
    void YesClicked();
    void OnPopupClosed();
    void EmptyFunction();
    void CreatePopup(FText TitleText, FText PrimaryText, FText SecondaryText, FText YesText, const FCreatePopupYesEvent& YesEvent, bool bShowBackground, bool bHideBackgroundOnYes, bool Warning);
    void GetCurrentPopup(class UBP_Menu_Popup_Validation_C*& CurrentPopup);
    void RemovePopupBackground();
    void RemovePopup();
    void TryUpdateButtonFocus();
    void GetWidgetToFocus(class UWidget*& OutWidget);
    void CreatePopupWithCancelEvent(FText TitleText, FText PrimaryText, FText SecondaryText, FText YesText, const FCreatePopupWithCancelEventYesEvent& YesEvent, const FCreatePopupWithCancelEventCancelEvent& CancelEvent, bool bShowBackground, bool bHideBackgroundOnYes, bool Warning);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void Destruct();
    void HidePopup();
    void HideBackground();
    void ExecuteUbergraph_BP_Menu_WithPopup(int32 EntryPoint);
};

#endif
