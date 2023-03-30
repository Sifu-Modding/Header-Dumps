#ifndef UE4SS_SDK_WBP_MenuInputsAvailability_HPP
#define UE4SS_SDK_WBP_MenuInputsAvailability_HPP

class UWBP_MenuInputsAvailability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* HideCameraSettings;                                     // 0x0340 (size: 0x8)
    class UWBP_AvailableInputContainer_C* HideCameraSettingsContainer;                // 0x0348 (size: 0x8)
    class UBP_Btn_InputTip_C* HideCharacterSettings;                                  // 0x0350 (size: 0x8)
    class UWBP_AvailableInputContainer_C* HideCharacterSettingsContainer;             // 0x0358 (size: 0x8)
    class UBP_Btn_InputTip_C* HidePhotoSettings;                                      // 0x0360 (size: 0x8)
    class UWBP_AvailableInputContainer_C* HidePhotoSettingsContainer;                 // 0x0368 (size: 0x8)
    class UBP_Btn_InputTip_C* PhotoSettings;                                          // 0x0370 (size: 0x8)
    class UWBP_AvailableInputContainer_C* PhotoSettingsContainer;                     // 0x0378 (size: 0x8)
    class UBP_Btn_InputTip_C* ShowCameraSettings;                                     // 0x0380 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ShowCameraSettingsContainer;                // 0x0388 (size: 0x8)
    class UBP_Btn_InputTip_C* ShowCharacterSettings;                                  // 0x0390 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ShowCharacterSettingsContainer;             // 0x0398 (size: 0x8)
    class UVerticalBox* VerticalBox_31;                                               // 0x03A0 (size: 0x8)

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
}; // Size: 0x3A8

#endif
