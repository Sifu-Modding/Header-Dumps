#ifndef UE4SS_SDK_WBP_MenuInputsAvailability_HPP
#define UE4SS_SDK_WBP_MenuInputsAvailability_HPP

class UWBP_MenuInputsAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_InputTip_C* HideCameraSettings;
    class UWBP_AvailableInputContainer_C* HideCameraSettingsContainer;
    class UBP_Btn_InputTip_C* HideCharacterSettings;
    class UWBP_AvailableInputContainer_C* HideCharacterSettingsContainer;
    class UBP_Btn_InputTip_C* HidePhotoSettings;
    class UWBP_AvailableInputContainer_C* HidePhotoSettingsContainer;
    class UBP_Btn_InputTip_C* PhotoSettings;
    class UWBP_AvailableInputContainer_C* PhotoSettingsContainer;
    class UBP_Btn_InputTip_C* ShowCameraSettings;
    class UWBP_AvailableInputContainer_C* ShowCameraSettingsContainer;
    class UBP_Btn_InputTip_C* ShowCharacterSettings;
    class UWBP_AvailableInputContainer_C* ShowCharacterSettingsContainer;
    class UVerticalBox* VerticalBox_31;

    void GetShowPhotoSettingsInputAvailability(bool& _bOutAvailable);
    void GetHidePhotoSettingsInputAvailability(bool& _bOutAvailable);
    void GetPhotoSettingsMenu(class UWBP_PhotoExportSettings_C*& PhotoSettingsMenu);
    void GetShowCharacterSettingsInputAvailability(bool& _bOutAvailable);
    void GetCharacterSettingsMenu(class UWBP_CharacterExportSettings_C*& CharacterSettingsMenu);
    void GetHideCharacterSettingsInputAvailability(bool& _bOutAvailable);
    void GetIsMenuNotStackedAvailability(bool& _bOutAvailable);
    void GetCameraSettingsMenu(class UWBP_LensSettingsMenu_C*& CameraSettingsMenu);
    void GetShowCameraSettingsInputAvailability(bool& _bOutAvailable);
    void GetHideCameraSettingsInputAvailability(bool& _bOutAvailable);
    void Construct();
    void ExecuteUbergraph_WBP_MenuInputsAvailability(int32 EntryPoint);
};

#endif
