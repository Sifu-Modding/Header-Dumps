#ifndef UE4SS_SDK_WBP_ReplayTextKeyStateAvailability_HPP
#define UE4SS_SDK_WBP_ReplayTextKeyStateAvailability_HPP

class UWBP_ReplayTextKeyStateAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CameraModeText;
    class UHorizontalBox* CopyKey;
    class UTextBlock* DotSeparator;
    class UTextBlock* DotSeparator_1;
    class UTextBlock* DotSeparator_2;
    class UHorizontalBox* HorizontalBox_2;
    class UWBP_AvailableInputContainer_C* KeyHoverContainer;
    class UWBP_AvailableInputContainer_C* KeySelectedContainer;
    class UHorizontalBox* MoveKey;
    class UWidgetSwitcher* SwitcherKeyState;
    class UWidgetSwitcher* SwitcherMode;
    class UTextBlock* Text_HoverKey;
    class UTextBlock* Text_HoverKey_1;
    class UTextBlock* Text_HoverKey_2;
    class UTextBlock* Text_NoKey;
    class UTextBlock* Text_SelectedKey;
    class UTextBlock* TitleCopyKey;
    class UTextBlock* TitleMoveKey;
    class UTextBlock* TitleText;
    class UTextBlock* TitleTextOverride;
    class UWBP_SlotToggle_C* Toggle_KeyHover;
    class UWBP_SlotToggle_C* Toggle_KeySelected;

    void SetTextsColor(bool Black);
    void ShowKeyState(bool Show);
    void SetTitle(FText InText);
    void IsKeyHoveredOverride(bool& _bOutAvailable);
    void IsKeySelectedOverride(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayTextKeyStateAvailability(int32 EntryPoint);
};

#endif
