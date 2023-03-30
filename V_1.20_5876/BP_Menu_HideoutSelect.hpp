#ifndef UE4SS_SDK_BP_Menu_HideoutSelect_HPP
#define UE4SS_SDK_BP_Menu_HideoutSelect_HPP

class UBP_Menu_HideoutSelect_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_Btn_InputTip;                                        // 0x03E0 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupDeath;                                 // 0x03E8 (size: 0x8)
    class UBP_Menu_HideoutItem_C* Hideout01;                                          // 0x03F0 (size: 0x8)
    class UBP_Menu_HideoutItem_C* Hideout02;                                          // 0x03F8 (size: 0x8)
    class UBP_Menu_HideoutItem_C* Hideout03;                                          // 0x0400 (size: 0x8)
    class UBP_Menu_HideoutItem_C* Hideout04;                                          // 0x0408 (size: 0x8)
    class UBP_Menu_HideoutItem_C* Hideout05;                                          // 0x0410 (size: 0x8)
    class UHorizontalBox* HideoutBox;                                                 // 0x0418 (size: 0x8)
    int32 LastHideout;                                                                // 0x0420 (size: 0x4)
    int32 GiveupAge;                                                                  // 0x0424 (size: 0x4)

    void LastHideoutFocused(class UButtonUserWidget* _button, EFocusCause _eCause);
    bool BPE_OnBackButtonPressed();
    class UWidget* Parrallax(EUINavigation Navigation);
    void SetSelectedHideout();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_Menu_HideoutSelect_BP_PopupDeath_K2Node_ComponentBoundEvent_5_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_HideoutSelect_BP_PopupDeath_K2Node_ComponentBoundEvent_6_NoClicked__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_HideoutSelect(int32 EntryPoint);
}; // Size: 0x428

#endif
