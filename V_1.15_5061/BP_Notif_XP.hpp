#ifndef UE4SS_SDK_BP_Notif_XP_HPP
#define UE4SS_SDK_BP_Notif_XP_HPP

class UBP_Notif_XP_C : public UInGameNotification
{
    class UWidgetAnimation* InfoPanelAnim;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* GainXpAnim;
    class UWidgetAnimation* FadeIn;
    class UImage* BracketLeft;
    class UImage* BracketLeft_1;
    class UImage* BracketRight;
    class UImage* BracketRight_1;
    class UHorizontalBox* GainXPBox;
    class UBorder* InfoPanelBkg;
    class UBorder* ScoreBox;
    class UTextBlock* ScoreLabel;
    class UTextBlock* ScoreOrnement;
    class UTextBlock* ScoreValue;
    class UTextBlock* TxtGainXP;
    class UTextBlock* XPlabel;
    class UTextBlock* XPOrnement;
    class UTextBlock* XPValue;
    float PercentXP;
    FText TxtDiffXP;
    class UHealthComponent* Health;
    int32 DiffXP;
    int32 CurrentXP;
    FBP_Notif_XP_CXPSkillPanel XPSkillPanel;
    void XPSkillPanel();
    bool InMenu;
    bool SpendContext;
    bool ShowScore;
    bool IsFadeIn;
    bool Printed;
    bool IsCinematicPlaying;
    FBP_Notif_XP_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void WidgetAnimationDynamicEvent();
    FBP_Notif_XP_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void WidgetAnimationDynamicEvent();
    FBP_Notif_XP_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    ECharacterStat K2Node_CustomEvent__type;
    int32 K2Node_CustomEvent__previousValue;
    int32 K2Node_CustomEvent__currentValue;
    bool K2Node_SwitchEnum_CmpSuccess;
    class USCLevelSequence* K2Node_Event__inSequence_1;
    class USCLevelSequence* K2Node_Event__inSequence;
    FString CallFunc_GetCurrentLevelName_ReturnValue;
    bool K2Node_Event_IsDesignTime;

    void XPSkillPanel__DelegateSignature();
    void XPNotifyAnimationEnded();
    void UpdateXP(int32 bpp__PrevXP__pf, int32 bpp__NewXP__pf);
    void UpdateStylePauseMenuDarkMode(bool bpp__LocalScore__pf, bool bpp__IsBlack__pf);
    void UpdateStyle(bool bpp__LocalMenu__pf, bool bpp__LocalSpend__pf, bool bpp__LocalScore__pf);
    void PushMessageNotifcation(const FText& bpp__NewParam__pf__const);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    FLinearColor GetSkillsColor();
    void GetPercentXP(float& bpp__PercentXP__pf);
    void GetCurrentXP();
    void GetCurrentScore();
    FLinearColor GetBarColor();
    void EventOnStatChanged(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void DisplayFadeInOut();
    void Displayed();
    void Construct();
    void BPE_OnVisible();
    void BPE_OnCinematicStarted(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BPE_OnCinematicFinished(const class USCLevelSequence* bpp___inSequence__pf__const);
    void AnimationFinished();
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
};

#endif
