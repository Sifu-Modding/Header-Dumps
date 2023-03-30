#ifndef UE4SS_SDK_WBP_SpectatorInputsAvailability_HPP
#define UE4SS_SDK_WBP_SpectatorInputsAvailability_HPP

class UWBP_SpectatorInputsAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* CameraRoll;                                             // 0x0340 (size: 0x8)
    class UWBP_AvailableInputContainer_C* CameraRollContainer;                        // 0x0348 (size: 0x8)
    class UBP_Btn_InputTip_C* Crane;                                                  // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* CraneContainer;                             // 0x0358 (size: 0x8)
    class UBP_Btn_InputTip_C* MoveCamera;                                             // 0x0360 (size: 0x8)
    class UWBP_AvailableInputContainer_C* MoveCameraContainer;                        // 0x0368 (size: 0x8)
    class UBP_Btn_InputTip_C* RotateCamera;                                           // 0x0370 (size: 0x8)
    class UWBP_AvailableInputContainer_C* RotateCameraContainer;                      // 0x0378 (size: 0x8)
    class UVerticalBox* VerticalBox_32;                                               // 0x0380 (size: 0x8)
    class UBP_Btn_InputTip_C* ZoomInOut;                                              // 0x0388 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ZoomInOutContainer;                         // 0x0390 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_SpectatorInputsAvailability(int32 EntryPoint);
}; // Size: 0x398

#endif
