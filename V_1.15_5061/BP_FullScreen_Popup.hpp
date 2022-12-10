#ifndef UE4SS_SDK_BP_FullScreen_Popup_HPP
#define UE4SS_SDK_BP_FullScreen_Popup_HPP

class UBP_FullScreen_Popup_C : public UGenericErrorPopupWidget
{
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;

    class UPopupWidget* BPE_GetPopupWidget();
};

#endif
