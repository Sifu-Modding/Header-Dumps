#ifndef UE4SS_SDK_WBP_ReplayFreecamPositionUpdate_Availability_HPP
#define UE4SS_SDK_WBP_ReplayFreecamPositionUpdate_Availability_HPP

class UWBP_ReplayFreecamPositionUpdate_Availability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UOverlay* CameraChangedWrapOverlay;                                         // 0x0340 (size: 0x8)
    class UBP_Btn_InputTip_C* ChangeCamPosition;                                      // 0x0348 (size: 0x8)
    class UBP_Btn_InputTip_C* CreateKey;                                              // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* FreeCamActionContainer;                     // 0x0358 (size: 0x8)
    class UTextBlock* TitleTextOverride;                                              // 0x0360 (size: 0x8)
    class UWBP_SlotToggle_C* ToggleKeyHover;                                          // 0x0368 (size: 0x8)
    class UVerticalBox* VerticalBox_31;                                               // 0x0370 (size: 0x8)
    bool CameraChanged;                                                               // 0x0378 (size: 0x1)

    void IsAnyKeyHover(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void BPE_OnVisible();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ChangesApplied();
    void ExecuteUbergraph_WBP_ReplayFreecamPositionUpdate_Availability(int32 EntryPoint);
}; // Size: 0x379

#endif
