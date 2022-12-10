#ifndef UE4SS_SDK_MovieRenderPipelineCore_HPP
#define UE4SS_SDK_MovieRenderPipelineCore_HPP

#include "MovieRenderPipelineCore_enums.hpp"

class UMoviePipeline : public UObject
{
    FMoviePipelineOnMoviePipelineFinishedDelegate OnMoviePipelineFinishedDelegate;
    void MoviePipelineFinished(class UMoviePipeline* MoviePipeline, bool bFatalError);
    class UMoviePipelineCustomTimeStep* CustomTimeStep;
    class UEngineCustomTimeStep* CachedPrevCustomTimeStep;
    class ULevelSequence* TargetSequence;
    class ALevelSequenceActor* LevelSequenceActor;
    class UMovieRenderDebugWidget* DebugWidget;
    class UTexture* PreviewTexture;
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;
    class UMoviePipelineExecutorJob* CurrentJob;

    void Shutdown(bool bError);
    void RequestShutdown(bool bIsError);
    void OnMoviePipelineFinishedImpl();
    bool IsShutdownRequested();
    void Initialize(class UMoviePipelineExecutorJob* InJob);
    class UTexture* GetPreviewTexture();
    class UMoviePipelineMasterConfig* GetPipelineMasterConfig();
};

class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
};

class UMoviePipelineSetting : public UObject
{
    TWeakObjectPtr<class UMoviePipeline> CachedPipeline;
    bool bEnabled;

    void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);
};

class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
    int32 SpatialSampleCount;
    int32 TemporalSampleCount;
    bool bOverrideAntiAliasing;
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;
    int32 RenderWarmUpCount;
    bool bUseCameraCutForWarmUp;
    int32 EngineWarmUpCount;
    bool bRenderWarmUpFrames;

};

struct FMoviePipelineSegmentWorkMetrics
{
    FString SegmentName;
    int32 OutputFrameIndex;
    int32 TotalOutputFrameCount;
    int32 OutputSubSampleIndex;
    int32 TotalSubSampleCount;
    int32 EngineWarmUpFrameIndex;
    int32 TotalEngineWarmUpFrameCount;

};

class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob);
    int32 ResolveVersionNumber(const class UMoviePipeline* InMoviePipeline);
    EMovieRenderPipelineState GetPipelineState(const class UMoviePipeline* InPipeline);
    void GetOverallSegmentCounts(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    void GetOverallOutputFrames(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    FTimecode GetMasterTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetMasterFrameNumber(const class UMoviePipeline* InMoviePipeline);
    FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
    FText GetJobName(class UMoviePipeline* InMoviePipeline);
    FDateTime GetJobInitializationTime(const class UMoviePipeline* InMoviePipeline);
    FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
    bool GetEstimatedTimeRemaining(const class UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    FTimecode GetCurrentShotTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetCurrentShotFrameNumber(const class UMoviePipeline* InMoviePipeline);
    FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const class UMoviePipeline* InMoviePipeline);
    EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
    void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);
    float GetCompletionPercentage(const class UMoviePipeline* InPipeline);
    class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
};

class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
    EMoviePipelineShutterTiming ShutterTiming;

};

class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
    FOpenColorIODisplayConfiguration OCIOConfiguration;
    bool bDisableToneCurve;

};

class UMoviePipelineConfigBase : public UObject
{
    FString DisplayName;
    TArray<class UMoviePipelineSetting*> Settings;

    void RemoveSetting(class UMoviePipelineSetting* InSetting);
    TArray<class UMoviePipelineSetting*> GetUserSettings();
    TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    void CopyFrom(class UMoviePipelineConfigBase* InConfig);
};

class UMoviePipelineExecutorBase : public UObject
{
    FMoviePipelineExecutorBaseOnExecutorFinishedDelegate OnExecutorFinishedDelegate;
    void OnMoviePipelineExecutorFinished(class UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);
    FMoviePipelineExecutorBaseOnExecutorErroredDelegate OnExecutorErroredDelegate;
    void OnMoviePipelineExecutorErrored(class UMoviePipelineExecutorBase* PipelineExecutor, class UMoviePipeline* PipelineWithError, bool bIsFatal, FText ErrorText);
    FMoviePipelineExecutorBaseSocketMessageRecievedDelegate SocketMessageRecievedDelegate;
    void MoviePipelineSocketMessageRecieved(FString Message);
    FMoviePipelineExecutorBaseHTTPResponseRecievedDelegate HTTPResponseRecievedDelegate;
    void MoviePipelineHttpResponseRecieved(int32 RequestIndex, int32 ResponseCode, FString Message);
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;
    FString UserData;
    TSubclassOf<class UMoviePipeline> TargetPipelineClass;

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetMoviePipelineClass(UClass* InPipelineClass);
    bool SendSocketMessage(FString InMessage);
    int32 SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, const TMap<class FString, class FString>& InHeaders);
    void OnExecutorFinishedImpl();
    void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);
    void OnBeginFrame();
    bool IsSocketConnected();
    bool IsRendering();
    float GetStatusProgress();
    FString GetStatusMessage();
    void Execute(class UMoviePipelineQueue* InPipelineQueue);
    void DisconnectSocket();
    bool ConnectSocket(FString InHostName, const int32 InPort);
    void CancelCurrentJob();
    void CancelAllJobs();
};

class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
};

class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
    FString FileNameFormat;
    FCPXMLExportDataSource DataSource;

};

class AMoviePipelineGameMode : public AGameModeBase
{
};

class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
    TSubclassOf<class AGameModeBase> GameModeOverride;
    bool bCinematicQualitySettings;
    EMoviePipelineTextureStreamingMethod TextureStreaming;
    bool bUseLODZero;
    bool bDisableHLODs;
    bool bUseHighQualityShadows;
    int32 ShadowDistanceScale;
    float ShadowRadiusThreshold;
    bool bOverrideViewDistanceScale;
    int32 ViewDistanceScale;

};

class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
    int32 TileCount;
    float TextureSharpnessBias;
    float OverlapRatio;
    bool bOverrideSubSurfaceScattering;
    int32 BurleySampleCount;
    bool bWriteAllSamples;

};

class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
    class UMoviePipelineQueue* Queue;
    class UMoviePipeline* ActiveMoviePipeline;

};

class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
    bool bUseCurrentLevel;

};

class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
    bool bCloseEditor;
    FString AdditionalCommandLineArguments;
    FString InheritedCommandLineArguments;
    int32 InitialDelayFrameCount;

};

class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{
    TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;
    class UMoviePipelineOutputSetting* OutputSetting;
    TArray<class UMoviePipelineSetting*> TransientSettings;

    void InitializeTransientSettings();
    TArray<class UMoviePipelineSetting*> GetTransientSettings();
    FFrameRate GetEffectiveFrameRate(const class ULevelSequence* InSequence);
    TArray<class UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings);
};

class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
    FDirectoryPath OutputDirectory;
    FString FileNameFormat;
    FIntPoint OutputResolution;
    bool bUseCustomFrameRate;
    FFrameRate OutputFrameRate;
    bool bOverrideExistingOutput;
    int32 HandleFrameCount;
    int32 OutputFrameStep;
    bool bUseCustomPlaybackRange;
    int32 CustomStartFrame;
    int32 CustomEndFrame;
    int32 VersionNumber;
    bool bAutoVersion;
    int32 ZeroPadFrameNumbers;
    int32 FrameNumberOffset;

};

class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
    TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;
    class UMoviePipelineQueue* PipelineQueue;
    class UWorld* LastLoadedWorld;

    void OnMapLoad(class UWorld* InWorld);
    class UWorld* GetLastLoadedWorld();
    void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
};

class UMoviePipelineExecutorShot : public UObject
{
    bool bEnabled;
    FSoftObjectPath InnerPathKey;
    FSoftObjectPath OuterPathKey;
    FString OuterName;
    FString InnerName;
    float Progress;
    FString StatusMessage;
    class UMoviePipelineShotConfig* ShotOverrideConfig;
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
    void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
    class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
    class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
};

class UMoviePipelineExecutorJob : public UObject
{
    FString JobName;
    FSoftObjectPath Sequence;
    FSoftObjectPath Map;
    FString Author;
    TArray<class UMoviePipelineExecutorShot*> ShotInfo;
    FString UserData;
    FString StatusMessage;
    float StatusProgress;
    bool bIsConsumed;
    class UMoviePipelineMasterConfig* Configuration;
    TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin;

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetSequence(FSoftObjectPath InSequence);
    void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);
    void SetConsumed(const bool bInConsumed);
    void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);
    void OnDuplicated();
    bool IsConsumed();
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineMasterConfig* GetPresetOrigin();
    class UMoviePipelineMasterConfig* GetConfiguration();
};

class UMoviePipelineQueue : public UObject
{
    TArray<class UMoviePipelineExecutorJob*> Jobs;

    TArray<class UMoviePipelineExecutorJob*> GetJobs();
    class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteJob(class UMoviePipelineExecutorJob* InJob);
    void CopyFrom(class UMoviePipelineQueue* InQueue);
    class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
};

class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
    class UMoviePipelineExecutorBase* ActiveExecutor;
    class UMoviePipelineQueue* CurrentQueue;

    void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
    class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
    bool IsRendering();
    class UMoviePipelineQueue* GetQueue();
    class UMoviePipelineExecutorBase* GetActiveExecutor();
};

class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
};

class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
};

class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
};

class UMovieRenderDebugWidget : public UUserWidget
{

    void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
};

struct FMoviePipelineCameraCutInfo
{
};

#endif
