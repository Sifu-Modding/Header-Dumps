#ifndef UE4SS_SDK_BP_HUD_FocusRessource_HPP
#define UE4SS_SDK_BP_HUD_FocusRessource_HPP

class UBP_HUD_FocusRessource_C : public USCUserWidget
{
    class UHorizontalBox* BarBox;                                                     // 0x0310 (size: 0x8)
    int32 LastFocusMax;                                                               // 0x0318 (size: 0x4)
    float CurrentFocusValue;                                                          // 0x031C (size: 0x4)
    int32 FilledLevel;                                                                // 0x0320 (size: 0x4)
    TArray<class USCUserWidget*> FocusBarArray;                                       // 0x0328 (size: 0x10)
    class AVitalPointActor* CurrentPointSelected;                                     // 0x0338 (size: 0x8)
    class USCUserWidget* LastFocusBar;                                                // 0x0340 (size: 0x8)
    float LastFocusValue;                                                             // 0x0348 (size: 0x4)
    bool JustFilled;                                                                  // 0x034C (size: 0x1)
    class UAsyncTaskTagChanged* asyncTagChangedTask;                                  // 0x0350 (size: 0x8)
    FTimerHandle CooldownUpdateFunctionHandle;                                        // 0x0358 (size: 0x8)
    bool Display;                                                                     // 0x0360 (size: 0x1)
    bool LastDemiBar;                                                                 // 0x0361 (size: 0x1)
    class USCUserWidget* DemiFocusBar;                                                // 0x0368 (size: 0x8)
    class UCurveFloat* CurveFocusBarRemap;                                            // 0x0370 (size: 0x8)
    bool Temp_bool_Variable;                                                          // 0x0378 (size: 0x1)
    int32 Temp_int_Array_Index_Variable;                                              // 0x037C (size: 0x4)
    int32 Temp_int_Array_Index_Variable_1;                                            // 0x0380 (size: 0x4)
    int32 Temp_int_Loop_Counter_Variable;                                             // 0x0384 (size: 0x4)
    int32 Temp_int_Array_Index_Variable_2;                                            // 0x0388 (size: 0x4)
    bool K2Node_Event__bPawnOnly;                                                     // 0x038C (size: 0x1)
    float K2Node_CustomEvent__fPrevious_1;                                            // 0x0390 (size: 0x4)
    float K2Node_CustomEvent__fNew_1;                                                 // 0x0394 (size: 0x4)
    FBP_HUD_FocusRessource_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0398 (size: 0x10)
    void FocusPointValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    FGeometry K2Node_Event_MyGeometry;                                                // 0x03A8 (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x03E0 (size: 0x4)
    class USCUserWidget* CallFunc_Array_Get_Item;                                     // 0x03E8 (size: 0x8)
    bool CallFunc_IsConsumable_Consumable;                                            // 0x03F0 (size: 0x1)
    int32 CallFunc_IsConsumable_FocusCost;                                            // 0x03F4 (size: 0x4)
    class USCUserWidget* CallFunc_Array_Get_Item_1;                                   // 0x03F8 (size: 0x8)
    int32 Temp_int_Loop_Counter_Variable_1;                                           // 0x0400 (size: 0x4)
    int32 Temp_int_Loop_Counter_Variable_2;                                           // 0x0404 (size: 0x4)
    FBP_HUD_FocusRessource_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0408 (size: 0x10)
    void FocusPointValueChanged(float bpp___fPrevious__pf, float bpp___fNew__pf);
    bool K2Node_Event_IsDesignTime;                                                   // 0x0418 (size: 0x1)
    class USCUserWidget* CallFunc_Array_Get_Item_2;                                   // 0x0420 (size: 0x8)
    bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;                      // 0x0428 (size: 0x1)
    float K2Node_CustomEvent__fPrevious;                                              // 0x042C (size: 0x4)
    float K2Node_CustomEvent__fNew;                                                   // 0x0430 (size: 0x4)
    ESlateVisibility Temp_byte_Variable;                                              // 0x0434 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x0435 (size: 0x1)
    ESlateVisibility K2Node_Select_Default;                                           // 0x0436 (size: 0x1)

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
}; // Size: 0x438

#endif
