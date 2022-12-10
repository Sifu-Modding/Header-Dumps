#ifndef UE4SS_SDK_BP_HUD_ReplayRecording_HPP
#define UE4SS_SDK_BP_HUD_ReplayRecording_HPP

class UBP_HUD_ReplayRecording_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RecordAnim;
    class UCanvasPanel* CanvasPanel_0;
    class UCanvasPanel* CanvasPanelForOffset;
    class UImage* ImgHalo;
    class UImage* ImgRecord;
    class UProgressBar* LimitBar;
    class UTextBlock* RecordingTimer_Text;
    class UProgressBar* StorageBar;
    bool bHasEventsBound;
    FReplayCurrentRecordingData RecordingData;

    void TriggerAudioFeedback();
    void UpdateVisibility();
    void OnRecordingChanged(bool _bRecording);
    void BindEvents();
    void Destruct();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_HUD_ReplayRecording(int32 EntryPoint);
};

#endif
