#ifndef UE4SS_SDK_BP_Notif_AgeDeathCounter_HPP
#define UE4SS_SDK_BP_Notif_AgeDeathCounter_HPP

class UBP_Notif_AgeDeathCounter_C : public UInGameNotification
{
    class UWidgetAnimation* AgeLostAnim;
    class UWidgetAnimation* DeathGainAnim;
    class UBorder* AgeBox;
    class UImage* AgeLine;
    class UImage* AgeLine_1;
    class UTextBlock* AgeTxt;
    class UImage* BlinkImg;
    class UTextBlock* ChineseOrnamentTxt;
    class UHorizontalBox* CounterBox;
    class UBorder* DeathBkg;
    class UOverlay* DeathBox;
    class UImage* DeathLine;
    class UTextBlock* NewAgeValue;
    class UTextBlock* NewDeathValue;
    class UTextBlock* PreviousAgeValue;
    class UTextBlock* PreviousDeathValue;
    class UImage* SkullImg;
    bool Is Playing;
    bool HideDeathCount;
    bool HideBorder;
    bool bWhiteDisplay;
    bool bInDeath;
    int32 SavedPreviousDeathCounter;
    int32 SavedCurrentDeathCounter;
    int32 SavedPreviousAge;
    int32 SavedCurrentAge;
    FBP_Notif_AgeDeathCounter_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    int32 CallFunc_UpdateDeath_DeathValue;
    int32 CallFunc_UpdateAge_AgeValue;
    bool K2Node_Event__bPawnOnly;
    ECharacterStat K2Node_CustomEvent__type;
    int32 K2Node_CustomEvent__previousValue;
    int32 K2Node_CustomEvent__currentValue;
    FBP_Notif_AgeDeathCounter_CTemp_delegate_Variable Temp_delegate_Variable;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;
    int32 CallFunc_UpdateAge_AgeValue_1;
    int32 CallFunc_UpdateDeath_DeathValue_1;
    bool K2Node_Event_IsDesignTime;
    int32 CallFunc_UpdateAge_AgeValue_2;
    int32 CallFunc_UpdateDeath_DeathValue_2;
    ESlateVisibility Temp_byte_Variable;
    ESlateVisibility Temp_byte_Variable_1;
    bool Temp_bool_Variable;
    ESlateVisibility K2Node_Select_Default;

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
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
};

#endif
