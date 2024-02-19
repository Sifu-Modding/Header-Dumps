#ifndef UE4SS_SDK_BP_Notif_Currency_HPP
#define UE4SS_SDK_BP_Notif_Currency_HPP

class UBP_Notif_Currency_C : public UInGameNotification
{
    class UWidgetAnimation* AddCheatCurrency;                                         // 0x03A8 (size: 0x8)
    class UWidgetAnimation* InfoPanelAnim;                                            // 0x03B0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x03B8 (size: 0x8)
    class UWidgetAnimation* GainXpAnim;                                               // 0x03C0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x03C8 (size: 0x8)
    class UImage* AddCurrencyEffect;                                                  // 0x03D0 (size: 0x8)
    class UImage* CurrencyIcon;                                                       // 0x03D8 (size: 0x8)
    class UTextBlock* CurrencyValue;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* CurrencyValueEffect;                                            // 0x03E8 (size: 0x8)
    class UWidgetSwitcher* IconSwitcher;                                              // 0x03F0 (size: 0x8)
    class UBorder* InfoPanelBkg;                                                      // 0x03F8 (size: 0x8)
    class UImage* Line;                                                               // 0x0400 (size: 0x8)
    class UTextBlock* XPText;                                                         // 0x0408 (size: 0x8)
    class UHealthComponent* Health;                                                   // 0x0410 (size: 0x8)
    FBP_Notif_Currency_CXPSkillPanel XPSkillPanel;                                    // 0x0418 (size: 0x10)
    void XPSkillPanel();
    bool IsFadeIn;                                                                    // 0x0428 (size: 0x1)
    bool Printed;                                                                     // 0x0429 (size: 0x1)
    bool IsCinematicPlaying;                                                          // 0x042A (size: 0x1)
    FLinearColor CurrencyColor;                                                       // 0x042C (size: 0x10)
    UI_CurrencyTypes CurrencyType;                                                    // 0x043C (size: 0x1)
    bool BackgroundOn;                                                                // 0x043D (size: 0x1)
    bool LineOn;                                                                      // 0x043E (size: 0x1)
    FBP_Notif_Currency_CAnimFinished AnimFinished;                                    // 0x0440 (size: 0x10)
    void AnimFinished();
    bool K2Node_Event_IsDesignTime;                                                   // 0x0450 (size: 0x1)

    void XPSkillPanel__DelegateSignature();
    void UpdateValueWithCurrentGoalsCurrency();
    void UpdateStylePauseMenuDarkMode(bool bpp__IsBlack__pf);
    void UpdateStyle(FLinearColor bpp__CurrencyColor__pf, bool bpp__Line__pf, bool bpp__Background__pf);
    void StartCurrencyAnimation();
    void SetupSoftDisplay(UI_CurrencyTypes bpp__CurrencyType__pf, int32 bpp__CurrencyValue__pf, bool bpp__Line__pf, bool bpp__Background__pf);
    void SetupArenaDisplay(bool bpp__Background__pf, bool bpp__Black__pf);
    void PushMessageNotifcation(const FText& bpp__NewParam__pf__const);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void OnCurrencyAnimationFinished();
    FLinearColor GetSkillsColor();
    void DisplayFadeInOut();
    void Construct();
    void BPE_OnVisible();
    void AnimFinished__DelegateSignature();
}; // Size: 0x458

#endif
