#ifndef UE4SS_SDK_BP_Arena_Challenge_Recap_HPP
#define UE4SS_SDK_BP_Arena_Challenge_Recap_HPP

class UBP_Arena_Challenge_Recap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* 0-ScoreText;                                                    // 0x0278 (size: 0x8)
    class UTextBlock* 1-NoScoreText;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* BestScoreText;                                                  // 0x0288 (size: 0x8)
    class UBorder* BorderTitle;                                                       // 0x0290 (size: 0x8)
    class UBP_List_Medium_C* BP_List_Modifiers;                                       // 0x0298 (size: 0x8)
    class UTextBlock* Challenge_Title;                                                // 0x02A0 (size: 0x8)
    class UImage* IconModifiers;                                                      // 0x02A8 (size: 0x8)
    class UImage* Img_BgBest;                                                         // 0x02B0 (size: 0x8)
    class UImage* Img_BgStars;                                                        // 0x02B8 (size: 0x8)
    class USizeBox* ModifiersBox;                                                     // 0x02C0 (size: 0x8)
    class UOverlay* OverlayModifiers_1;                                               // 0x02C8 (size: 0x8)
    class UHorizontalBox* ScoreBox;                                                   // 0x02D0 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x02D8 (size: 0x8)
    class UCheckBox* StarIcon_1;                                                      // 0x02E0 (size: 0x8)
    class UCheckBox* StarIcon_2;                                                      // 0x02E8 (size: 0x8)
    class UCheckBox* StarIcon_3;                                                      // 0x02F0 (size: 0x8)
    class UTextBlock* StarText1;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* StarText2;                                                      // 0x0300 (size: 0x8)
    class UTextBlock* StarText3;                                                      // 0x0308 (size: 0x8)
    class UWidgetSwitcher* SwitcherModifiers;                                         // 0x0310 (size: 0x8)
    class UWidgetSwitcher* SwitcherScore;                                             // 0x0318 (size: 0x8)
    class UTextBlock* TitleModifiers;                                                 // 0x0320 (size: 0x8)
    class UTextBlock* TitleModifiers_1;                                               // 0x0328 (size: 0x8)
    bool ShowTitleSection;                                                            // 0x0330 (size: 0x1)
    TArray<class UTextBlock*> StarsTextes;                                            // 0x0338 (size: 0x10)
    TArray<class UCheckBox*> Stars;                                                   // 0x0348 (size: 0x10)

    void SetStarDarkModeColor(class UCheckBox* StarCheckbox, bool Black);
    void SetupDarkMode(bool IsDarkMode);
    void SetupScreen(class UArenaChallengeDescription* CurrentChallenge);
    void Construct();
    void CustomEvent_0();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Arena_Challenge_Recap(int32 EntryPoint);
}; // Size: 0x358

#endif
