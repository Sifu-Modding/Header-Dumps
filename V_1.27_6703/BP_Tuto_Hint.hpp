#ifndef UE4SS_SDK_BP_Tuto_Hint_HPP
#define UE4SS_SDK_BP_Tuto_Hint_HPP

class UBP_Tuto_Hint_C : public UUserWidget
{
    class UBP_Btn_Input_C* BP_Button_InputIcon;                                       // 0x0268 (size: 0x8)
    class UBP_Btn_Input_C* BP_Button_InputIcon_Add;                                   // 0x0270 (size: 0x8)
    class UTextBlock* Text_Add;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* TextTip;                                                        // 0x0280 (size: 0x8)
    FText TipText;                                                                    // 0x0288 (size: 0x18)
    bool MultipleInputs;                                                              // 0x02A0 (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x02A1 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x02A2 (size: 0x1)
    class UWidgetAnimation* K2Node_Select_Default;                                    // 0x02A8 (size: 0x8)

    ESlateVisibility SetMultipleInputs();
    void PreConstruct(bool bpp__IsDesignTime__pf);
    FText GetTipTxt();
    ESlateVisibility Get_BP_Button_InputIcon_Add_Visibility_0();
    void DisplayHold(bool bpp__Display__pf);
    void Construct();
}; // Size: 0x2B0

#endif
