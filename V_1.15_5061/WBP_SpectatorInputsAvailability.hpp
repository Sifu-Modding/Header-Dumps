#ifndef UE4SS_SDK_WBP_SpectatorInputsAvailability_HPP
#define UE4SS_SDK_WBP_SpectatorInputsAvailability_HPP

class UWBP_SpectatorInputsAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_InputTip_C* CameraRoll;
    class UWBP_AvailableInputContainer_C* CameraRollContainer;
    class UBP_Btn_InputTip_C* Crane;
    class UWBP_AvailableInputContainer_C* CraneContainer;
    class UBP_Btn_InputTip_C* MoveCamera;
    class UWBP_AvailableInputContainer_C* MoveCameraContainer;
    class UBP_Btn_InputTip_C* RotateCamera;
    class UWBP_AvailableInputContainer_C* RotateCameraContainer;
    class UVerticalBox* VerticalBox_32;
    class UBP_Btn_InputTip_C* ZoomInOut;
    class UWBP_AvailableInputContainer_C* ZoomInOutContainer;

    void Construct();
    void ExecuteUbergraph_WBP_SpectatorInputsAvailability(int32 EntryPoint);
};

#endif
