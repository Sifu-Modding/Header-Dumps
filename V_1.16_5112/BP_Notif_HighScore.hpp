#ifndef UE4SS_SDK_BP_Notif_HighScore_HPP
#define UE4SS_SDK_BP_Notif_HighScore_HPP

class UBP_Notif_HighScore_C : public UInGameNotification
{
    class UWidgetAnimation* ActiveCheatsAnim;
    class UWidgetAnimation* HighscoreAnim;
    class UWidgetAnimation* FadeAnim;
    class UWidgetAnimation* IntroAnim;
    class UBorder* Border_BossScore;
    class UBorder* Border_Highscore;
    class UBorder* Border_LevelScore;
    class UBorder* Border_LevelScore_1;
    class UBorder* Border_LevelScore_2;
    class UVerticalBox* Box_Boss;
    class UVerticalBox* Box_Level;
    class UTextBlock* Cheats;
    class UScaleBox* Global_ScaleBox;
    class UImage* Img_Line1;
    class UImage* Img_Line2;
    class UImage* Img_Line_Cheats;
    class UTextBlock* NotSaved;
    class UTextBlock* Sub_BossScore;
    class UTextBlock* Sub_HighLevelScore;
    class UTextBlock* Sub_LevelScore;
    class UTextBlock* Sub_LevelScore_1;
    class UTextBlock* Sub_LevelScore_2;
    class UTextBlock* Sub_Multiplier;
    class UWidgetSwitcher* Switcher_ScoreText;
    class UTextBlock* Text_BossScore;
    class UTextBlock* Text_Hideout;
    class UTextBlock* Text_LevelScore;
    class UTextBlock* Text_Multiplier;
    bool NewHighscore;
    float ScoreValue;
    TMap<class FString, class FText> LevelToHideoutName;
    FTimerHandle DisplayTimer;
    bool IsDiplayed;
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void WidgetAnimationDynamicEvent();
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void WidgetAnimationDynamicEvent();
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void TimerDynamicDelegate();
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;
    FBP_Notif_HighScore_CTemp_delegate_Variable Temp_delegate_Variable;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    TArray<FAkExternalSourceInfo> Temp_struct_Variable_1;
    FBP_Notif_HighScore_CTemp_delegate_Variable_1 Temp_delegate_Variable_1;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    FBP_Notif_HighScore_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void WidgetAnimationDynamicEvent();
    bool K2Node_Event_IsDesignTime;
    float K2Node_CustomEvent_LevelScore;
    bool K2Node_CustomEvent_IsHighscore;
    class USCLevelSequence* K2Node_Event__inSequence;

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
};

#endif
