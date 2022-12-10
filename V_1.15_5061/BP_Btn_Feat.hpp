#ifndef UE4SS_SDK_BP_Btn_Feat_HPP
#define UE4SS_SDK_BP_Btn_Feat_HPP

class UBP_Btn_Feat_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UImage* BG_Difficulty;
    class UImage* BracketRight;
    class UImage* BracketRight_1;
    class UImage* Brush_Over;
    class UImage* Brush_Over_1;
    class UImage* Brush_Over_2;
    class UPerPlatformImage* CheatIcon;
    class UTextBlock* CheatsAllowe;
    class UCanvasPanel* CoinAmount;
    class UCanvasPanel* ContentPanel;
    class UPerPlatformImage* CurrencyIcon;
    class UTextBlock* CurrencyValue;
    class UTextBlock* DifficultyRequierement;
    class UTextBlock* DotSeparator;
    class UTextBlock* FeatDescription;
    class UTextBlock* FeatTitle;
    class UTextBlock* ModifeirsAllowedOnly;
    class UTextBlock* ModifeirsAllowedOnly_1;
    class UTextBlock* ModifeirsAllowedOnly_2;
    class UTextBlock* ModifeirsAllowedOnly_3;
    class UPerPlatformImage* Modifiericon;
    class UPerPlatformImage* Modifiericon_1;
    class UPerPlatformImage* Modifiericon_2;
    class UPerPlatformImage* Modifiericon_3;
    class UWidgetSwitcher* ModifiersAllowedCondition;
    class UCanvasPanel* Outfit;
    class UPerPlatformImage* OutfitIcon;
    class UTextBlock* OutfitText;
    class UOverlay* OverlayDifficulty;
    class UOverlay* OverlayModifiers;
    class UCanvasPanel* UNKNOWN;
    class UTextBlock* UnknownText;
    class UTextBlock* UnkownIcon;
    class UWidgetSwitcher* WidgetSwitcher_0;
    bool Enabled;
    class UAkAudioEvent* OnFocusEvent;
    class UAkAudioEvent* OnClickEvent;
    bool IsWhite;
    FGameplayTag Tag;
    FText Title;
    FText Description;
    TEnumAsByte<BP_GoalsRewardTypes> RewardType;
    FText OutfitName;
    FGameplayTag Outfit Tag;
    int32 Cost;
    bool IsCompleted;
    FLinearColor GoldColor;
    bool IsDifficultyCompletable;
    bool IsModifierCompletable;
    bool bGenerated;

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
};

#endif
