#ifndef UE4SS_SDK_WBP_ReplayFilterPresetMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayFilterPresetMenuItem_HPP

class UWBP_ReplayFilterPresetMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    uint8 FilterPresetPropertyValue;                                                  // 0x0588 (size: 0x1)
    class UFilterPresetDB* FilterPresetDB;                                            // 0x0590 (size: 0x8)
    FFilterPresetCache FilterPresetCache;                                             // 0x0598 (size: 0x10)
    FWBP_ReplayFilterPresetMenuItem_COnApplyPostProcessDispatcher OnApplyPostProcessDispatcher; // 0x05A8 (size: 0x10)
    void OnApplyPostProcessDispatcher(class UReplayCineCameraComponent* CineCamera, FPostProcessSettings PostProcessSettings, float BlendWeight);

    void SetPropertyValueFromFilterName(const FText& Text);
    void GetCurrentFilterName(FText& Output);
    void GetFilterPreset(FPostProcessSettings& Post Process Settings, bool& PresetValid);
    void BindProperty(class UWBP_ReplaySubMenuWithProperties_C* Owner);
    void Construct();
    void ExecuteUbergraph_WBP_ReplayFilterPresetMenuItem(int32 EntryPoint);
    void OnApplyPostProcessDispatcher__DelegateSignature(class UReplayCineCameraComponent* CineCamera, FPostProcessSettings PostProcessSettings, float BlendWeight);
}; // Size: 0x5B8

#endif
