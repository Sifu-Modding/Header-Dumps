#ifndef UE4SS_SDK_BP_Btn_InputTip_HPP
#define UE4SS_SDK_BP_Btn_InputTip_HPP

class UBP_Btn_InputTip_C : public USCUserWidget
{
    class UBorder* BkgBorder;                                                         // 0x0310 (size: 0x8)
    class UCanvasPanel* Canvas;                                                       // 0x0318 (size: 0x8)
    class UBP_InputAction_C* InputAction;                                             // 0x0320 (size: 0x8)
    class UWidgetSwitcher* Switcher;                                                  // 0x0328 (size: 0x8)
    class UHorizontalBox* Tip_MenuAction;                                             // 0x0330 (size: 0x8)
    class UImage* TipImage;                                                           // 0x0338 (size: 0x8)
    class UTextBlock* TipText;                                                        // 0x0340 (size: 0x8)
    class USizeBox* WidthOverrideBox;                                                 // 0x0348 (size: 0x8)
    FText Text;                                                                       // 0x0350 (size: 0x18)
    InputAction Action;                                                               // 0x0368 (size: 0x1)
    InputContext InputContext;                                                        // 0x0369 (size: 0x1)
    EControllerIconAxisTypes AxisType;                                                // 0x036A (size: 0x1)
    FBP_Btn_InputTip_COnVisibilityChange OnVisibilityChange;                          // 0x0370 (size: 0x10)
    void OnVisibilityChange(ESlateVisibility bpp__bVisibility__pf);
    bool Black;                                                                       // 0x0380 (size: 0x1)
    bool Primary;                                                                     // 0x0381 (size: 0x1)
    bool Display Hold;                                                                // 0x0382 (size: 0x1)
    bool IconRight;                                                                   // 0x0383 (size: 0x1)
    bool UseImage;                                                                    // 0x0384 (size: 0x1)
    bool WidthOverride;                                                               // 0x0385 (size: 0x1)
    class UTexture2D* Image;                                                          // 0x0388 (size: 0x8)
    TArray<class UWidget*> Tip Menu Action Children;                                  // 0x0390 (size: 0x10)
    ESlateVisibility Temp_byte_Variable;                                              // 0x03A0 (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x03A1 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x03A2 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_2;                                            // 0x03A3 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_3;                                            // 0x03A4 (size: 0x1)
    bool Temp_bool_Variable_1;                                                        // 0x03A5 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x03A6 (size: 0x1)
    bool CallFunc_IsFirstKeyValid_FirstKeyValid;                                      // 0x03A7 (size: 0x1)
    bool CallFunc_IsFirstKeyValid_FirstKeyValid_1;                                    // 0x03A8 (size: 0x1)
    ESlateVisibility K2Node_Select_Default;                                           // 0x03A9 (size: 0x1)
    ESlateVisibility K2Node_Select_Default_1;                                         // 0x03AA (size: 0x1)

    void OnVisibilityChange__DelegateSignature(ESlateVisibility bpp__bVisibility__pf);
    void UpdateText(const FText& bpp__NewText__pf__const);
    void SetWidthOverride(bool bpp__LocalWidth__pf);
    void SetPrimary(bool bpp__LocalPrimary__pf);
    void SetMapping(InputContext bpp__Context__pf);
    void SetHoldVisibility(bool bpp__Visible__pf);
    void SetBlack(bool bpp__IsBlack__pf);
    void SetAxisType(EControllerIconAxisTypes bpp__AxisType__pf);
    void SetAlignment(bool bpp__Rightxalignement__pfT);
    void SetAction(InputAction bpp__Action__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BndEvt__BP_Btn_InputTip_InputAction_K2Node_ComponentBoundEvent_0_OnFirstKeyValidityChanged__DelegateSignature();
}; // Size: 0x3B0

#endif
