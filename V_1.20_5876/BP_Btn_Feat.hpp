#ifndef UE4SS_SDK_BP_Btn_Feat_HPP
#define UE4SS_SDK_BP_Btn_Feat_HPP

class UBP_Btn_Feat_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UImage* BG_Difficulty;                                                      // 0x0830 (size: 0x8)
    class UImage* BracketRight;                                                       // 0x0838 (size: 0x8)
    class UImage* BracketRight_1;                                                     // 0x0840 (size: 0x8)
    class UImage* Brush_Over;                                                         // 0x0848 (size: 0x8)
    class UImage* Brush_Over_1;                                                       // 0x0850 (size: 0x8)
    class UImage* Brush_Over_2;                                                       // 0x0858 (size: 0x8)
    class UPerPlatformImage* CheatIcon;                                               // 0x0860 (size: 0x8)
    class UTextBlock* CheatsAllowe;                                                   // 0x0868 (size: 0x8)
    class UCanvasPanel* CoinAmount;                                                   // 0x0870 (size: 0x8)
    class UCanvasPanel* ContentPanel;                                                 // 0x0878 (size: 0x8)
    class UPerPlatformImage* CurrencyIcon;                                            // 0x0880 (size: 0x8)
    class UTextBlock* CurrencyValue;                                                  // 0x0888 (size: 0x8)
    class UTextBlock* DifficultyRequierement;                                         // 0x0890 (size: 0x8)
    class UTextBlock* DotSeparator;                                                   // 0x0898 (size: 0x8)
    class UTextBlock* FeatDescription;                                                // 0x08A0 (size: 0x8)
    class UTextBlock* FeatTitle;                                                      // 0x08A8 (size: 0x8)
    class UTextBlock* ModifeirsAllowedOnly;                                           // 0x08B0 (size: 0x8)
    class UTextBlock* ModifeirsAllowedOnly_1;                                         // 0x08B8 (size: 0x8)
    class UTextBlock* ModifeirsAllowedOnly_2;                                         // 0x08C0 (size: 0x8)
    class UTextBlock* ModifeirsAllowedOnly_3;                                         // 0x08C8 (size: 0x8)
    class UPerPlatformImage* Modifiericon;                                            // 0x08D0 (size: 0x8)
    class UPerPlatformImage* Modifiericon_1;                                          // 0x08D8 (size: 0x8)
    class UPerPlatformImage* Modifiericon_2;                                          // 0x08E0 (size: 0x8)
    class UPerPlatformImage* Modifiericon_3;                                          // 0x08E8 (size: 0x8)
    class UWidgetSwitcher* ModifiersAllowedCondition;                                 // 0x08F0 (size: 0x8)
    class UCanvasPanel* Outfit;                                                       // 0x08F8 (size: 0x8)
    class UPerPlatformImage* OutfitIcon;                                              // 0x0900 (size: 0x8)
    class UTextBlock* OutfitText;                                                     // 0x0908 (size: 0x8)
    class UOverlay* OverlayDifficulty;                                                // 0x0910 (size: 0x8)
    class UOverlay* OverlayModifiers;                                                 // 0x0918 (size: 0x8)
    class UCanvasPanel* UNKNOWN;                                                      // 0x0920 (size: 0x8)
    class UTextBlock* UnknownText;                                                    // 0x0928 (size: 0x8)
    class UTextBlock* UnkownIcon;                                                     // 0x0930 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0938 (size: 0x8)
    bool Enabled;                                                                     // 0x0940 (size: 0x1)
    class UAkAudioEvent* OnFocusEvent;                                                // 0x0948 (size: 0x8)
    class UAkAudioEvent* OnClickEvent;                                                // 0x0950 (size: 0x8)
    bool IsWhite;                                                                     // 0x0958 (size: 0x1)
    FGameplayTag Tag;                                                                 // 0x095C (size: 0x8)
    FText Title;                                                                      // 0x0968 (size: 0x18)
    FText Description;                                                                // 0x0980 (size: 0x18)
    TEnumAsByte<BP_GoalsRewardTypes> RewardType;                                      // 0x0998 (size: 0x1)
    FText OutfitName;                                                                 // 0x09A0 (size: 0x18)
    FGameplayTag Outfit Tag;                                                          // 0x09B8 (size: 0x8)
    int32 Cost;                                                                       // 0x09C0 (size: 0x4)
    bool IsCompleted;                                                                 // 0x09C4 (size: 0x1)
    FLinearColor GoldColor;                                                           // 0x09C8 (size: 0x10)
    bool IsDifficultyCompletable;                                                     // 0x09D8 (size: 0x1)
    bool IsModifierCompletable;                                                       // 0x09D9 (size: 0x1)
    bool bGenerated;                                                                  // 0x09DA (size: 0x1)

    void SetupOutfit(FText GoalName, FText GoalDescription, FGameplayTag OutfitUnlockTag, FText OutfitName, class UWGAchievementUnlockCondition* UnlockCondition);
    void SetIsCompletable(class UWGAchievementUnlockCondition* UnlockCondition);
    void AnyCheatActivated(bool& CheatActivated, bool& ModifierActivated);
    void UpdateStrikeBrush(bool Focused);
    void SetCompletionState(bool Completed);
    void SetIsWhite(bool White);
    void SetFocusBrush(bool OnFocus);
    void SetupFeat(class UWGAchievementUnlockCondition* UnlockCondition, bool bGenerated);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetEnabled(bool Enabled);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BPE_OnSynchronizeProperties();
    void Construct();
    void BPE_OnClicked_1();
    void ExecuteUbergraph_BP_Btn_Feat(int32 EntryPoint);
}; // Size: 0x9DB

#endif
