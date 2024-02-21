#ifndef UE4SS_SDK_BP_Arena_PopupWarning_HPP
#define UE4SS_SDK_BP_Arena_PopupWarning_HPP

class UBP_Arena_PopupWarning_C : public UUserWidget
{
    class UBP_Btn_InputTip_C* BP_Btn_InputTip;                                        // 0x0268 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_Btn_InputTip_1;                                      // 0x0270 (size: 0x8)
    class UImage* LineBot;                                                            // 0x0278 (size: 0x8)
    class UImage* LineTop;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* PopupText;                                                      // 0x0288 (size: 0x8)
    class UTextBlock* PopupText_1;                                                    // 0x0290 (size: 0x8)
    class UTextBlock* PopupText_2;                                                    // 0x0298 (size: 0x8)
    class UImage* Warning;                                                            // 0x02A0 (size: 0x8)
    class UBorder* WarningBorder;                                                     // 0x02A8 (size: 0x8)
    class UBP_Challenge_Modifiers_C* Cheat Entry;                                     // 0x02B0 (size: 0x8)

    void SetArenaPopupText();
}; // Size: 0x2B8

#endif
