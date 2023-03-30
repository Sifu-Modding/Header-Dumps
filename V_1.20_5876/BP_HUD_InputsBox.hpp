#ifndef UE4SS_SDK_BP_HUD_InputsBox_HPP
#define UE4SS_SDK_BP_HUD_InputsBox_HPP

class UBP_HUD_InputsBox_C : public UUserWidget
{
    class UBP_Tuto_Hint_C* BP_Tuto_Hints1;                                            // 0x0268 (size: 0x8)
    class UBP_Tuto_Hint_C* BP_Tuto_Hints2;                                            // 0x0270 (size: 0x8)
    class UBP_Tuto_Hint_C* BP_Tuto_Hints3;                                            // 0x0278 (size: 0x8)
    class UBorder* InputsBox;                                                         // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0288 (size: 0x8)
    int32 K2Node_CustomEvent_WhichTooltip;                                            // 0x0290 (size: 0x4)
    FText K2Node_CustomEvent_Text;                                                    // 0x0298 (size: 0x18)
    bool K2Node_CustomEvent_MultipleInputs;                                           // 0x02B0 (size: 0x1)
    class UGenericInputData* K2Node_CustomEvent_InputLeft;                            // 0x02B8 (size: 0x8)
    class UGenericInputData* K2Node_CustomEvent_InputRight;                           // 0x02C0 (size: 0x8)
    bool K2Node_CustomEvent_Hold;                                                     // 0x02C8 (size: 0x1)
    bool K2Node_SwitchInteger_CmpSuccess;                                             // 0x02C9 (size: 0x1)
    class UBP_Tuto_Hint_C* K2Node_CustomEvent_ToolTip_Ref;                            // 0x02D0 (size: 0x8)
    bool K2Node_CustomEvent_Hold_1;                                                   // 0x02D8 (size: 0x1)
    FText K2Node_CustomEvent_Text_1;                                                  // 0x02E0 (size: 0x18)
    bool K2Node_CustomEvent_MultipleInputs_1;                                         // 0x02F8 (size: 0x1)
    class UGenericInputData* K2Node_CustomEvent_InputLeft_1;                          // 0x0300 (size: 0x8)
    class UGenericInputData* K2Node_CustomEvent_InputRight_1;                         // 0x0308 (size: 0x8)

    void UpdateToolTip(Display)(const class UBP_Tuto_Hint_C* bpp__ToolTip_Ref__pf__const, bool bpp__Hold__pf, const FText& bpp__Text__pf__const, bool bpp__MultipleInputs__pf__const, const class UGenericInputData* bpp__InputLeft__pf__const, const class UGenericInputData* bpp__InputRight__pf__const);
    void HideToolTips();
    void DisplayToolTip(int32 bpp__WhichTooltip__pf, const FText& bpp__Text__pf__const, bool bpp__MultipleInputs__pf, const class UGenericInputData* bpp__InputLeft__pf__const, const class UGenericInputData* bpp__InputRight__pf__const, bool bpp__Hold__pf);
}; // Size: 0x310

#endif
