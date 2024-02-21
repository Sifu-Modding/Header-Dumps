#ifndef UE4SS_SDK_WBP_GenericInputsAvailability_HPP
#define UE4SS_SDK_WBP_GenericInputsAvailability_HPP

class UWBP_GenericInputsAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* CycleOverlay;                                           // 0x0340 (size: 0x8)
    class UWBP_AvailableInputContainer_C* CycleOverlayContainer;                      // 0x0348 (size: 0x8)
    class UBP_Btn_InputTip_C* HideUI;                                                 // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* HideUIContainer;                            // 0x0358 (size: 0x8)
    class UBP_Btn_InputTip_C* JumpBeginEnd;                                           // 0x0360 (size: 0x8)
    class UBP_Btn_InputTip_C* JumpBeginEnd_1;                                         // 0x0368 (size: 0x8)
    class UWBP_AvailableInputContainer_C* JumpBeginEndContainer;                      // 0x0370 (size: 0x8)
    class UBP_Btn_InputTip_C* PickFocusDistance;                                      // 0x0378 (size: 0x8)
    class UWBP_AvailableInputContainer_C* PickFocusDistanceContainer;                 // 0x0380 (size: 0x8)
    class UWBP_AvailableInputContainer_C* PlayContainer;                              // 0x0388 (size: 0x8)
    class UBP_Btn_InputTip_C* Redo;                                                   // 0x0390 (size: 0x8)
    class UWBP_AvailableInputContainer_C* RedoContainer;                              // 0x0398 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ScreenshotContainer;                        // 0x03A0 (size: 0x8)
    class UBP_Btn_InputTip_C* ScreenshotInput;                                        // 0x03A8 (size: 0x8)
    class UBP_Btn_InputTip_C* Undo;                                                   // 0x03B0 (size: 0x8)
    class UWBP_AvailableInputContainer_C* UndoContainer;                              // 0x03B8 (size: 0x8)
    class UVerticalBox* VerticalBox_49;                                               // 0x03C0 (size: 0x8)

    void PlayPauseAvailability(bool& _bOutAvailable);
    void JumpBoundsAvailability(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void GetRedoInputAvailability(bool& _bOutAvailable);
    void GetUndoInputAvailability(bool& _bOutAvailable);
    void Construct();
    void ExecuteUbergraph_WBP_GenericInputsAvailability(int32 EntryPoint);
}; // Size: 0x3C8

#endif
