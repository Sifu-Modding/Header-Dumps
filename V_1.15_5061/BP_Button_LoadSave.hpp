#ifndef UE4SS_SDK_BP_Button_LoadSave_HPP
#define UE4SS_SDK_BP_Button_LoadSave_HPP

class UBP_Button_LoadSave_C : public ULoadSlot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USCButton* Delete;
    class UImage* Image_119;
    class UTextBlock* SaveName;
    class USCButton* SCButton_46;
    FBP_Button_LoadSave_COnClickedButton OnClickedButton;
    void OnClickedButton(class UBP_Button_LoadSave_C* Button);
    FBP_Button_LoadSave_COnClickedButtonDelete OnClickedButtonDelete;
    void OnClickedButtonDelete(class UBP_Button_LoadSave_C* Button);

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void BndEvt__SCButton_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BPE_InitSlot(FCharacterSaveDescription _save);
    void BndEvt__Delete_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Button_LoadSave(int32 EntryPoint);
    void OnClickedButtonDelete__DelegateSignature(class UBP_Button_LoadSave_C* Button);
    void OnClickedButton__DelegateSignature(class UBP_Button_LoadSave_C* Button);
};

#endif
