#ifndef UE4SS_SDK_BP_Button_LoadSave_HPP
#define UE4SS_SDK_BP_Button_LoadSave_HPP

class UBP_Button_LoadSave_C : public ULoadSlot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class USCButton* Delete;                                                          // 0x0358 (size: 0x8)
    class UImage* Image_119;                                                          // 0x0360 (size: 0x8)
    class UTextBlock* SaveName;                                                       // 0x0368 (size: 0x8)
    class USCButton* SCButton_46;                                                     // 0x0370 (size: 0x8)
    FBP_Button_LoadSave_COnClickedButton OnClickedButton;                             // 0x0378 (size: 0x10)
    void OnClickedButton(class UBP_Button_LoadSave_C* Button);
    FBP_Button_LoadSave_COnClickedButtonDelete OnClickedButtonDelete;                 // 0x0388 (size: 0x10)
    void OnClickedButtonDelete(class UBP_Button_LoadSave_C* Button);

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void BndEvt__SCButton_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BPE_InitSlot(FCharacterSaveDescription _save);
    void BndEvt__Delete_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Button_LoadSave(int32 EntryPoint);
    void OnClickedButtonDelete__DelegateSignature(class UBP_Button_LoadSave_C* Button);
    void OnClickedButton__DelegateSignature(class UBP_Button_LoadSave_C* Button);
}; // Size: 0x398

#endif
