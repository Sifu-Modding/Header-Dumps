#ifndef UE4SS_SDK_BP_Btn_Title_HPP
#define UE4SS_SDK_BP_Btn_Title_HPP

class UBP_Btn_Title_C : public USCUserWidget
{
    class UTextBlock* ChineseOrnamentTxt;                                             // 0x0310 (size: 0x8)
    class UWidgetSwitcher* CultureBox;                                                // 0x0318 (size: 0x8)
    class UTextBlock* DotTxt;                                                         // 0x0320 (size: 0x8)
    class UTextBlock* DotTxt_1;                                                       // 0x0328 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip;                                               // 0x0330 (size: 0x8)
    class UTextBlock* LatinOrnamentTxt;                                               // 0x0338 (size: 0x8)
    class UTextBlock* SubtitleTxt;                                                    // 0x0340 (size: 0x8)
    class USizeBox* TextSize;                                                         // 0x0348 (size: 0x8)
    FText TxtTitle;                                                                   // 0x0350 (size: 0x18)
    FText TxtOrnament;                                                                // 0x0368 (size: 0x18)
    bool Black;                                                                       // 0x0380 (size: 0x1)
    bool Bold;                                                                        // 0x0381 (size: 0x1)
    bool Caps;                                                                        // 0x0382 (size: 0x1)
    InputAction InputAction;                                                          // 0x0383 (size: 0x1)
    EControllerIconAxisTypes AxisType;                                                // 0x0384 (size: 0x1)
    int32 TextWrapSize;                                                               // 0x0388 (size: 0x4)
    bool K2Node_Event_IsDesignTime;                                                   // 0x038C (size: 0x1)

    void UpdateStyle(bool bpp__LocalBlack__pf, bool bpp__LocalCaps__pf, bool bpp__LocalBold__pf);
    void UpdateOrnament(const FText& bpp__LocalxTextxOrnament__pfTT__const);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void Construct();
}; // Size: 0x390

#endif
