#ifndef UE4SS_SDK_BP_HUD_ReplayRecording_HPP
#define UE4SS_SDK_BP_HUD_ReplayRecording_HPP

class UBP_HUD_ReplayRecording_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UWidgetAnimation* RecordAnim;                                               // 0x03A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x03A8 (size: 0x8)
    class UCanvasPanel* CanvasPanelForOffset;                                         // 0x03B0 (size: 0x8)
    class UImage* ImgHalo;                                                            // 0x03B8 (size: 0x8)
    class UImage* ImgRecord;                                                          // 0x03C0 (size: 0x8)
    class UProgressBar* LimitBar;                                                     // 0x03C8 (size: 0x8)
    class UTextBlock* RecordingTimer_Text;                                            // 0x03D0 (size: 0x8)
    class UProgressBar* StorageBar;                                                   // 0x03D8 (size: 0x8)
    bool bHasEventsBound;                                                             // 0x03E0 (size: 0x1)
    FReplayCurrentRecordingData RecordingData;                                        // 0x03E8 (size: 0x40)

    void TriggerAudioFeedback();
    void UpdateVisibility();
    void OnRecordingChanged(bool _bRecording);
    void BindEvents();
    void Destruct();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_HUD_ReplayRecording(int32 EntryPoint);
}; // Size: 0x428

#endif
