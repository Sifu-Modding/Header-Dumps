#ifndef UE4SS_SDK_WBP_ReplayFreecamPositionUpdate_Availability_HPP
#define UE4SS_SDK_WBP_ReplayFreecamPositionUpdate_Availability_HPP

class UWBP_ReplayFreecamPositionUpdate_Availability_C : public UWBP_AvailabilityInputsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_InputTip_C* ChangeCamPosition;
    class UBP_Btn_InputTip_C* CreateKey;
    class UWBP_AvailableInputContainer_C* FreeCamActionContainer;
    class UTextBlock* TitleTextOverride;
    class UWBP_SlotToggle_C* ToggleKeyHover;
    class UVerticalBox* VerticalBox_31;

    void IsAnyKeyHover(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverride();
    void Construct();
    void ExecuteUbergraph_WBP_ReplayFreecamPositionUpdate_Availability(int32 EntryPoint);
};

#endif
