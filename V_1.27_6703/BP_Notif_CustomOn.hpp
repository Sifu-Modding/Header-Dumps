#ifndef UE4SS_SDK_BP_Notif_CustomOn_HPP
#define UE4SS_SDK_BP_Notif_CustomOn_HPP

class UBP_Notif_CustomOn_C : public UInGameNotification
{
    class UTextBlock* CustomCheats_Txt;                                               // 0x03A8 (size: 0x8)
    class UTextBlock* CustomOn_Text_1;                                                // 0x03B0 (size: 0x8)
    class UWidgetSwitcher* CustomOnSwitcher;                                          // 0x03B8 (size: 0x8)
    class UImage* Icon;                                                               // 0x03C0 (size: 0x8)
    class UBorder* InfoPanelBkg;                                                      // 0x03C8 (size: 0x8)
    class UImage* Line;                                                               // 0x03D0 (size: 0x8)
    class UHorizontalBox* ProgressNotSaved_Box;                                       // 0x03D8 (size: 0x8)
    class UTextBlock* ProgressNotSaved_Text;                                          // 0x03E0 (size: 0x8)
    class USizeBox* SizeBox_Layout;                                                   // 0x03E8 (size: 0x8)
    class UHealthComponent* Health;                                                   // 0x03F0 (size: 0x8)
    bool DisableBackground;                                                           // 0x03F8 (size: 0x1)
    bool DisplayNbCheats;                                                             // 0x03F9 (size: 0x1)
    bool DisplayProgressNotSaved;                                                     // 0x03FA (size: 0x1)
    bool OnlyDisplayProgressNotSaved;                                                 // 0x03FB (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x03FC (size: 0x1)
    FLinearColor Temp_struct_Variable;                                                // 0x0400 (size: 0x10)
    FLinearColor Temp_struct_Variable_1;                                              // 0x0410 (size: 0x10)
    bool Temp_bool_Variable_1;                                                        // 0x0420 (size: 0x1)
    int32 Temp_int_Variable;                                                          // 0x0424 (size: 0x4)
    int32 Temp_int_Variable_1;                                                        // 0x0428 (size: 0x4)
    bool Temp_bool_Variable_2;                                                        // 0x042C (size: 0x1)
    ESlateVisibility Temp_byte_Variable;                                              // 0x042D (size: 0x1)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x042E (size: 0x1)
    bool Temp_bool_Variable_3;                                                        // 0x042F (size: 0x1)
    ESlateVisibility Temp_byte_Variable_2;                                            // 0x0430 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_3;                                            // 0x0431 (size: 0x1)
    bool Temp_bool_Variable_4;                                                        // 0x0432 (size: 0x1)
    FText Temp_text_Variable;                                                         // 0x0438 (size: 0x18)
    bool Temp_bool_Variable_5;                                                        // 0x0450 (size: 0x1)
    FText Temp_text_Variable_1;                                                       // 0x0458 (size: 0x18)
    bool K2Node_Event_IsDesignTime;                                                   // 0x0470 (size: 0x1)
    FLinearColor K2Node_Select_Default;                                               // 0x0474 (size: 0x10)
    int32 K2Node_Select_Default_1;                                                    // 0x0484 (size: 0x4)
    ESlateVisibility K2Node_Select_Default_2;                                         // 0x0488 (size: 0x1)
    FGameplayTagContainer CallFunc_BPF_GetActivatedCheats_ReturnValue;                // 0x0490 (size: 0x20)
    TArray<FGameplayTag> CallFunc_BreakGameplayTagContainer_GameplayTags;             // 0x04B0 (size: 0x10)
    FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;                         // 0x04C0 (size: 0x40)
    TArray<FFormatArgumentData> K2Node_MakeArray_Array;                               // 0x0500 (size: 0x10)
    ESlateVisibility K2Node_Select_Default_3;                                         // 0x0510 (size: 0x1)
    FText K2Node_Select_Default_4;                                                    // 0x0518 (size: 0x18)
    FText K2Node_Select_Default_5;                                                    // 0x0530 (size: 0x18)

    void SetBlack(bool bpp__Black__pf);
    void PushMessageNotifcation(const FText& bpp__NewParam__pf__const);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void Construct();
    void BPE_OnVisible();
}; // Size: 0x548

#endif
