#ifndef UE4SS_SDK_MovieRenderPipelineCore_HPP
#define UE4SS_SDK_MovieRenderPipelineCore_HPP

#include "MovieRenderPipelineCore_enums.hpp"

struct FMoviePipelineCameraCutInfo
{
}; // Size: 0xB8

struct FMoviePipelineSegmentWorkMetrics
{
    FString SegmentName;                                                              // 0x0000 (size: 0x10)
    int32 OutputFrameIndex;                                                           // 0x0010 (size: 0x4)
    int32 TotalOutputFrameCount;                                                      // 0x0014 (size: 0x4)
    int32 OutputSubSampleIndex;                                                       // 0x0018 (size: 0x4)
    int32 TotalSubSampleCount;                                                        // 0x001C (size: 0x4)
    int32 EngineWarmUpFrameIndex;                                                     // 0x0020 (size: 0x4)
    int32 TotalEngineWarmUpFrameCount;                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

class AMoviePipelineGameMode : public AGameModeBase
{
}; // Size: 0x360

class UMoviePipeline : public UObject
{
    FMoviePipelineOnMoviePipelineFinishedDelegate OnMoviePipelineFinishedDelegate;    // 0x0028 (size: 0x10)
    void MoviePipelineFinished(class UMoviePipeline* MoviePipeline, bool bFatalError);
    class UMoviePipelineCustomTimeStep* CustomTimeStep;                               // 0x0038 (size: 0x8)
    class UEngineCustomTimeStep* CachedPrevCustomTimeStep;                            // 0x0050 (size: 0x8)
    class ULevelSequence* TargetSequence;                                             // 0x0058 (size: 0x8)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0060 (size: 0x8)
    class UMovieRenderDebugWidget* DebugWidget;                                       // 0x0068 (size: 0x8)
    class UTexture* PreviewTexture;                                                   // 0x0070 (size: 0x8)
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;                      // 0x0250 (size: 0x8)
    class UMoviePipelineExecutorJob* CurrentJob;                                      // 0x0258 (size: 0x8)

    void Shutdown(bool bError);
    void RequestShutdown(bool bIsError);
    void OnMoviePipelineFinishedImpl();
    bool IsShutdownRequested();
    void Initialize(class UMoviePipelineExecutorJob* InJob);
    class UTexture* GetPreviewTexture();
    class UMoviePipelineMasterConfig* GetPipelineMasterConfig();
}; // Size: 0x298

class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
    int32 SpatialSampleCount;                                                         // 0x0048 (size: 0x4)
    int32 TemporalSampleCount;                                                        // 0x004C (size: 0x4)
    bool bOverrideAntiAliasing;                                                       // 0x0050 (size: 0x1)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;                              // 0x0051 (size: 0x1)
    int32 RenderWarmUpCount;                                                          // 0x0054 (size: 0x4)
    bool bUseCameraCutForWarmUp;                                                      // 0x0058 (size: 0x1)
    int32 EngineWarmUpCount;                                                          // 0x005C (size: 0x4)
    bool bRenderWarmUpFrames;                                                         // 0x0060 (size: 0x1)

}; // Size: 0x68

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
}; // Size: 0x28

class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
    EMoviePipelineShutterTiming ShutterTiming;                                        // 0x0048 (size: 0x1)

}; // Size: 0x50

class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
    FOpenColorIODisplayConfiguration OCIOConfiguration;                               // 0x0048 (size: 0x60)
    bool bDisableToneCurve;                                                           // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UMoviePipelineConfigBase : public UObject
{
    FString DisplayName;                                                              // 0x0028 (size: 0x10)
    TArray<class UMoviePipelineSetting*> Settings;                                    // 0x0038 (size: 0x10)

    void RemoveSetting(class UMoviePipelineSetting* InSetting);
    TArray<class UMoviePipelineSetting*> GetUserSettings();
    TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    void CopyFrom(class UMoviePipelineConfigBase* InConfig);
}; // Size: 0x50

class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
}; // Size: 0x30

class UMoviePipelineExecutorBase : public UObject
{
    FMoviePipelineExecutorBaseOnExecutorFinishedDelegate OnExecutorFinishedDelegate;  // 0x0028 (size: 0x10)
    void OnMoviePipelineExecutorFinished(class UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);
    FMoviePipelineExecutorBaseOnExecutorErroredDelegate OnExecutorErroredDelegate;    // 0x0050 (size: 0x10)
    void OnMoviePipelineExecutorErrored(class UMoviePipelineExecutorBase* PipelineExecutor, class UMoviePipeline* PipelineWithError, bool bIsFatal, FText ErrorText);
    FMoviePipelineExecutorBaseSocketMessageRecievedDelegate SocketMessageRecievedDelegate; // 0x0080 (size: 0x10)
    void MoviePipelineSocketMessageRecieved(FString Message);
    FMoviePipelineExecutorBaseHTTPResponseRecievedDelegate HTTPResponseRecievedDelegate; // 0x0090 (size: 0x10)
    void MoviePipelineHttpResponseRecieved(int32 RequestIndex, int32 ResponseCode, FString Message);
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;                      // 0x00A0 (size: 0x8)
    FString UserData;                                                                 // 0x00A8 (size: 0x10)
    TSubclassOf<class UMoviePipeline> TargetPipelineClass;                            // 0x00B8 (size: 0x8)

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
}; // Size: 0x108

class UMoviePipelineExecutorJob : public UObject
{
    FString JobName;                                                                  // 0x0028 (size: 0x10)
    FSoftObjectPath Sequence;                                                         // 0x0038 (size: 0x18)
    FSoftObjectPath Map;                                                              // 0x0050 (size: 0x18)
    FString Author;                                                                   // 0x0068 (size: 0x10)
    TArray<class UMoviePipelineExecutorShot*> ShotInfo;                               // 0x0078 (size: 0x10)
    FString UserData;                                                                 // 0x0088 (size: 0x10)
    FString StatusMessage;                                                            // 0x0098 (size: 0x10)
    float StatusProgress;                                                             // 0x00A8 (size: 0x4)
    bool bIsConsumed;                                                                 // 0x00AC (size: 0x1)
    class UMoviePipelineMasterConfig* Configuration;                                  // 0x00B0 (size: 0x8)
    TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin;                          // 0x00B8 (size: 0x28)

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
}; // Size: 0xE0

class UMoviePipelineExecutorShot : public UObject
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    FSoftObjectPath InnerPathKey;                                                     // 0x0030 (size: 0x18)
    FSoftObjectPath OuterPathKey;                                                     // 0x0048 (size: 0x18)
    FString OuterName;                                                                // 0x0060 (size: 0x10)
    FString InnerName;                                                                // 0x0070 (size: 0x10)
    float Progress;                                                                   // 0x0138 (size: 0x4)
    FString StatusMessage;                                                            // 0x0140 (size: 0x10)
    class UMoviePipelineShotConfig* ShotOverrideConfig;                               // 0x0150 (size: 0x8)
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;                // 0x0158 (size: 0x28)

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
    void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
    class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
    class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
}; // Size: 0x180

class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
    FString FileNameFormat;                                                           // 0x0050 (size: 0x10)
    FCPXMLExportDataSource DataSource;                                                // 0x0060 (size: 0x1)

}; // Size: 0x80

class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
    TSubclassOf<class AGameModeBase> GameModeOverride;                                // 0x0048 (size: 0x8)
    bool bCinematicQualitySettings;                                                   // 0x0050 (size: 0x1)
    EMoviePipelineTextureStreamingMethod TextureStreaming;                            // 0x0051 (size: 0x1)
    bool bUseLODZero;                                                                 // 0x0052 (size: 0x1)
    bool bDisableHLODs;                                                               // 0x0053 (size: 0x1)
    bool bUseHighQualityShadows;                                                      // 0x0054 (size: 0x1)
    int32 ShadowDistanceScale;                                                        // 0x0058 (size: 0x4)
    float ShadowRadiusThreshold;                                                      // 0x005C (size: 0x4)
    bool bOverrideViewDistanceScale;                                                  // 0x0060 (size: 0x1)
    int32 ViewDistanceScale;                                                          // 0x0064 (size: 0x4)

}; // Size: 0x100

class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
    int32 TileCount;                                                                  // 0x0048 (size: 0x4)
    float TextureSharpnessBias;                                                       // 0x004C (size: 0x4)
    float OverlapRatio;                                                               // 0x0050 (size: 0x4)
    bool bOverrideSubSurfaceScattering;                                               // 0x0054 (size: 0x1)
    int32 BurleySampleCount;                                                          // 0x0058 (size: 0x4)
    bool bWriteAllSamples;                                                            // 0x005C (size: 0x1)

}; // Size: 0x68

class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
    bool bUseCurrentLevel;                                                            // 0x0130 (size: 0x1)

}; // Size: 0x168

class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
    bool bCloseEditor;                                                                // 0x0038 (size: 0x1)
    FString AdditionalCommandLineArguments;                                           // 0x0040 (size: 0x10)
    FString InheritedCommandLineArguments;                                            // 0x0050 (size: 0x10)
    int32 InitialDelayFrameCount;                                                     // 0x0060 (size: 0x4)

}; // Size: 0x68

class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
    class UMoviePipelineQueue* Queue;                                                 // 0x0108 (size: 0x8)
    class UMoviePipeline* ActiveMoviePipeline;                                        // 0x0110 (size: 0x8)

}; // Size: 0x130

class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{
    TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;        // 0x0050 (size: 0x50)
    class UMoviePipelineOutputSetting* OutputSetting;                                 // 0x00A0 (size: 0x8)
    TArray<class UMoviePipelineSetting*> TransientSettings;                           // 0x00A8 (size: 0x10)

    void InitializeTransientSettings();
    TArray<class UMoviePipelineSetting*> GetTransientSettings();
    FFrameRate GetEffectiveFrameRate(const class ULevelSequence* InSequence);
    TArray<class UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings);
}; // Size: 0xB8

class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
    FDirectoryPath OutputDirectory;                                                   // 0x0048 (size: 0x10)
    FString FileNameFormat;                                                           // 0x0058 (size: 0x10)
    FIntPoint OutputResolution;                                                       // 0x0068 (size: 0x8)
    bool bUseCustomFrameRate;                                                         // 0x0070 (size: 0x1)
    FFrameRate OutputFrameRate;                                                       // 0x0074 (size: 0x8)
    bool bOverrideExistingOutput;                                                     // 0x0080 (size: 0x1)
    int32 HandleFrameCount;                                                           // 0x0084 (size: 0x4)
    int32 OutputFrameStep;                                                            // 0x0088 (size: 0x4)
    bool bUseCustomPlaybackRange;                                                     // 0x008C (size: 0x1)
    int32 CustomStartFrame;                                                           // 0x0090 (size: 0x4)
    int32 CustomEndFrame;                                                             // 0x0094 (size: 0x4)
    int32 VersionNumber;                                                              // 0x0098 (size: 0x4)
    bool bAutoVersion;                                                                // 0x009C (size: 0x1)
    int32 ZeroPadFrameNumbers;                                                        // 0x00A0 (size: 0x4)
    int32 FrameNumberOffset;                                                          // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
    TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;                // 0x0108 (size: 0x8)
    class UMoviePipelineQueue* PipelineQueue;                                         // 0x0110 (size: 0x8)
    class UWorld* LastLoadedWorld;                                                    // 0x0118 (size: 0x8)

    void OnMapLoad(class UWorld* InWorld);
    class UWorld* GetLastLoadedWorld();
    void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
}; // Size: 0x120

class UMoviePipelineQueue : public UObject
{
    TArray<class UMoviePipelineExecutorJob*> Jobs;                                    // 0x0028 (size: 0x10)

    TArray<class UMoviePipelineExecutorJob*> GetJobs();
    class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteJob(class UMoviePipelineExecutorJob* InJob);
    void CopyFrom(class UMoviePipelineQueue* InQueue);
    class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
}; // Size: 0x40

class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
    class UMoviePipelineExecutorBase* ActiveExecutor;                                 // 0x0030 (size: 0x8)
    class UMoviePipelineQueue* CurrentQueue;                                          // 0x0038 (size: 0x8)

    void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
    class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
    bool IsRendering();
    class UMoviePipelineQueue* GetQueue();
    class UMoviePipelineExecutorBase* GetActiveExecutor();
}; // Size: 0x40

class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMoviePipelineSetting : public UObject
{
    TWeakObjectPtr<class UMoviePipeline> CachedPipeline;                              // 0x0028 (size: 0x8)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)

    void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);
}; // Size: 0x48

class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
}; // Size: 0x50

class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x88

class UMovieRenderDebugWidget : public UUserWidget
{

    void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
}; // Size: 0x268

#endif
