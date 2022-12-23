#ifndef UE4SS_SDK_WBP_PhotomodeSideInputDisplay_HPP
#define UE4SS_SDK_WBP_PhotomodeSideInputDisplay_HPP

class UWBP_PhotomodeSideInputDisplay_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_80;
    class UVerticalBox* InputTipsBox;
    FText CycleOverlayDefaultText;
    TArray<class UWBP_AvailabilityInputsBase_C*> CategoryInstances;
    TArray<class UUserWidget*> Separators;
    TArray<FReplayInputAvailabilityCategory> CategoriesClasses;
    TSubclassOf<class UWBP_InputAvailabilityDisplaySeparator_C> SeparatorClass;
    FMargin SeparatorPadding;
    bool ShowBlurBG;

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
};

#endif
