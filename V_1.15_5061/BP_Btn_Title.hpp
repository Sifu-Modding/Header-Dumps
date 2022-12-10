#ifndef UE4SS_SDK_BP_Btn_Title_HPP
#define UE4SS_SDK_BP_Btn_Title_HPP

class UBP_Btn_Title_C : public USCUserWidget
{
    class UTextBlock* ChineseOrnamentTxt;
    class UWidgetSwitcher* CultureBox;
    class UTextBlock* DotTxt;
    class UTextBlock* DotTxt_1;
    class UBP_Btn_InputTip_C* InputTip;
    class UTextBlock* LatinOrnamentTxt;
    class UTextBlock* SubtitleTxt;
    class USizeBox* TextSize;
    FText TxtTitle;
    FText TxtOrnament;
    bool Black;
    bool Bold;
    bool Caps;
    InputAction InputAction;
    EControllerIconAxisTypes AxisType;
    int32 TextWrapSize;
    bool K2Node_Event_IsDesignTime;

    void UpdateStyle(bool bpp__LocalBlack__pf, bool bpp__LocalCaps__pf, bool bpp__LocalBold__pf);
    void UpdateOrnament(const FText& bpp__LocalxTextxOrnament__pfTT__const);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void Construct();
};

#endif
