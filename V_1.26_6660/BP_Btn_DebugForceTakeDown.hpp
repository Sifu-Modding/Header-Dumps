#ifndef UE4SS_SDK_BP_Btn_DebugForceTakeDown_HPP
#define UE4SS_SDK_BP_Btn_DebugForceTakeDown_HPP

class UBP_Btn_DebugForceTakeDown_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UTextBlock* BtnTxt;                                                         // 0x0318 (size: 0x8)
    class USCButton* SCBtn;                                                           // 0x0320 (size: 0x8)
    TSubclassOf<class UTakedownAnimRequest> AnimRequest;                              // 0x0328 (size: 0x8)
    FTakedownDebugAnim Anims;                                                         // 0x0330 (size: 0x38)

    void SetTakedownAnims(FTakedownDebugAnim NewParam);
    void Construct();
    void BndEvt__SCButton_98_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_DebugForceTakeDown(int32 EntryPoint);
}; // Size: 0x368

#endif
