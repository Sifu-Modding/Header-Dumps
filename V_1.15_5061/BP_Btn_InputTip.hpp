#ifndef UE4SS_SDK_BP_Btn_InputTip_HPP
#define UE4SS_SDK_BP_Btn_InputTip_HPP

class UBP_Btn_InputTip_C : public USCUserWidget
{
    class UBorder* BkgBorder;
    class UCanvasPanel* Canvas;
    class UBP_InputAction_C* InputAction;
    class UWidgetSwitcher* Switcher;
    class UHorizontalBox* Tip_MenuAction;
    class UImage* TipImage;
    class UTextBlock* TipText;
    class USizeBox* WidthOverrideBox;
    FText Text;
    InputAction Action;
    InputContext InputContext;
    EControllerIconAxisTypes AxisType;
    FBP_Btn_InputTip_COnVisibilityChange OnVisibilityChange;
    void OnVisibilityChange(ESlateVisibility bpp__bVisibility__pf);
    bool Black;
    bool Primary;
    bool Display Hold;
    bool IconRight;
    bool UseImage;
    bool WidthOverride;
    class UTexture2D* Image;
    TArray<class UWidget*> Tip Menu Action Children;
    ESlateVisibility Temp_byte_Variable;
    bool Temp_bool_Variable;
    ESlateVisibility Temp_byte_Variable_1;
    ESlateVisibility Temp_byte_Variable_2;
    ESlateVisibility Temp_byte_Variable_3;
    bool Temp_bool_Variable_1;
    bool K2Node_Event_IsDesignTime;
    bool CallFunc_IsFirstKeyValid_FirstKeyValid;
    bool CallFunc_IsFirstKeyValid_FirstKeyValid_1;
    ESlateVisibility K2Node_Select_Default;
    ESlateVisibility K2Node_Select_Default_1;

    void OnVisibilityChange__DelegateSignature(ESlateVisibility bpp__bVisibility__pf);
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
};

#endif
