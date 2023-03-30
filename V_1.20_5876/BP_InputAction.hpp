#ifndef UE4SS_SDK_BP_InputAction_HPP
#define UE4SS_SDK_BP_InputAction_HPP

class UBP_InputAction_C : public USCUserWidget
{
    class UBP_Btn_Input_C* Input1;                                                    // 0x0318 (size: 0x8)
    class UBP_Btn_Input_C* Input2;                                                    // 0x0320 (size: 0x8)
    class UBP_Btn_Input_C* Input3;                                                    // 0x0328 (size: 0x8)
    class UBP_Btn_Input_C* Input4;                                                    // 0x0330 (size: 0x8)
    class UHorizontalBox* InputBox;                                                   // 0x0338 (size: 0x8)
    class UTextBlock* Separator_1;                                                    // 0x0340 (size: 0x8)
    class UTextBlock* Separator_2;                                                    // 0x0348 (size: 0x8)
    class UTextBlock* Separator_3;                                                    // 0x0350 (size: 0x8)
    FMappingID MappingID;                                                             // 0x0358 (size: 0x58)
    FString Separator;                                                                // 0x03B0 (size: 0x10)
    class UWidget* OwnerWidget;                                                       // 0x03C0 (size: 0x8)
    EControllerIconStyles Icon Style;                                                 // 0x03C8 (size: 0x1)
    EControllerIconAxisTypes Axis Type;                                               // 0x03C9 (size: 0x1)
    bool DisplayHold;                                                                 // 0x03CA (size: 0x1)
    FBP_InputAction_COnFirstKeyValidityChanged OnFirstKeyValidityChanged;             // 0x03D0 (size: 0x10)
    void OnFirstKeyValidityChanged();
    bool DisplaySingleInput;                                                          // 0x03E0 (size: 0x1)
    bool IsBlack;                                                                     // 0x03E1 (size: 0x1)
    InputAction K2Node_Event__eAction;                                                // 0x03E2 (size: 0x1)
    class UWidget* K2Node_Event__owner;                                               // 0x03E8 (size: 0x8)
    EControllerIconStyles K2Node_Event__eIconStyle;                                   // 0x03F0 (size: 0x1)
    EControllerIconAxisTypes K2Node_Event__eAxisType;                                 // 0x03F1 (size: 0x1)
    FSCUserDefinedEnumHandler K2Node_Event__drawingStyle;                             // 0x03F8 (size: 0x50)
    EUIInputModes K2Node_Event__eMode;                                                // 0x0448 (size: 0x1)
    bool K2Node_Event__bInit;                                                         // 0x0449 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x044A (size: 0x1)
    class URichTextBlock* K2Node_DynamicCast_AsRich_Text_Block;                       // 0x0450 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0458 (size: 0x1)

    void OnFirstKeyValidityChanged__DelegateSignature();
    void UpdateSeparators();
    void UpdateSeparator(class UBP_Btn_Input_C* bpp__InputPin__pf, class UTextBlock* bpp__text__pf);
    void SetMappingID(FMappingID bpp__MappingID__pf);
    void SetInputsMappingID(const FMappingID& bpp___mappingID__pf__const);
    void SetIconStyle(EControllerIconStyles bpp__IconStyle__pf);
    void SetHoldVisibility(bool bpp__Visible__pf);
    void SetBlack(bool bpp__InIsBlack__pf);
    void SetAxisType(EControllerIconAxisTypes bpp__AxisType__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void IsFirstKeyValid(bool& bpp__FirstKeyValid__pf);
    void Construct();
    void BPE_OnUIInputModeChanged(EUIInputModes bpp___eMode__pf, bool bpp___bInit__pf);
    void BndEvt__BP_InputAction_Input1_K2Node_ComponentBoundEvent_0_OnKeyValidityChanged__DelegateSignature();
}; // Size: 0x460

#endif
