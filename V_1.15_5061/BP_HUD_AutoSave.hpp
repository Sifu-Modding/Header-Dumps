#ifndef UE4SS_SDK_BP_HUD_AutoSave_HPP
#define UE4SS_SDK_BP_HUD_AutoSave_HPP

class UBP_HUD_AutoSave_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_0;
    class UCanvasPanel* CanvasPanelForOffset;
    class UImage* SaveThrobber;
    bool bSaveEnded;
    bool bDisplayDurationEnded;
    float DisplayMinDuration;
    bool bHiddenFromDebugMenu;

    void HideFormDebugMenu();
    void EndDisplayDuration();
    void UpdateVisibility();
    void Construct();
    void OnSaveStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void ExecuteUbergraph_BP_HUD_AutoSave(int32 EntryPoint);
};

#endif
