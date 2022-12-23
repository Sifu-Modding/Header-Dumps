#ifndef UE4SS_SDK_WBP_AvailableInputContainer_HPP
#define UE4SS_SDK_WBP_AvailableInputContainer_HPP

class UWBP_AvailableInputContainer_C : public UInputAvailabilityUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* InputActionSlot;
    bool bUseRemapping;
    TArray<FName> Controller_Lookup;

    void InitializeInputAction();
    void GetAvailableInputAction(class UBP_Btn_InputTip_C*& InputAction, class UBP_Btn_InputTip_ConsoleOverride_C*& AsBP Btn Input Tip Console Override);
    void Construct();
    void BPE_OnAvailabilityUpdated(bool _bAvailable);
    void ExecuteUbergraph_WBP_AvailableInputContainer(int32 EntryPoint);
};

#endif
