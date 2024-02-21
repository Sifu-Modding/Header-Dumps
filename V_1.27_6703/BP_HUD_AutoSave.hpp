#ifndef UE4SS_SDK_BP_HUD_AutoSave_HPP
#define UE4SS_SDK_BP_HUD_AutoSave_HPP

class UBP_HUD_AutoSave_C : public UHUDUserWidget
{
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0398 (size: 0x8)
    class UCanvasPanel* CanvasPanelForOffset;                                         // 0x03A0 (size: 0x8)
    class UImage* SaveThrobber;                                                       // 0x03A8 (size: 0x8)
    bool bSaveEnded;                                                                  // 0x03B0 (size: 0x1)
    bool bDisplayDurationEnded;                                                       // 0x03B1 (size: 0x1)
    float DisplayMinDuration;                                                         // 0x03B4 (size: 0x4)
    bool bHiddenFromDebugMenu;                                                        // 0x03B8 (size: 0x1)
    FBP_HUD_AutoSave_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x03BC (size: 0x10)
    void SaveChangeStatus(bool bpp___bSaveInProgress__pf, ESaveResult bpp___eSaveResult__pf);
    bool K2Node_CustomEvent__bSaveInProgress;                                         // 0x03CC (size: 0x1)
    ESaveResult K2Node_CustomEvent__eSaveResult;                                      // 0x03CD (size: 0x1)
    TArray<class UWidget*> K2Node_MakeArray_Array;                                    // 0x03D0 (size: 0x10)

    void UpdateVisibility();
    void OnSaveStatusChanged(bool bpp___bSaveInProgress__pf, ESaveResult bpp___eSaveResult__pf);
    void HideFormDebugMenu();
    void ExecuteUbergraph_BP_HUD_AutoSave_1(int32 bpp__EntryPoint__pf);
    void EndDisplayDuration();
    void Construct();
    void SaveChangeStatus__DelegateSignature(bool bpp___bSaveInProgress__pf, ESaveResult bpp___eSaveResult__pf);
}; // Size: 0x3E0

#endif
