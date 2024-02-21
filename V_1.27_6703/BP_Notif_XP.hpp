#ifndef UE4SS_SDK_BP_Notif_XP_HPP
#define UE4SS_SDK_BP_Notif_XP_HPP

class UBP_Notif_XP_C : public UInGameNotification
{
    class UWidgetAnimation* InfoPanelAnim;                                            // 0x03A8 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x03B0 (size: 0x8)
    class UWidgetAnimation* GainXpAnim;                                               // 0x03B8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x03C0 (size: 0x8)
    class UImage* BracketLeft;                                                        // 0x03C8 (size: 0x8)
    class UImage* BracketLeft_1;                                                      // 0x03D0 (size: 0x8)
    class UImage* BracketRight;                                                       // 0x03D8 (size: 0x8)
    class UImage* BracketRight_1;                                                     // 0x03E0 (size: 0x8)
    class UHorizontalBox* GainXPBox;                                                  // 0x03E8 (size: 0x8)
    class UBorder* InfoPanelBkg;                                                      // 0x03F0 (size: 0x8)
    class UBorder* ScoreBox;                                                          // 0x03F8 (size: 0x8)
    class UTextBlock* ScoreLabel;                                                     // 0x0400 (size: 0x8)
    class UTextBlock* ScoreOrnement;                                                  // 0x0408 (size: 0x8)
    class UTextBlock* ScoreValue;                                                     // 0x0410 (size: 0x8)
    class UTextBlock* TxtGainXP;                                                      // 0x0418 (size: 0x8)
    class UTextBlock* XPlabel;                                                        // 0x0420 (size: 0x8)
    class UTextBlock* XPOrnement;                                                     // 0x0428 (size: 0x8)
    class UTextBlock* XPValue;                                                        // 0x0430 (size: 0x8)
    float PercentXP;                                                                  // 0x0438 (size: 0x4)
    FText TxtDiffXP;                                                                  // 0x0440 (size: 0x18)
    class UHealthComponent* Health;                                                   // 0x0458 (size: 0x8)
    int32 DiffXP;                                                                     // 0x0460 (size: 0x4)
    int32 CurrentXP;                                                                  // 0x0464 (size: 0x4)
    FBP_Notif_XP_CXPSkillPanel XPSkillPanel;                                          // 0x0468 (size: 0x10)
    void XPSkillPanel();
    bool InMenu;                                                                      // 0x0478 (size: 0x1)
    bool SpendContext;                                                                // 0x0479 (size: 0x1)
    bool ShowScore;                                                                   // 0x047A (size: 0x1)
    bool IsFadeIn;                                                                    // 0x047B (size: 0x1)
    bool Printed;                                                                     // 0x047C (size: 0x1)
    bool IsCinematicPlaying;                                                          // 0x047D (size: 0x1)
    FBP_Notif_XP_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0480 (size: 0x10)
    void WidgetAnimationDynamicEvent();
    FBP_Notif_XP_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0490 (size: 0x10)
    void WidgetAnimationDynamicEvent();
    FBP_Notif_XP_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x04A0 (size: 0x10)
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    ECharacterStat K2Node_CustomEvent__type;                                          // 0x04B0 (size: 0x1)
    int32 K2Node_CustomEvent__previousValue;                                          // 0x04B4 (size: 0x4)
    int32 K2Node_CustomEvent__currentValue;                                           // 0x04B8 (size: 0x4)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x04BC (size: 0x1)
    class USCLevelSequence* K2Node_Event__inSequence_1;                               // 0x04C0 (size: 0x8)
    class USCLevelSequence* K2Node_Event__inSequence;                                 // 0x04C8 (size: 0x8)
    FString CallFunc_GetCurrentLevelName_ReturnValue;                                 // 0x04D0 (size: 0x10)
    bool K2Node_Event_IsDesignTime;                                                   // 0x04E0 (size: 0x1)

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
}; // Size: 0x4E8

#endif
