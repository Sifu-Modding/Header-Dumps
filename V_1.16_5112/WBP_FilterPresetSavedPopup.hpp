#ifndef UE4SS_SDK_WBP_FilterPresetSavedPopup_HPP
#define UE4SS_SDK_WBP_FilterPresetSavedPopup_HPP

class UWBP_FilterPresetSavedPopup_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeInOut;
    class UTextBlock* Text;

    void NotifySaveSuccess(bool IsSuccess);
    void SetSaveState(bool SaveSuccess);
    void SetTextColorAndFont();
    void Construct();
    void BPE_OnSynchronizeProperties();
    void ExecuteUbergraph_WBP_FilterPresetSavedPopup(int32 EntryPoint);
};

#endif
