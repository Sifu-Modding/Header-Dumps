#ifndef UE4SS_SDK_WBP_GenericInputsAvailability_HPP
#define UE4SS_SDK_WBP_GenericInputsAvailability_HPP

class UWBP_GenericInputsAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_InputTip_C* CycleOverlay;
    class UWBP_AvailableInputContainer_C* CycleOverlayContainer;
    class UBP_Btn_InputTip_C* HideUI;
    class UWBP_AvailableInputContainer_C* HideUIContainer;
    class UBP_Btn_InputTip_C* PickFocusDistance;
    class UWBP_AvailableInputContainer_C* PickFocusDistanceContainer;
    class UBP_Btn_InputTip_C* Redo;
    class UWBP_AvailableInputContainer_C* RedoContainer;
    class UBP_Btn_InputTip_C* Screenshot_Input;
    class UWBP_AvailableInputContainer_C* ScreenshotContainer;
    class UBP_Btn_InputTip_C* Undo;
    class UWBP_AvailableInputContainer_C* UndoContainer;
    class UVerticalBox* VerticalBox_49;

    void InitializeInputAvailabilityOverride();
    void GetRedoInputAvailability(bool& _bOutAvailable);
    void GetUndoInputAvailability(bool& _bOutAvailable);
    void Construct();
    void ExecuteUbergraph_WBP_GenericInputsAvailability(int32 EntryPoint);
};

#endif
