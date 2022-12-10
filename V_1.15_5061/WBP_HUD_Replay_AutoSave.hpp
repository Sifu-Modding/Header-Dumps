#ifndef UE4SS_SDK_WBP_HUD_Replay_AutoSave_HPP
#define UE4SS_SDK_WBP_HUD_Replay_AutoSave_HPP

class UWBP_HUD_Replay_AutoSave_C : public UBP_HUD_AutoSave_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float CurrentTimeDisplayed;

    void UpdateVisibility();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSaveStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void ExecuteUbergraph_WBP_HUD_Replay_AutoSave(int32 EntryPoint);
};

#endif
