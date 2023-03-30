#ifndef UE4SS_SDK_WBP_AvailableInputContainer_HPP
#define UE4SS_SDK_WBP_AvailableInputContainer_HPP

class UWBP_AvailableInputContainer_C : public UInputAvailabilityUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UNamedSlot* InputActionSlot;                                                // 0x0340 (size: 0x8)
    bool bUseRemapping;                                                               // 0x0348 (size: 0x1)
    TArray<FName> Controller_Lookup;                                                  // 0x0350 (size: 0x10)

    void InitializeInputAction();
    void GetAvailableInputAction(class UBP_Btn_InputTip_C*& InputAction, class UBP_Btn_InputTip_ConsoleOverride_C*& AsBP Btn Input Tip Console Override);
    void Construct();
    void BPE_OnAvailabilityUpdated(bool _bAvailable);
    void ExecuteUbergraph_WBP_AvailableInputContainer(int32 EntryPoint);
}; // Size: 0x360

#endif
