#ifndef UE4SS_SDK_BP_HUD_FocusRessource_HPP
#define UE4SS_SDK_BP_HUD_FocusRessource_HPP

class UBP_HUD_FocusRessource_C : public USCUserWidget
{
    class UHorizontalBox* BarBox;
    int32 LastFocusMax;
    float CurrentFocusValue;
    int32 FilledLevel;
    TArray<class USCUserWidget*> FocusBarArray;
    class AVitalPointActor* CurrentPointSelected;
    class USCUserWidget* LastFocusBar;
    float LastFocusValue;
    bool JustFilled;
    class UAsyncTaskTagChanged* asyncTagChangedTask;
    FTimerHandle CooldownUpdateFunctionHandle;
    bool Display;
    bool LastDemiBar;
    class USCUserWidget* DemiFocusBar;
    class UCurveFloat* CurveFocusBarRemap;
    int32 Temp_int_Array_Index_Variable;
    int32 Temp_int_Array_Index_Variable_1;
    int32 Temp_int_Loop_Counter_Variable;
    int32 Temp_int_Array_Index_Variable_2;
    int32 Temp_int_Loop_Counter_Variable_1;
    bool K2Node_Event__bPawnOnly;
    float K2Node_CustomEvent__fPrevious_1;
    float K2Node_CustomEvent__fNew_1;
    FBP_HUD_FocusRessource_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void FocusPointValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;
    class USCUserWidget* CallFunc_Array_Get_Item;
    bool CallFunc_IsConsumable_Consumable;
    int32 CallFunc_IsConsumable_FocusCost;
    class USCUserWidget* CallFunc_Array_Get_Item_1;
    int32 Temp_int_Loop_Counter_Variable_2;
    FBP_HUD_FocusRessource_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void FocusPointValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    ESlateVisibility Temp_byte_Variable;
    ESlateVisibility Temp_byte_Variable_1;
    bool Temp_bool_Variable;
    bool K2Node_Event_IsDesignTime;
    class USCUserWidget* CallFunc_Array_Get_Item_2;
    bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
    float K2Node_CustomEvent__fPrevious;
    float K2Node_CustomEvent__fNew;
    ESlateVisibility K2Node_Select_Default;

    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void SetFocusBarPercent(class USCUserWidget* bpp__FocusBar__pf, int32 bpp__Index__pf);
    void SetFocusBarColor(class USCUserWidget* bpp__FocusBar__pf, int32 bpp__Index__pf, bool bpp__Selected__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void ManageFocusBarsCreation(int32 bpp__NewFocusxMax__pfT, bool bpp__DemiBar__pf);
    void IsConsumable(class AVitalPointActor* bpp__Target__pf, bool& bpp__Consumable__pf, int32& bpp__FocusCost__pf);
    void IsBarPreviouslyEmpty(int32 bpp__BarIndex__pf, bool& bpp__FillBar__pf);
    void IsBarJustFilled(bool& bpp__JustFilled__pf);
    void FocusPointChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    void FocusBarValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    void Destruct();
    void CE_FocusPoint Changed();
    void CE_FocusBarChanged();
    void BPE_OnVisible();
    void BPE_BindToDelegates(bool bpp___bPawnOnly__pf);
    void FocusPointValueChanged__DelegateSignature(float bpp___fPrevious__pf, float bpp___fNew__pf);
};

#endif
