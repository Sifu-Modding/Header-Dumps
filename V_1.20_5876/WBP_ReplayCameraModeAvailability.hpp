#ifndef UE4SS_SDK_WBP_ReplayCameraModeAvailability_HPP
#define UE4SS_SDK_WBP_ReplayCameraModeAvailability_HPP

class UWBP_ReplayCameraModeAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* SwitchToFreeFly;                                        // 0x0340 (size: 0x8)
    class UWBP_AvailableInputContainer_C* SwitchToFreeFlyContainer;                   // 0x0348 (size: 0x8)
    class UBP_Btn_InputTip_C* SwitchToTimeline;                                       // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* SwitchToTimelineContainer;                  // 0x0358 (size: 0x8)
    class UVerticalBox* VerticalBox_31;                                               // 0x0360 (size: 0x8)

    void SwitchToTimelineOverride(bool& _bOutAvailable);
    void SwitchToFreeFlyOverride(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayCameraModeAvailability(int32 EntryPoint);
}; // Size: 0x368

#endif
