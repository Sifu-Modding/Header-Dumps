#ifndef UE4SS_SDK_WBP_PhotomodeSideInputDisplay_HPP
#define UE4SS_SDK_WBP_PhotomodeSideInputDisplay_HPP

class UWBP_PhotomodeSideInputDisplay_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_80;                                         // 0x0318 (size: 0x8)
    class UVerticalBox* InputTipsBox;                                                 // 0x0320 (size: 0x8)
    FText CycleOverlayDefaultText;                                                    // 0x0328 (size: 0x18)
    TArray<class UWBP_AvailabilityInputsBase_C*> CategoryInstances;                   // 0x0340 (size: 0x10)
    TArray<class UUserWidget*> Separators;                                            // 0x0350 (size: 0x10)
    TArray<FReplayInputAvailabilityCategory> CategoriesClasses;                       // 0x0360 (size: 0x10)
    TSubclassOf<class UWBP_InputAvailabilityDisplaySeparator_C> SeparatorClass;       // 0x0370 (size: 0x8)
    FMargin SeparatorPadding;                                                         // 0x0378 (size: 0x10)
    bool ShowBlurBG;                                                                  // 0x0388 (size: 0x1)

    void DestroyWidgets();
    void ForceInputDisplayRefresh();
    void GetGenericInput(bool& IsValid, class UWBP_GenericInputsAvailability_C*& GenericInput);
    void GetCategoryInstance(UClass* Class, class UWBP_AvailabilityInputsBase_C*& Instance, bool& IsValid);
    void CreateWidgets(bool IsPreview);
    void GetParentMenu(class UReplayMenuWidget*& Menu);
    void GetIsMenuNotStackedAvailability(bool& _bOutAvailable);
    void GetIsMenuStackedAvailability(bool& _bOutAvailable);
    void GetBrowseInputAvailability(bool& _bOutAvailable);
    void UpdateSeperatorsVisibility();
    void SetOverlayInfo(FText Info);
    void OnOverlayChanged(const class UReplayUIModeUserWidget* _currentOverlay, const class UReplayUIModeUserWidget* _nextOverlay);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_WBP_PhotomodeSideInputDisplay(int32 EntryPoint);
}; // Size: 0x389

#endif
