#ifndef UE4SS_SDK_BP_HUD_InputsBox_HPP
#define UE4SS_SDK_BP_HUD_InputsBox_HPP

class UBP_HUD_InputsBox_C : public UUserWidget
{
    class UBP_Tuto_Hint_C* BP_Tuto_Hints1;
    class UBP_Tuto_Hint_C* BP_Tuto_Hints2;
    class UBP_Tuto_Hint_C* BP_Tuto_Hints3;
    class UBorder* InputsBox;
    class UTextBlock* TextBlock_1;
    int32 K2Node_CustomEvent_WhichTooltip;
    FText K2Node_CustomEvent_Text;
    bool K2Node_CustomEvent_MultipleInputs;
    class UGenericInputData* K2Node_CustomEvent_InputLeft;
    class UGenericInputData* K2Node_CustomEvent_InputRight;
    bool K2Node_CustomEvent_Hold;
    bool K2Node_SwitchInteger_CmpSuccess;
    class UBP_Tuto_Hint_C* K2Node_CustomEvent_ToolTip_Ref;
    bool K2Node_CustomEvent_Hold_1;
    FText K2Node_CustomEvent_Text_1;
    bool K2Node_CustomEvent_MultipleInputs_1;
    class UGenericInputData* K2Node_CustomEvent_InputLeft_1;
    class UGenericInputData* K2Node_CustomEvent_InputRight_1;

    void UpdateToolTip(Display)(const class UBP_Tuto_Hint_C* bpp__ToolTip_Ref__pf__const, bool bpp__Hold__pf, const FText& bpp__Text__pf__const, bool bpp__MultipleInputs__pf__const, const class UGenericInputData* bpp__InputLeft__pf__const, const class UGenericInputData* bpp__InputRight__pf__const);
    void HideToolTips();
    void DisplayToolTip(int32 bpp__WhichTooltip__pf, const FText& bpp__Text__pf__const, bool bpp__MultipleInputs__pf, const class UGenericInputData* bpp__InputLeft__pf__const, const class UGenericInputData* bpp__InputRight__pf__const, bool bpp__Hold__pf);
};

#endif
