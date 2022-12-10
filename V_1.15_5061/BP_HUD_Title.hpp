#ifndef UE4SS_SDK_BP_HUD_Title_HPP
#define UE4SS_SDK_BP_HUD_Title_HPP

class UBP_HUD_Title_C : public UUserWidget
{
    class UWidgetAnimation* LevelIntroAnim;
    class UWidgetAnimation* OpeningAnim;
    class UBP_Btn_Title_C* BP_Subtitle;
    class UTextBlock* PreTitle;
    class UTextBlock* Title;
    FText TitleTxt;
    FText SubtitleTxt;

    void SetTexts(FText Location, FText Time, FText Ornament);
    void DisplayLevelTitle();
};

#endif
