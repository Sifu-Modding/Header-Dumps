#ifndef UE4SS_SDK_BP_HUD_Age_HPP
#define UE4SS_SDK_BP_HUD_Age_HPP

class UBP_HUD_Age_C : public UHUDUserWidget
{
    class UWidgetAnimation* RiseAgeAnim;                                              // 0x0398 (size: 0x8)
    class UWidgetAnimation* ReduceAgeAnim;                                            // 0x03A0 (size: 0x8)
    class UTextBlock* AgeDeathTxt;                                                    // 0x03A8 (size: 0x8)
    class UProgressBar* AgePercent;                                                   // 0x03B0 (size: 0x8)
    class UTextBlock* ChineseTxt;                                                     // 0x03B8 (size: 0x8)
    class UImage* LineBottom;                                                         // 0x03C0 (size: 0x8)
    class UImage* LineBottom_Shadow;                                                  // 0x03C8 (size: 0x8)
    class UImage* LineTop;                                                            // 0x03D0 (size: 0x8)
    class UImage* LineTop_Shadow;                                                     // 0x03D8 (size: 0x8)
    class UTextBlock* NextAgeText;                                                    // 0x03E0 (size: 0x8)
    class UTextBlock* PreviousAgeText;                                                // 0x03E8 (size: 0x8)
    FText PreviousAge;                                                                // 0x03F0 (size: 0x18)
    FText CurrentAge;                                                                 // 0x0408 (size: 0x18)
    bool InDeath;                                                                     // 0x0420 (size: 0x1)
    bool bOverrideColor;                                                              // 0x0421 (size: 0x1)
    bool bBlack;                                                                      // 0x0422 (size: 0x1)
    bool bEstheticOnly;                                                               // 0x0423 (size: 0x1)
    bool bAlwaysShow;                                                                 // 0x0424 (size: 0x1)
    int32 StoredPreviousAge;                                                          // 0x0428 (size: 0x4)
    int32 StoredNextAge;                                                              // 0x042C (size: 0x4)
    bool Temp_bool_Variable;                                                          // 0x0430 (size: 0x1)
    FBP_HUD_Age_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0434 (size: 0x10)
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    bool K2Node_Event_IsDesignTime;                                                   // 0x0444 (size: 0x1)
    EGameOptionTypes K2Node_CustomEvent_eGameOptionType;                              // 0x0445 (size: 0x1)
    bool K2Node_Select_Default;                                                       // 0x0446 (size: 0x1)

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
}; // Size: 0x448

#endif
