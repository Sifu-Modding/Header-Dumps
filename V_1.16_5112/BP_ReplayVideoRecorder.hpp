#ifndef UE4SS_SDK_BP_ReplayVideoRecorder_HPP
#define UE4SS_SDK_BP_ReplayVideoRecorder_HPP

class ABP_ReplayVideoRecorder_C : public AReplayVideoRecorder
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool WereScreenMessagesEnabledAtStart;
    bool ResetTimeDilationOnRecordingReady;
    TSubclassOf<class UWBP_ReplayExportVideoTimer_C> WidgetTimerFeedbackClass;
    class UWBP_ReplayExportVideoTimer_C* WidgetTimerFeedbackInstance;
    float DelayBeforeRecordingStart;

    void ReceiveDestroyed();
    void BPE_StartRecordingVideo();
    void BPE_OnGoToTimeCompleted();
    void BPE_OnPlayBackCompleted(class UWorld* _world);
    void RecordingReady();
    void OnTimerEnd();
    void ExecuteUbergraph_BP_ReplayVideoRecorder(int32 EntryPoint);
};

#endif
