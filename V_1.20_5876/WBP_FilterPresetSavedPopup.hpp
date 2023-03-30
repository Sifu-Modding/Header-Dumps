#ifndef UE4SS_SDK_WBP_FilterPresetSavedPopup_HPP
#define UE4SS_SDK_WBP_FilterPresetSavedPopup_HPP

class UWBP_FilterPresetSavedPopup_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* FadeInOut;                                                // 0x0318 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0320 (size: 0x8)

    void NotifySaveSuccess(bool IsSuccess);
    void SetSaveState(bool SaveSuccess);
    void SetTextColorAndFont();
    void Construct();
    void BPE_OnSynchronizeProperties();
    void ExecuteUbergraph_WBP_FilterPresetSavedPopup(int32 EntryPoint);
}; // Size: 0x328

#endif
