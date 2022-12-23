#ifndef UE4SS_SDK_BP_HUD_Age_HPP
#define UE4SS_SDK_BP_HUD_Age_HPP

class UBP_HUD_Age_C : public UHUDUserWidget
{
    class UWidgetAnimation* RiseAgeAnim;
    class UWidgetAnimation* ReduceAgeAnim;
    class UTextBlock* AgeDeathTxt;
    class UProgressBar* AgePercent;
    class UTextBlock* ChineseTxt;
    class UImage* LineBottom;
    class UImage* LineBottom_Shadow;
    class UImage* LineTop;
    class UImage* LineTop_Shadow;
    class UTextBlock* NextAgeText;
    class UTextBlock* PreviousAgeText;
    FText PreviousAge;
    FText CurrentAge;
    bool InDeath;
    bool bOverrideColor;
    bool bBlack;
    bool bEstheticOnly;
    bool bAlwaysShow;
    int32 StoredPreviousAge;
    int32 StoredNextAge;
    bool Temp_bool_Variable;
    FBP_HUD_Age_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    bool K2Node_Event_IsDesignTime;
    EGameOptionTypes K2Node_CustomEvent_eGameOptionType;
    bool K2Node_Select_Default;

    void UpdateAge(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void TryToShowAgeResurect();
    void ShowLineShadows();
    void Set Age_Advanced(int32 bpp__LocalPreviousAge__pf, int32 bpp__LocalNextAge__pf);
    void Set Age();
    void SetStoredAge(int32 bpp__StoredPreviousAge__pf, int32 bpp__StoredNextAge__pf);
    void SetColor(bool bpp__LocalBlack__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void OnOptionChanged(EGameOptionTypes bpp__eGameOptionType__pf);
    void GetStoredAge(int32& bpp__StoredPreviousAge__pf, int32& bpp__StoredNextAge__pf);
    void DisplayPreviousAge();
    void DisplayAgeDoors();
    void DisplayAgeChangedFeedback(int32 bpp__LocalPreviousAge__pf, int32 bpp__LocalNextAge__pf);
    void Construct();
    void BindHUD_Visibility();
    void OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes bpp__eGameOptionType__pf);
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
};

#endif
