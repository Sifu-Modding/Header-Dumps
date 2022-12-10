#ifndef UE4SS_SDK_BP_Btn_DebugForceTakeDown_HPP
#define UE4SS_SDK_BP_Btn_DebugForceTakeDown_HPP

class UBP_Btn_DebugForceTakeDown_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BtnTxt;
    class USCButton* SCBtn;
    TSubclassOf<class UTakedownAnimRequest> AnimRequest;
    FTakedownDebugAnim Anims;

    void SetTakedownAnims(FTakedownDebugAnim NewParam);
    void Construct();
    void BndEvt__SCButton_98_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_DebugForceTakeDown(int32 EntryPoint);
};

#endif
