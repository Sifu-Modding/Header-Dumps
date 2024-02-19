#ifndef UE4SS_SDK_BP_HUD_Title_HPP
#define UE4SS_SDK_BP_HUD_Title_HPP

class UBP_HUD_Title_C : public UUserWidget
{
    class UWidgetAnimation* LevelIntroAnim;                                           // 0x0268 (size: 0x8)
    class UWidgetAnimation* OpeningAnim;                                              // 0x0270 (size: 0x8)
    class UBP_Btn_Title_C* BP_Subtitle;                                               // 0x0278 (size: 0x8)
    class UTextBlock* PreTitle;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x0288 (size: 0x8)
    FText TitleTxt;                                                                   // 0x0290 (size: 0x18)
    FText SubtitleTxt;                                                                // 0x02A8 (size: 0x18)

    void SetTexts(FText Location, FText Time, FText Ornament);
    void DisplayLevelTitle();
}; // Size: 0x2C0

#endif
