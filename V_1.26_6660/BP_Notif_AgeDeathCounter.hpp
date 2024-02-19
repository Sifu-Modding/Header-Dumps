#ifndef UE4SS_SDK_BP_Notif_AgeDeathCounter_HPP
#define UE4SS_SDK_BP_Notif_AgeDeathCounter_HPP

class UBP_Notif_AgeDeathCounter_C : public UInGameNotification
{
    class UWidgetAnimation* AgeBGFlash;                                               // 0x03A8 (size: 0x8)
    class UWidgetAnimation* AgeLostAnim;                                              // 0x03B0 (size: 0x8)
    class UWidgetAnimation* DeathGainAnim;                                            // 0x03B8 (size: 0x8)
    class UBorder* AgeBox;                                                            // 0x03C0 (size: 0x8)
    class UImage* AgeLine;                                                            // 0x03C8 (size: 0x8)
    class UImage* AgeLine_1;                                                          // 0x03D0 (size: 0x8)
    class UTextBlock* AgeTxt;                                                         // 0x03D8 (size: 0x8)
    class UImage* BlinkImg;                                                           // 0x03E0 (size: 0x8)
    class UTextBlock* ChineseOrnamentTxt;                                             // 0x03E8 (size: 0x8)
    class UHorizontalBox* CounterBox;                                                 // 0x03F0 (size: 0x8)
    class UBorder* DeathBkg;                                                          // 0x03F8 (size: 0x8)
    class UOverlay* DeathBox;                                                         // 0x0400 (size: 0x8)
    class UImage* DeathLine;                                                          // 0x0408 (size: 0x8)
    class UTextBlock* NewAgeValue;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* NewDeathValue;                                                  // 0x0418 (size: 0x8)
    class UTextBlock* PreviousAgeValue;                                               // 0x0420 (size: 0x8)
    class UTextBlock* PreviousDeathValue;                                             // 0x0428 (size: 0x8)
    class UImage* SkullImg;                                                           // 0x0430 (size: 0x8)
    bool Is Playing;                                                                  // 0x0438 (size: 0x1)
    bool HideDeathCount;                                                              // 0x0439 (size: 0x1)
    bool HideBorder;                                                                  // 0x043A (size: 0x1)
    bool bWhiteDisplay;                                                               // 0x043B (size: 0x1)
    bool bInDeath;                                                                    // 0x043C (size: 0x1)
    int32 SavedPreviousDeathCounter;                                                  // 0x0440 (size: 0x4)
    int32 SavedCurrentDeathCounter;                                                   // 0x0444 (size: 0x4)
    int32 SavedPreviousAge;                                                           // 0x0448 (size: 0x4)
    int32 SavedCurrentAge;                                                            // 0x044C (size: 0x4)
    bool Temp_bool_Variable;                                                          // 0x0450 (size: 0x1)
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;                               // 0x0458 (size: 0x10)
    FBP_Notif_AgeDeathCounter_CTemp_delegate_Variable Temp_delegate_Variable;         // 0x0468 (size: 0x10)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    TArray<FAkExternalSourceInfo> Temp_struct_Variable_1;                             // 0x0478 (size: 0x10)
    FBP_Notif_AgeDeathCounter_CTemp_delegate_Variable_1 Temp_delegate_Variable_1;     // 0x0488 (size: 0x10)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    int32 CallFunc_UpdateDeath_DeathValue;                                            // 0x0498 (size: 0x4)
    FBP_Notif_AgeDeathCounter_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x049C (size: 0x10)
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    int32 CallFunc_UpdateAge_AgeValue;                                                // 0x04AC (size: 0x4)
    bool K2Node_Event__bPawnOnly;                                                     // 0x04B0 (size: 0x1)
    ECharacterStat K2Node_CustomEvent__type;                                          // 0x04B1 (size: 0x1)
    int32 K2Node_CustomEvent__previousValue;                                          // 0x04B4 (size: 0x4)
    int32 K2Node_CustomEvent__currentValue;                                           // 0x04B8 (size: 0x4)
    int32 CallFunc_UpdateAge_AgeValue_1;                                              // 0x04BC (size: 0x4)
    int32 CallFunc_UpdateDeath_DeathValue_1;                                          // 0x04C0 (size: 0x4)
    bool K2Node_Event_IsDesignTime;                                                   // 0x04C4 (size: 0x1)
    ESlateVisibility Temp_byte_Variable;                                              // 0x04C5 (size: 0x1)
    int32 CallFunc_UpdateAge_AgeValue_2;                                              // 0x04C8 (size: 0x4)
    int32 CallFunc_UpdateDeath_DeathValue_2;                                          // 0x04CC (size: 0x4)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x04D0 (size: 0x1)
    bool Temp_bool_Variable_1;                                                        // 0x04D1 (size: 0x1)
    ESlateVisibility K2Node_Select_Default;                                           // 0x04D2 (size: 0x1)
    bool K2Node_Select_Default_1;                                                     // 0x04D3 (size: 0x1)
    int32 CallFunc_UpdateAge_AgeValue_3;                                              // 0x04D4 (size: 0x4)

    void UpdateDeath(int32& bpp__DeathValue__pf);
    void UpdateAge(bool bpp__PreviousAge__pf, int32& bpp__AgeValue__pf);
    void StatsUpdated(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void Set Menu Display(bool bpp__LocalHideBorder__pf, bool bpp__WhiteDisplay__pf);
    void SequenceEvent__ENTRYPOINTBP_Notif_AgeDeathCounter_1();
    void SequenceEvent__ENTRYPOINTBP_Notif_AgeDeathCounter_0();
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void PostDeathGainUpdate();
    void LaunchDeathGainAnim(int32 bpp__PreviousDeath__pf, int32 bpp__NewDeath__pf);
    void LaunchAgeLostAnim(int32 bpp__PreviousAge__pf, int32 bpp__NewAge__pf);
    void ForceAge(int32 bpp__iAge__pf);
    void ExecuteUbergraph_BP_Notif_AgeDeathCounter_0(int32 bpp__EntryPoint__pf);
    void EndLostAgeAnim();
    void EndGainAnim();
    void DeathCounterDisplay(bool bpp__LocalHideDeathCount__pf);
    void Construct();
    void BPE_BindToDelegates(bool bpp___bPawnOnly__pf);
    void AgeBGFlashAnim(FLinearColor bpp__FlashColor__pf);
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
}; // Size: 0x4D8

#endif
