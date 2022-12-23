#ifndef UE4SS_SDK_WBP_ReplayCameraModeAvailability_HPP
#define UE4SS_SDK_WBP_ReplayCameraModeAvailability_HPP

class UWBP_ReplayCameraModeAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_InputTip_C* SwitchToFreeFly;
    class UWBP_AvailableInputContainer_C* SwitchToFreeFlyContainer;
    class UBP_Btn_InputTip_C* SwitchToTimeline;
    class UWBP_AvailableInputContainer_C* SwitchToTimelineContainer;
    class UVerticalBox* VerticalBox_31;

    void SwitchToTimelineOverride(bool& _bOutAvailable);
    void SwitchToFreeFlyOverride(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayCameraModeAvailability(int32 EntryPoint);
};

#endif
