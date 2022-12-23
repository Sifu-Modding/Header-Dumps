#ifndef UE4SS_SDK_WBP_ReplayLogoOverlayMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayLogoOverlayMenuItem_HPP

class UWBP_ReplayLogoOverlayMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScreenTextureDB* ScreenTextureDB;

    void UpdateLogoDisplayWithCurrentProperty();
    void IsLogoOverrideActive(bool& Active);
    void OnSetNextValue(ECycleDirection Direction);
    void Construct();
    void ExecuteUbergraph_WBP_ReplayLogoOverlayMenuItem(int32 EntryPoint);
};

#endif
