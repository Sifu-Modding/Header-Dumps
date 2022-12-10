#ifndef UE4SS_SDK_WBP_ReplayFilterPresetMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayFilterPresetMenuItem_HPP

class UWBP_ReplayFilterPresetMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    uint8 FilterPresetPropertyValue;
    class UFilterPresetDB* FilterPresetDB;
    FFilterPresetCache FilterPresetCache;
    FWBP_ReplayFilterPresetMenuItem_COnApplyPostProcessDispatcher OnApplyPostProcessDispatcher;
    void OnApplyPostProcessDispatcher(class UReplayCineCameraComponent* CineCamera, FPostProcessSettings PostProcessSettings, float BlendWeight);

    void SetPropertyValueFromFilterName(const FText& Text);
    void GetCurrentFilterName(FText& Output);
    void GetFilterPreset(FPostProcessSettings& Post Process Settings, bool& PresetValid);
    void BindProperty(class UWBP_ReplaySubMenuWithProperties_C* Owner);
    void Construct();
    void ExecuteUbergraph_WBP_ReplayFilterPresetMenuItem(int32 EntryPoint);
    void OnApplyPostProcessDispatcher__DelegateSignature(class UReplayCineCameraComponent* CineCamera, FPostProcessSettings PostProcessSettings, float BlendWeight);
};

#endif
