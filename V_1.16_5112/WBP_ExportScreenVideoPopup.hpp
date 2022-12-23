#ifndef UE4SS_SDK_WBP_ExportScreenVideoPopup_HPP
#define UE4SS_SDK_WBP_ExportScreenVideoPopup_HPP

class UWBP_ExportScreenVideoPopup_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Menu_C* BtnBack;
    class UBP_Btn_Menu_C* BtnExportScreen;
    class UBP_Btn_Menu_C* BtnExportVideo;
    class UButtonUserWidget* Focus Button;
    float PreviousTimeDilation;
    FWBP_ExportScreenVideoPopup_COnBackRequestedDispatcher OnBackRequestedDispatcher;
    void OnBackRequestedDispatcher();
    FWBP_ExportScreenVideoPopup_COnExportScreenDispatcher OnExportScreenDispatcher;
    void OnExportScreenDispatcher();
    FWBP_ExportScreenVideoPopup_COnExportVideoDispatcher OnExportVideoDispatcher;
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
};

#endif
