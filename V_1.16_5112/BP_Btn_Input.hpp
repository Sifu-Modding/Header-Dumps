#ifndef UE4SS_SDK_BP_Btn_Input_HPP
#define UE4SS_SDK_BP_Btn_Input_HPP

class UBP_Btn_Input_C : public UControllerButtonWidget
{
    class UWidgetAnimation* HoldAnim;
    class UWidgetAnimation* SlowmoAnim;
    class UWidgetAnimation* HintAnim;
    class UWidgetSwitcher* ControllerSwitcher;
    class UImage* Hint;
    class UImage* ImgFiller;
    class UAsyncImage* ImgInput;
    class UImage* ImgKey;
    class UAsyncImage* ImgShadow;
    class UCanvasPanel* InputCanvas;
    class UTextBlock* TextAdd;
    class UTextBlock* TextHold;
    class UTextBlock* TxtInput;
    class UTexture2D* DefaultTexture;
    class UTexture2D* MouseModeTexture;
    bool KeyExist;
    FBP_Btn_Input_COnKeyValidityChanged OnKeyValidityChanged;
    void OnKeyValidityChanged();
    bool Black;
    bool DisplayHold;
    bool PlayingIn;
    bool PlayingOut;
    bool DisplayAdd;
    FString Separator;
    bool AnimateOnVisible;
    TMap<class FKey, class FText> KeyMap;
    ESlateVisibility Temp_byte_Variable;
    ESlateVisibility Temp_byte_Variable_1;
    bool Temp_bool_Variable;
    ESlateVisibility Temp_byte_Variable_2;
    bool K2Node_Event_IsDesignTime;
    InputAction K2Node_Event__eAction;
    class UWidget* K2Node_Event__Owner;
    EControllerIconStyles K2Node_Event__eIconStyle;
    EControllerIconAxisTypes K2Node_Event__eAxisType;
    FSCUserDefinedEnumHandler K2Node_Event__drawingStyle;
    ESlateVisibility K2Node_Select_Default;
    ESlateVisibility Temp_byte_Variable_3;
    bool CallFunc_BPF_GetUIKeyInfos__bOutFoundIcon;
    FInputMappingNode CallFunc_BPF_GetUIKeyInfos__outNode;
    TSoftObjectPtr<UTexture2D> CallFunc_BPF_GetUIKeyInfos__icon;
    FKey CallFunc_BPF_GetUIKeyInfos__key;
    FText CallFunc_BPF_GetUIKeyInfos__replacementText;
    bool CallFunc_BPF_GetUIKeyInfos__bShowText;
    FString CallFunc_BPF_GetUIKeyInfos__outSeparator;
    FText CallFunc_GetKeyboardText_Text;
    bool CallFunc_GetKeyboardText_NotInMap;
    class UGenericInputUIData* K2Node_DynamicCast_AsInput_UIData;
    bool K2Node_DynamicCast_bSuccess;
    bool Temp_bool_Variable_1;
    ESlateVisibility K2Node_Select_Default_1;
    class UWGSaveObjectPlayerProfile* K2Node_DynamicCast_AsWGSave_Object_Player_Profile;
    bool K2Node_DynamicCast_bSuccess_1;

    void OnKeyValidityChanged__DelegateSignature();
    void SetHoldVisibility(bool bpp__Visible__pf);
    void SetBlack(bool bpp__LocalBlack__pf);
    void SetAddVisibility(bool bpp__Visible__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void IsKeyValid(bool& bpp__Result__pf);
    void GetKeyboardText(const FKey& bpp__Key__pf__const, FText& bpp__Text__pf, bool& bpp__NotInMap__pf);
    void Construct();
    void BPE_OnVisible();
    void BPE_OnHidden();
};

#endif
