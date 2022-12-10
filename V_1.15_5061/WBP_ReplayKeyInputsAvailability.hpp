#ifndef UE4SS_SDK_WBP_ReplayKeyInputsAvailability_HPP
#define UE4SS_SDK_WBP_ReplayKeyInputsAvailability_HPP

class UWBP_ReplayKeyInputsAvailability_C : public UWBP_AvailabilityInputsReplayBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_InputTip_C* AddCut;
    class UWBP_AvailableInputContainer_C* AddCutContainer;
    class UBP_Btn_InputTip_C* AddKey;
    class UWBP_AvailableInputContainer_C* AddKeyContainer;
    class UBP_Btn_InputTip_C* AddSpeedKey;
    class UWBP_AvailableInputContainer_C* AddSpeedKeyContainer;
    class UBP_Btn_InputTip_C* CloseMenuSettingsInput;
    class UBP_Btn_InputTip_C* CopyKey;
    class UWBP_AvailableInputContainer_C* CopyKeyContainer;
    class UBP_Btn_InputTip_C* EditReplay;
    class UWBP_AvailableInputContainer_C* EditReplayContainer;
    class UBP_Btn_InputTip_C* ExportVideo;
    class UWBP_AvailableInputContainer_C* ExportVideoContainer;
    class UBP_Btn_InputTip_C* JumpBeginEnd;
    class UWBP_AvailableInputContainer_C* JumpBeginEndContainer;
    class UBP_Btn_InputTip_C* MoveCut;
    class UWBP_AvailableInputContainer_C* MoveCutContainer;
    class UBP_Btn_InputTip_C* MoveKey;
    class UWBP_AvailableInputContainer_C* MoveKeyContainer;
    class UBP_Btn_InputTip_C* OpenMenuSettingsInput;
    class UWBP_SlotToggle_C* OpenSettings_Toggle;
    class UBP_Btn_InputTip_C* PasteKey;
    class UWBP_AvailableInputContainer_C* PasteKeyContainer;
    class UBP_Btn_InputTip_C* RemoveCut;
    class UWBP_AvailableInputContainer_C* RemoveCutContainer;
    class UBP_Btn_InputTip_C* RemoveKey;
    class UWBP_AvailableInputContainer_C* RemoveKeyContainer;
    class UBP_Btn_InputTip_C* ReplaceKey;
    class UWBP_AvailableInputContainer_C* ReplaceKeyContainer;
    class UBP_Btn_InputTip_C* SelectCurrentKey;
    class UWBP_AvailableInputContainer_C* SelectCurrentKeyContainer;
    class UWBP_AvailableInputContainer_C* SettingsAvailable_Container;
    class UWBP_SlotToggle_C* SettingsInput_Toggle;
    class UWBP_AvailableInputContainer_C* Settingsopened_Container;
    class UVerticalBox* VerticalBox_22;

    void IsSettingsMenuOpenedAvailability(bool& _bOutAvailable);
    void AreSettingsAvailableAvailability(bool& _bOutAvailable);
    void MoveCutInputOverride(bool& _bOutAvailable);
    void MoveKeyInputOverride(bool& _bOutAvailable);
    bool HasSelectedOrHoveredKey();
    void ReplaceKeyInputOverride(bool& _bOutAvailable);
    void PasteKeyInputOverride(bool& _bOutAvailable);
    void RemoveKeyInputOverride(bool& _bOutAvailable);
    void RemoveCutInputOverride(bool& _bOutAvailable);
    void AddCutInputOverride(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayKeyInputsAvailability(int32 EntryPoint);
};

#endif
