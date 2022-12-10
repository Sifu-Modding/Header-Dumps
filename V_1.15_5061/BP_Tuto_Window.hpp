#ifndef UE4SS_SDK_BP_Tuto_Window_HPP
#define UE4SS_SDK_BP_Tuto_Window_HPP

class UBP_Tuto_Window_C : public UUserWidget
{
    class UBP_Btn_Input_C* BP_Button_InputIcon;
    class UBP_Btn_Input_C* BP_Button_InputIcon1;
    class UBP_Btn_Input_C* BP_Button_InputIcon2;
    class UBP_Btn_Input_C* BP_Button_InputIcon3;
    class UBP_Btn_Input_C* BP_Button_InputIcon_Add1;
    class UBP_Btn_Input_C* BP_Button_InputIcon_Add2;
    class UBP_Btn_Input_C* BP_Button_InputIcon_Add3;
    class UHorizontalBox* HorizontalBox_6;
    class UHorizontalBox* HorizontalBox_7;
    class UHorizontalBox* HorizontalBox_8;
    class UImage* Image1;
    class UImage* Image2;
    class UTextBlock* Text_Add;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_7;
    class UTextBlock* TextBlock_8;
    class UTextBlock* TextBlock_9;
    class UTextBlock* TextBlock_10;
    class UTextBlock* TextBlock_11;
    FText Text1;
    FText Text2_Input1;
    FText Text3;
    FText Text2_Input2;
    FText Text2_Input3;
    bool Input1_LeftDisplay;
    bool Input1_RightDisplay;
    bool Input2_LeftDisplay;
    bool Input2_RightDisplay;
    bool Input3_LeftDisplay;
    bool Input3_RightDisplay;

    ESlateVisibility GetVisibility_5();
    ESlateVisibility GetVisibility_3();
    ESlateVisibility GetVisibility_2();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    ESlateVisibility Get_BP_Button_InputIcon_C_8_Visibility_0();
    ESlateVisibility Get_BP_Button_InputIcon_C_6_Visibility_0();
    ESlateVisibility Get_BP_Button_InputIcon_C_4_Visibility_0();
    ESlateVisibility Get_TextBlock_10_Visibility_0();
    ESlateVisibility Get_BP_Button_InputIcon_C_7_Visibility_0();
    ESlateVisibility Get_TextBlock_8_Visibility_0();
    ESlateVisibility Get_BP_Button_InputIcon_C_5_Visibility_0();
    ESlateVisibility Get_Text_Add_Visibility_0();
    ESlateVisibility Get_BP_Button_InputIcon_Add_Visibility_0();
};

#endif
