#ifndef UE4SS_SDK_BP_Btn_Input_HPP
#define UE4SS_SDK_BP_Btn_Input_HPP

class UBP_Btn_Input_C : public UControllerButtonWidget
{
    class UWidgetAnimation* HoldAnim;                                                 // 0x08C0 (size: 0x8)
    class UWidgetAnimation* SlowmoAnim;                                               // 0x08C8 (size: 0x8)
    class UWidgetAnimation* HintAnim;                                                 // 0x08D0 (size: 0x8)
    class UWidgetSwitcher* ControllerSwitcher;                                        // 0x08D8 (size: 0x8)
    class UImage* Hint;                                                               // 0x08E0 (size: 0x8)
    class UImage* ImgFiller;                                                          // 0x08E8 (size: 0x8)
    class UAsyncImage* ImgInput;                                                      // 0x08F0 (size: 0x8)
    class UImage* ImgKey;                                                             // 0x08F8 (size: 0x8)
    class UAsyncImage* ImgShadow;                                                     // 0x0900 (size: 0x8)
    class UCanvasPanel* InputCanvas;                                                  // 0x0908 (size: 0x8)
    class UTextBlock* TextAdd;                                                        // 0x0910 (size: 0x8)
    class UTextBlock* TextHold;                                                       // 0x0918 (size: 0x8)
    class UTextBlock* TxtInput;                                                       // 0x0920 (size: 0x8)
    class UTexture2D* DefaultTexture;                                                 // 0x0928 (size: 0x8)
    class UTexture2D* MouseModeTexture;                                               // 0x0930 (size: 0x8)
    bool KeyExist;                                                                    // 0x0938 (size: 0x1)
    FBP_Btn_Input_COnKeyValidityChanged OnKeyValidityChanged;                         // 0x0940 (size: 0x10)
    void OnKeyValidityChanged();
    bool Black;                                                                       // 0x0950 (size: 0x1)
    bool DisplayHold;                                                                 // 0x0951 (size: 0x1)
    bool PlayingIn;                                                                   // 0x0952 (size: 0x1)
    bool PlayingOut;                                                                  // 0x0953 (size: 0x1)
    bool DisplayAdd;                                                                  // 0x0954 (size: 0x1)
    FString Separator;                                                                // 0x0958 (size: 0x10)
    bool AnimateOnVisible;                                                            // 0x0968 (size: 0x1)
    TMap<class FKey, class FText> KeyMap;                                             // 0x0970 (size: 0x50)
    ESlateVisibility Temp_byte_Variable;                                              // 0x09C0 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x09C1 (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x09C2 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_2;                                            // 0x09C3 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x09C4 (size: 0x1)
    InputAction K2Node_Event__eAction;                                                // 0x09C5 (size: 0x1)
    class UWidget* K2Node_Event__owner;                                               // 0x09C8 (size: 0x8)
    EControllerIconStyles K2Node_Event__eIconStyle;                                   // 0x09D0 (size: 0x1)
    EControllerIconAxisTypes K2Node_Event__eAxisType;                                 // 0x09D1 (size: 0x1)
    FSCUserDefinedEnumHandler K2Node_Event__drawingStyle;                             // 0x09D8 (size: 0x50)
    ESlateVisibility K2Node_Select_Default;                                           // 0x0A28 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_3;                                            // 0x0A29 (size: 0x1)
    bool CallFunc_BPF_GetUIKeyInfos__bOutFoundIcon;                                   // 0x0A2A (size: 0x1)
    FInputMappingNode CallFunc_BPF_GetUIKeyInfos__outNode;                            // 0x0A30 (size: 0x90)
    TSoftObjectPtr<UTexture2D> CallFunc_BPF_GetUIKeyInfos__icon;                      // 0x0AC0 (size: 0x28)
    FKey CallFunc_BPF_GetUIKeyInfos__key;                                             // 0x0AE8 (size: 0x18)
    FText CallFunc_BPF_GetUIKeyInfos__replacementText;                                // 0x0B00 (size: 0x18)
    bool CallFunc_BPF_GetUIKeyInfos__bShowText;                                       // 0x0B18 (size: 0x1)
    FString CallFunc_BPF_GetUIKeyInfos__outSeparator;                                 // 0x0B20 (size: 0x10)
    FText CallFunc_GetKeyboardText_Text;                                              // 0x0B30 (size: 0x18)
    bool CallFunc_GetKeyboardText_NotInMap;                                           // 0x0B48 (size: 0x1)
    class UGenericInputUIData* K2Node_DynamicCast_AsInput_UIData;                     // 0x0B50 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0B58 (size: 0x1)
    bool Temp_bool_Variable_1;                                                        // 0x0B59 (size: 0x1)
    ESlateVisibility K2Node_Select_Default_1;                                         // 0x0B5A (size: 0x1)
    class UWGSaveObjectPlayerProfile* K2Node_DynamicCast_AsWGSave_Object_Player_Profile; // 0x0B60 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0B68 (size: 0x1)

    void OnKeyValidityChanged__DelegateSignature();
    void SetHoldVisibility(bool bpp__Visible__pf);
    void SetBlack(bool bpp__LocalBlack__pf);
    void SetAddVisibility(bool bpp__Visible__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void IsKeyValid(bool& bpp__Result__pf);
    void GetKeyboardText(const FKey& bpp__Key__pf__const, FText& bpp__text__pf, bool& bpp__NotInMap__pf);
    void Construct();
    void BPE_OnVisible();
    void BPE_OnHidden();
}; // Size: 0xB70

#endif
