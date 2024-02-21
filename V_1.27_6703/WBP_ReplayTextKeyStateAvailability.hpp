#ifndef UE4SS_SDK_WBP_ReplayTextKeyStateAvailability_HPP
#define UE4SS_SDK_WBP_ReplayTextKeyStateAvailability_HPP

class UWBP_ReplayTextKeyStateAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UTextBlock* CameraModeText;                                                 // 0x0340 (size: 0x8)
    class UHorizontalBox* CopyKey;                                                    // 0x0348 (size: 0x8)
    class UTextBlock* DotSeparator;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* DotSeparator_1;                                                 // 0x0358 (size: 0x8)
    class UTextBlock* DotSeparator_2;                                                 // 0x0360 (size: 0x8)
    class UHorizontalBox* HorizontalBox_2;                                            // 0x0368 (size: 0x8)
    class UWBP_AvailableInputContainer_C* KeyHoverContainer;                          // 0x0370 (size: 0x8)
    class UWBP_AvailableInputContainer_C* KeySelectedContainer;                       // 0x0378 (size: 0x8)
    class UHorizontalBox* MoveKey;                                                    // 0x0380 (size: 0x8)
    class UWidgetSwitcher* SwitcherKeyState;                                          // 0x0388 (size: 0x8)
    class UWidgetSwitcher* SwitcherMode;                                              // 0x0390 (size: 0x8)
    class UTextBlock* Text_HoverKey;                                                  // 0x0398 (size: 0x8)
    class UTextBlock* Text_HoverKey_1;                                                // 0x03A0 (size: 0x8)
    class UTextBlock* Text_HoverKey_2;                                                // 0x03A8 (size: 0x8)
    class UTextBlock* Text_NoKey;                                                     // 0x03B0 (size: 0x8)
    class UTextBlock* Text_SelectedKey;                                               // 0x03B8 (size: 0x8)
    class UTextBlock* TitleCopyKey;                                                   // 0x03C0 (size: 0x8)
    class UTextBlock* TitleMoveKey;                                                   // 0x03C8 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x03D0 (size: 0x8)
    class UTextBlock* TitleTextOverride;                                              // 0x03D8 (size: 0x8)
    class UWBP_SlotToggle_C* Toggle_KeyHover;                                         // 0x03E0 (size: 0x8)
    class UWBP_SlotToggle_C* Toggle_KeySelected;                                      // 0x03E8 (size: 0x8)

    void SetTextsColor(bool Black);
    void ShowKeyState(bool Show);
    void SetTitle(FText InText);
    void IsKeyHoveredOverride(bool& _bOutAvailable);
    void IsKeySelectedOverride(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayTextKeyStateAvailability(int32 EntryPoint);
}; // Size: 0x3F0

#endif
