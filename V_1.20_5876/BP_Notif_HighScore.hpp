#ifndef UE4SS_SDK_BP_Notif_HighScore_HPP
#define UE4SS_SDK_BP_Notif_HighScore_HPP

class UBP_Notif_HighScore_C : public UInGameNotification
{
    class UWidgetAnimation* ActiveCheatsAnim;                                         // 0x03A8 (size: 0x8)
    class UWidgetAnimation* HighscoreAnim;                                            // 0x03B0 (size: 0x8)
    class UWidgetAnimation* FadeAnim;                                                 // 0x03B8 (size: 0x8)
    class UWidgetAnimation* IntroAnim;                                                // 0x03C0 (size: 0x8)
    class UBorder* Border_BossScore;                                                  // 0x03C8 (size: 0x8)
    class UBorder* Border_Highscore;                                                  // 0x03D0 (size: 0x8)
    class UBorder* Border_LevelScore;                                                 // 0x03D8 (size: 0x8)
    class UBorder* Border_LevelScore_1;                                               // 0x03E0 (size: 0x8)
    class UBorder* Border_LevelScore_2;                                               // 0x03E8 (size: 0x8)
    class UVerticalBox* Box_Boss;                                                     // 0x03F0 (size: 0x8)
    class UVerticalBox* Box_Level;                                                    // 0x03F8 (size: 0x8)
    class UTextBlock* Cheats;                                                         // 0x0400 (size: 0x8)
    class UScaleBox* Global_ScaleBox;                                                 // 0x0408 (size: 0x8)
    class UImage* Img_Line1;                                                          // 0x0410 (size: 0x8)
    class UImage* Img_Line2;                                                          // 0x0418 (size: 0x8)
    class UImage* Img_Line_Cheats;                                                    // 0x0420 (size: 0x8)
    class UTextBlock* NotSaved;                                                       // 0x0428 (size: 0x8)
    class UTextBlock* Sub_BossScore;                                                  // 0x0430 (size: 0x8)
    class UTextBlock* Sub_HighLevelScore;                                             // 0x0438 (size: 0x8)
    class UTextBlock* Sub_LevelScore;                                                 // 0x0440 (size: 0x8)
    class UTextBlock* Sub_LevelScore_1;                                               // 0x0448 (size: 0x8)
    class UTextBlock* Sub_LevelScore_2;                                               // 0x0450 (size: 0x8)
    class UTextBlock* Sub_Multiplier;                                                 // 0x0458 (size: 0x8)
    class UWidgetSwitcher* Switcher_ScoreText;                                        // 0x0460 (size: 0x8)
    class UTextBlock* Text_BossScore;                                                 // 0x0468 (size: 0x8)
    class UTextBlock* Text_Hideout;                                                   // 0x0470 (size: 0x8)
    class UTextBlock* Text_LevelScore;                                                // 0x0478 (size: 0x8)
    class UTextBlock* Text_Multiplier;                                                // 0x0480 (size: 0x8)
    bool NewHighscore;                                                                // 0x0488 (size: 0x1)
    float ScoreValue;                                                                 // 0x048C (size: 0x4)
    TMap<class FString, class FText> LevelToHideoutName;                              // 0x0490 (size: 0x50)
    FTimerHandle DisplayTimer;                                                        // 0x04E0 (size: 0x8)
    bool IsDiplayed;                                                                  // 0x04E8 (size: 0x1)
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x04EC (size: 0x10)
    void WidgetAnimationDynamicEvent();
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x04FC (size: 0x10)
    void WidgetAnimationDynamicEvent();
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x050C (size: 0x10)
    void TimerDynamicDelegate();
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;                               // 0x0520 (size: 0x10)
    FBP_Notif_HighScore_CTemp_delegate_Variable Temp_delegate_Variable;               // 0x0530 (size: 0x10)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    TArray<FAkExternalSourceInfo> Temp_struct_Variable_1;                             // 0x0540 (size: 0x10)
    FBP_Notif_HighScore_CTemp_delegate_Variable_1 Temp_delegate_Variable_1;           // 0x0550 (size: 0x10)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x0560 (size: 0x10)
    void WidgetAnimationDynamicEvent();
    bool K2Node_Event_IsDesignTime;                                                   // 0x0570 (size: 0x1)
    float K2Node_CustomEvent_LevelScore;                                              // 0x0574 (size: 0x4)
    bool K2Node_CustomEvent_IsHighscore;                                              // 0x0578 (size: 0x1)
    class USCLevelSequence* K2Node_Event__inSequence;                                 // 0x0580 (size: 0x8)

    void SetValues(float bpp__ScoreValue__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void OnFadeFinished();
    void LevelScoreDisplay(bool bpp__IsHighScore__pf);
    void IntroFinished();
    void DisplayRecap(float bpp__LevelScore__pf, bool bpp__IsHighScore__pf);
    void DisplayFinished();
    void Construct();
    void BPE_OnCinematicStarted(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BossScoreDisplay(bool bpp__IsHighScore__pf);
}; // Size: 0x588

#endif
