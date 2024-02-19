#ifndef UE4SS_SDK_BP_Btn_ComboMovesetTitle_HPP
#define UE4SS_SDK_BP_Btn_ComboMovesetTitle_HPP

class UBP_Btn_ComboMovesetTitle_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UHorizontalBox* ButtonBox;                                                  // 0x0318 (size: 0x8)
    class UTextBlock* Details;                                                        // 0x0320 (size: 0x8)
    FText Details Text;                                                               // 0x0328 (size: 0x18)
    TArray<FUI_ComboInput> ComboInput;                                                // 0x0340 (size: 0x10)
    TArray<class UBP_InputAction_C*> ButtonsArray;                                    // 0x0350 (size: 0x10)
    bool ListCreated;                                                                 // 0x0360 (size: 0x1)
    class UBP_Btn_Input_C* BtnInput;                                                  // 0x0368 (size: 0x8)
    bool IsDarkMode;                                                                  // 0x0370 (size: 0x1)

    void SetIsDarkMode(bool DarkMode);
    void SetButtonsAction();
    void SetFocusState(bool On Focus);
    void PreConstruct(bool IsDesignTime);
    void InitializeActions();
    void ExecuteUbergraph_BP_Btn_ComboMovesetTitle(int32 EntryPoint);
}; // Size: 0x371

#endif
