#ifndef UE4SS_SDK_BP_Menu_WithPopup_HPP
#define UE4SS_SDK_BP_Menu_WithPopup_HPP

class UBP_Menu_WithPopup_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* CurrentPopup;                                  // 0x03E0 (size: 0x8)
    class UBP_Popup_Background_C* PopupBackground;                                    // 0x03E8 (size: 0x8)
    FVector2D Alignement;                                                             // 0x03F0 (size: 0x8)
    FVector2D Size;                                                                   // 0x03F8 (size: 0x8)
    FAnchors Anchors;                                                                 // 0x0400 (size: 0x10)
    bool LastPopupResult;                                                             // 0x0410 (size: 0x1)

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
}; // Size: 0x411

#endif
