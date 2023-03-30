#ifndef UE4SS_SDK_WBP_ExportScreenVideoPopup_HPP
#define UE4SS_SDK_WBP_ExportScreenVideoPopup_HPP

class UWBP_ExportScreenVideoPopup_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UBP_Btn_Menu_C* BtnBack;                                                    // 0x0420 (size: 0x8)
    class UBP_Btn_Menu_C* BtnExportScreen;                                            // 0x0428 (size: 0x8)
    class UBP_Btn_Menu_C* BtnExportVideo;                                             // 0x0430 (size: 0x8)
    class UButtonUserWidget* Focus Button;                                            // 0x0438 (size: 0x8)
    float PreviousTimeDilation;                                                       // 0x0440 (size: 0x4)
    FWBP_ExportScreenVideoPopup_COnBackRequestedDispatcher OnBackRequestedDispatcher; // 0x0448 (size: 0x10)
    void OnBackRequestedDispatcher();
    FWBP_ExportScreenVideoPopup_COnExportScreenDispatcher OnExportScreenDispatcher;   // 0x0458 (size: 0x10)
    void OnExportScreenDispatcher();
    FWBP_ExportScreenVideoPopup_COnExportVideoDispatcher OnExportVideoDispatcher;     // 0x0468 (size: 0x10)
    void OnExportVideoDispatcher();

    bool BPE_OnBackButtonPressed();
    void GetWidgetToFocus(class UWidget*& OutWidget);
    void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_17_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BPE_OnVisible();
    void BndEvt__BtnRestart_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BtnResume_K2Node_ComponentBoundEvent_5_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BtnStartRecording_K2Node_ComponentBoundEvent_3_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BtnExportVideo_K2Node_ComponentBoundEvent_6_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BtnExportScreen_K2Node_ComponentBoundEvent_7_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void ExecuteUbergraph_WBP_ExportScreenVideoPopup(int32 EntryPoint);
    void OnExportVideoDispatcher__DelegateSignature();
    void OnExportScreenDispatcher__DelegateSignature();
    void OnBackRequestedDispatcher__DelegateSignature();
}; // Size: 0x478

#endif
