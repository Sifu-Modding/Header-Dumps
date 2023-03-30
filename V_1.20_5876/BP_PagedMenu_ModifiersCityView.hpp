#ifndef UE4SS_SDK_BP_PagedMenu_ModifiersCityView_HPP
#define UE4SS_SDK_BP_PagedMenu_ModifiersCityView_HPP

class UBP_PagedMenu_ModifiersCityView_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* FadeDescription;                                          // 0x03E0 (size: 0x8)
    class UImage* BlackTransparentBG;                                                 // 0x03E8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x03F0 (size: 0x8)
    class UBP_ActiveModifierBox_C* BP_ActiveModifierBox;                              // 0x03F8 (size: 0x8)
    class UBP_HorizontalPagedMenu_C* BP_HorizontalPagedMenu_C_0;                      // 0x0400 (size: 0x8)
    class UTextBlock* BtnText_3;                                                      // 0x0408 (size: 0x8)
    class URichTextBlock* CheatDescription;                                           // 0x0410 (size: 0x8)
    class URichTextBlock* CheatDescriptionTitle;                                      // 0x0418 (size: 0x8)
    class USizeBox* DescriptionSizeBox;                                               // 0x0420 (size: 0x8)
    class UWidgetSwitcher* DescriptionSwitcher;                                       // 0x0428 (size: 0x8)
    class UPerPlatformImage* Icon;                                                    // 0x0430 (size: 0x8)
    class UPerPlatformImage* Icon_1;                                                  // 0x0438 (size: 0x8)
    class UPerPlatformImage* Icon_2;                                                  // 0x0440 (size: 0x8)
    class UImage* Line;                                                               // 0x0448 (size: 0x8)
    class URichTextBlock* ModifierDescription_1;                                      // 0x0450 (size: 0x8)
    class URichTextBlock* ModifierDescriptionTitle;                                   // 0x0458 (size: 0x8)
    class UCanvasPanel* PageCanvas;                                                   // 0x0460 (size: 0x8)
    class UBP_Notif_Currency_C* Widget_CurrencyTotal;                                 // 0x0468 (size: 0x8)
    bool bPlayEnterSound;                                                             // 0x0470 (size: 0x1)

    void GetTabCount(int32& ChildrenCount);
    void OnPopupShown(bool Visible);
    void CheatUpdated();
    void UpdateDescription();
    void SetDarkMode(bool DarkMode);
    void OnDarkModeChange(EGameOptionTypes eGameOptionType);
    bool BPE_OnMenuButtonPressed();
    bool BPE_OnBackButtonPressed();
    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void OnCurrentMenuChanged_Event(EMenuEnum OldMenu, EMenuEnum NewMenu);
    void BndEvt__BP_HorizontalPagedMenu_C_0_K2Node_ComponentBoundEvent_1_OnAllMenuClosed__DelegateSignature();
    void HandleMultipleMenuRequest(FString InArguments, const TArray<FMenuRequestStructure>& InRequestList);
    void Destruct();
    void OnCheatUpdated();
    void ExecuteUbergraph_BP_PagedMenu_ModifiersCityView(int32 EntryPoint);
}; // Size: 0x471

#endif
