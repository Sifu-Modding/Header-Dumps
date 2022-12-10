#ifndef UE4SS_SDK_BP_Tuto_Hint_HPP
#define UE4SS_SDK_BP_Tuto_Hint_HPP

class UBP_Tuto_Hint_C : public UUserWidget
{
    class UBP_Btn_Input_C* BP_Button_InputIcon;
    class UBP_Btn_Input_C* BP_Button_InputIcon_Add;
    class UTextBlock* Text_Add;
    class UTextBlock* TextTip;
    FText TipText;
    bool MultipleInputs;
    bool Temp_bool_Variable;
    bool K2Node_Event_IsDesignTime;
    class UWidgetAnimation* K2Node_Select_Default;

    ESlateVisibility SetMultipleInputs();
    void PreConstruct(bool bpp__IsDesignTime__pf);
    FText GetTipTxt();
    ESlateVisibility Get_BP_Button_InputIcon_Add_Visibility_0();
    void DisplayHold(bool bpp__Display__pf);
    void Construct();
};

#endif
