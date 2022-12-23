#ifndef UE4SS_SDK_BP_Notif_Currency_HPP
#define UE4SS_SDK_BP_Notif_Currency_HPP

class UBP_Notif_Currency_C : public UInGameNotification
{
    class UWidgetAnimation* InfoPanelAnim;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* GainXpAnim;
    class UWidgetAnimation* FadeIn;
    class UImage* CurrencyIcon;
    class UTextBlock* CurrencyValue;
    class UWidgetSwitcher* IconSwitcher;
    class UBorder* InfoPanelBkg;
    class UImage* Line;
    class UTextBlock* XPText;
    class UHealthComponent* Health;
    FBP_Notif_Currency_CXPSkillPanel XPSkillPanel;
    void XPSkillPanel();
    bool IsFadeIn;
    bool Printed;
    bool IsCinematicPlaying;
    FLinearColor CurrencyColor;
    UI_CurrencyTypes CurrencyType;
    bool BackgroundOn;
    bool LineOn;
    bool K2Node_Event_IsDesignTime;

    void XPSkillPanel__DelegateSignature();
    void UpdateValueWithCurrentGoalsCurrency();
    void UpdateStylePauseMenuDarkMode(bool bpp__IsBlack__pf);
    void UpdateStyle(FLinearColor bpp__CurrencyColor__pf, bool bpp__Line__pf, bool bpp__Background__pf);
    void SetupSoftDisplay(UI_CurrencyTypes bpp__CurrencyType__pf, int32 bpp__CurrencyValue__pf, bool bpp__Line__pf, bool bpp__Background__pf);
    void PushMessageNotifcation(const FText& bpp__NewParam__pf__const);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    FLinearColor GetSkillsColor();
    void DisplayFadeInOut();
    void Construct();
    void BPE_OnVisible();
};

#endif
