#ifndef UE4SS_SDK_BP_InputAction_HPP
#define UE4SS_SDK_BP_InputAction_HPP

class UBP_InputAction_C : public USCUserWidget
{
    class UBP_Btn_Input_C* Input1;
    class UBP_Btn_Input_C* Input2;
    class UBP_Btn_Input_C* Input3;
    class UBP_Btn_Input_C* Input4;
    class UHorizontalBox* InputBox;
    class UTextBlock* Separator_1;
    class UTextBlock* Separator_2;
    class UTextBlock* Separator_3;
    FMappingID MappingID;
    FString Separator;
    class UWidget* OwnerWidget;
    EControllerIconStyles Icon Style;
    EControllerIconAxisTypes Axis Type;
    bool DisplayHold;
    FBP_InputAction_COnFirstKeyValidityChanged OnFirstKeyValidityChanged;
    void OnFirstKeyValidityChanged();
    bool DisplaySingleInput;
    bool IsBlack;
    InputAction K2Node_Event__eAction;
    class UWidget* K2Node_Event__Owner;
    EControllerIconStyles K2Node_Event__eIconStyle;
    EControllerIconAxisTypes K2Node_Event__eAxisType;
    FSCUserDefinedEnumHandler K2Node_Event__drawingStyle;
    EUIInputModes K2Node_Event__eMode;
    bool K2Node_Event__bInit;
    bool K2Node_Event_IsDesignTime;
    class URichTextBlock* K2Node_DynamicCast_AsRich_Text_Block;
    bool K2Node_DynamicCast_bSuccess;

    void OnFirstKeyValidityChanged__DelegateSignature();
    void UpdateSeparators();
    void UpdateSeparator(class UBP_Btn_Input_C* bpp__InputPin__pf, class UTextBlock* bpp__Text__pf);
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
};

#endif
