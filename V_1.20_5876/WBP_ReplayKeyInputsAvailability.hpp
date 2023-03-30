#ifndef UE4SS_SDK_WBP_ReplayKeyInputsAvailability_HPP
#define UE4SS_SDK_WBP_ReplayKeyInputsAvailability_HPP

class UWBP_ReplayKeyInputsAvailability_C : public UWBP_AvailabilityInputsReplayBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* AddCut;                                                 // 0x0340 (size: 0x8)
    class UWBP_AvailableInputContainer_C* AddCutContainer;                            // 0x0348 (size: 0x8)
    class UBP_Btn_InputTip_C* AddKey;                                                 // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* AddKeyContainer;                            // 0x0358 (size: 0x8)
    class UBP_Btn_InputTip_C* AddSpeedKey;                                            // 0x0360 (size: 0x8)
    class UWBP_AvailableInputContainer_C* AddSpeedKeyContainer;                       // 0x0368 (size: 0x8)
    class UBP_Btn_InputTip_C* CloseMenuSettingsInput;                                 // 0x0370 (size: 0x8)
    class UWBP_AvailableInputContainer_C* CopyKeyContainer;                           // 0x0378 (size: 0x8)
    class UBP_Btn_InputTip_Hold_C* CopyKeyHold;                                       // 0x0380 (size: 0x8)
    class UBP_Btn_InputTip_C* EditReplay;                                             // 0x0388 (size: 0x8)
    class UWBP_AvailableInputContainer_C* EditReplayContainer;                        // 0x0390 (size: 0x8)
    class UBP_Btn_InputTip_C* ExportVideo;                                            // 0x0398 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ExportVideoContainer;                       // 0x03A0 (size: 0x8)
    class UBP_Btn_InputTip_C* MoveCut;                                                // 0x03A8 (size: 0x8)
    class UWBP_AvailableInputContainer_C* MoveCutContainer;                           // 0x03B0 (size: 0x8)
    class UWBP_AvailableInputContainer_C* MoveKeyContainer;                           // 0x03B8 (size: 0x8)
    class UBP_Btn_InputTip_Hold_C* MoveKeyHold;                                       // 0x03C0 (size: 0x8)
    class UBP_Btn_InputTip_C* OpenMenuSettingsInput;                                  // 0x03C8 (size: 0x8)
    class UWBP_SlotToggle_C* OpenSettings_Toggle;                                     // 0x03D0 (size: 0x8)
    class UBP_Btn_InputTip_C* PasteKey;                                               // 0x03D8 (size: 0x8)
    class UWBP_AvailableInputContainer_C* PasteKeyContainer;                          // 0x03E0 (size: 0x8)
    class UBP_Btn_InputTip_C* RemoveCut;                                              // 0x03E8 (size: 0x8)
    class UWBP_AvailableInputContainer_C* RemoveCutContainer;                         // 0x03F0 (size: 0x8)
    class UWBP_AvailableInputContainer_C* RemoveHoveredKeyContainer;                  // 0x03F8 (size: 0x8)
    class UBP_Btn_InputTip_C* RemoveKey;                                              // 0x0400 (size: 0x8)
    class UWBP_AvailableInputContainer_C* RemoveKeyContainer;                         // 0x0408 (size: 0x8)
    class UBP_Btn_InputTip_Hold_C* RemoveKeyHold;                                     // 0x0410 (size: 0x8)
    class UBP_Btn_InputTip_C* ReplaceKey;                                             // 0x0418 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ReplaceKeyContainer;                        // 0x0420 (size: 0x8)
    class UBP_Btn_InputTip_C* SelectCurrentKey;                                       // 0x0428 (size: 0x8)
    class UWBP_AvailableInputContainer_C* SelectCurrentKeyContainer;                  // 0x0430 (size: 0x8)
    class UWBP_AvailableInputContainer_C* SettingsAvailable_Container;                // 0x0438 (size: 0x8)
    class UWBP_SlotToggle_C* SettingsInput_Toggle;                                    // 0x0440 (size: 0x8)
    class UWBP_AvailableInputContainer_C* Settingsopened_Container;                   // 0x0448 (size: 0x8)
    class UVerticalBox* VerticalBox_22;                                               // 0x0450 (size: 0x8)

    void IsSettingsMenuOpenedAvailability(bool& _bOutAvailable);
    void AreSettingsAvailableAvailability(bool& _bOutAvailable);
    void MoveCutInputOverride(bool& _bOutAvailable);
    void MoveKeyInputOverride(bool& _bOutAvailable);
    bool HasSelectedOrHoveredKey();
    void ReplaceKeyInputOverride(bool& _bOutAvailable);
    void PasteKeyInputOverride(bool& _bOutAvailable);
    void RemoveHoveredKeyInputOverride(bool& _bOutAvailable);
    void RemoveKeyInputOverride(bool& _bOutAvailable);
    void RemoveCutInputOverride(bool& _bOutAvailable);
    void AddCutInputOverride(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayKeyInputsAvailability(int32 EntryPoint);
}; // Size: 0x458

#endif
