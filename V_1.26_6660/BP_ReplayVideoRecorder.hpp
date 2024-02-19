#ifndef UE4SS_SDK_BP_ReplayVideoRecorder_HPP
#define UE4SS_SDK_BP_ReplayVideoRecorder_HPP

class ABP_ReplayVideoRecorder_C : public AReplayVideoRecorder
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    bool WereScreenMessagesEnabledAtStart;                                            // 0x0320 (size: 0x1)
    bool ResetTimeDilationOnRecordingReady;                                           // 0x0321 (size: 0x1)
    TSubclassOf<class UWBP_ReplayExportVideoTimer_C> WidgetTimerFeedbackClass;        // 0x0328 (size: 0x8)
    class UWBP_ReplayExportVideoTimer_C* WidgetTimerFeedbackInstance;                 // 0x0330 (size: 0x8)
    float DelayBeforeRecordingStart;                                                  // 0x0338 (size: 0x4)

    void ReceiveDestroyed();
    void BPE_StartRecordingVideo();
    void BPE_OnGoToTimeCompleted();
    void BPE_OnPlayBackCompleted(class UWorld* _world);
    void RecordingReady();
    void OnTimerEnd();
    void ExecuteUbergraph_BP_ReplayVideoRecorder(int32 EntryPoint);
}; // Size: 0x33C

#endif
