#ifndef UE4SS_SDK_AkAudio_HPP
#define UE4SS_SDK_AkAudio_HPP

#include "AkAudio_enums.hpp"

class AAkAcousticPortal : public AVolume
{
    AkAcousticPortalState InitialState;
    float ObstructionRefreshInterval;
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;

    void OpenPortal();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
};

class UAkPortalComponent : public USceneComponent
{
};

class UAkAudioType : public UObject
{
    uint32 ShortID;
    TArray<class UObject*> UserData;

};

class UAkAcousticTexture : public UAkAudioType
{
};

class AAkAmbientSound : public AActor
{
    class UAkAudioEvent* AkAudioEvent;
    class UAkComponent* AkComponent;
    bool StopWhenOwnerIsDestroyed;
    bool AutoPost;

    void StopAmbientSound();
    void StartAmbientSound();
};

struct FAkMainOutputSettings
{
    FString AudioDeviceShareset;
    uint32 DeviceID;
    EAkPanningRule PanningRule;
    EAkChannelConfigType ChannelConfigType;
    uint32 ChannelMask;
    uint32 NumberOfChannels;

};

struct FAkSpatialAudioSettings
{
    uint32 MaxSoundPropagationDepth;
    uint32 DiffractionFlags;
    float MovementThreshold;
    uint32 NumberOfPrimaryRays;
    uint32 ReflectionOrder;
    bool EnableDiffractionOnReflections;
    bool EnableDirectPathDiffraction;
    float MaximumPathLength;
    bool EnableTransmission;

};

struct FAkCommonInitializationSettings
{
    uint32 MaximumNumberOfMemoryPools;
    uint32 MaximumNumberOfPositioningPaths;
    uint32 CommandQueueSize;
    uint32 SamplesPerFrame;
    FAkMainOutputSettings MainOutputSettings;
    float StreamingLookAheadRatio;
    uint16 NumberOfRefillsInVoice;
    FAkSpatialAudioSettings SpatialAudioSettings;

};

struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
    uint32 SampleRate;

};

struct FAkCommunicationSettings
{
    uint32 PoolSize;
    uint16 DiscoveryBroadcastPort;
    uint16 CommandPort;
    uint16 NotificationPort;
    FString NetworkName;

};

struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
    bool InitializeSystemComms;

};

struct FAkAdvancedSpatialAudioSettings
{
    float DiffractionShadowAttenuationFactor;
    float DiffractionShadowDegrees;

};

struct FAkAdvancedInitializationSettings
{
    uint32 IO_MemorySize;
    uint32 IO_Granularity;
    float TargetAutoStreamBufferLength;
    bool UseStreamCache;
    uint32 MaximumPinnedBytesInCache;
    bool EnableGameSyncPreparation;
    uint32 ContinuousPlaybackLookAhead;
    uint32 MonitorQueuePoolSize;
    uint32 MaximumHardwareTimeoutMs;
    bool DebugOutOfRangeCheckEnabled;
    float DebugOutOfRangeLimit;
    FAkAdvancedSpatialAudioSettings SpatialAudioSettings;

};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
    bool EnableMultiCoreRendering;

};

struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool RoundFrameSizeToHardwareSize;

};

class UAkAndroidInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAndroidAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkPlatformInfo : public UObject
{
};

class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
};

class UAkAssetData : public UObject
{
    uint32 CachedHash;

};

class UAkAssetDataWithMedia : public UAkAssetData
{
    TArray<class UAkMediaAsset*> MediaList;

};

class UAkAssetPlatformData : public UObject
{
    class UAkAssetData* CurrentAssetData;

};

class UAkAssetBase : public UAkAudioType
{
    class UAkAssetPlatformData* PlatformAssetData;

};

class UAkAudioBank : public UAkAssetBase
{
    bool AutoLoad;
    TMap<class FString, class TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents;
    bool bIsLocalized;
    class UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;

};

class UAkAssetDataSwitchContainerData : public UObject
{
    TSoftObjectPtr<UAkGroupValue> GroupValue;
    class UAkGroupValue* DefaultGroupValue;
    TArray<class UAkMediaAsset*> MediaList;
    TArray<class UAkAssetDataSwitchContainerData*> Children;

};

class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
    TArray<class UAkAssetDataSwitchContainerData*> SwitchContainers;
    class UAkGroupValue* DefaultGroupValue;

};

class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
    float MaxAttenuationRadius;
    bool IsInfinite;
    float MinimumDuration;
    float MaximumDuration;
    TMap<class FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;
    TSet<UAkAudioEvent*> PostedEvents;
    TSet<UAkAuxBus*> UserDefinedSends;
    TSet<UAkTrigger*> PostedTriggers;
    TSet<UAkGroupValue*> GroupValues;

};

class UAkAudioEvent : public UAkAssetBase
{
    TMap<class FString, class TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    class UAkAudioBank* RequiredBank;
    class UAkAssetPlatformData* CurrentLocalizedPlatformData;
    float MaxAttenuationRadius;
    bool IsInfinite;
    float MinimumDuration;
    float MaximumDuration;

    float GetMinimumDuration();
    float GetMaximumDuration();
    float GetMaxAttenuationRadius();
    bool GetIsInfinite();
};

struct FAkExternalSourceInfo
{
    FString ExternalSrcName;
    AkCodecId CodecID;
    FString Filename;
    class UAkExternalMediaAsset* ExternalSourceAsset;
    bool IsStreamed;

};

class UAkGameObject : public USceneComponent
{
    class UAkAudioEvent* AkAudioEvent;
    FString EventName;

    void Stop();
    void PostAssociatedAkEventAsync(const class UObject* WorldContextObject, int32 CallbackMask, const FPostAssociatedAkEventAsyncPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32& PlayingID);
    int32 PostAssociatedAkEvent(int32 CallbackMask, const FPostAssociatedAkEventPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, const bool _bReplicates);
    void PostAkEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32& PlayingID, int32 CallbackMask, const FPostAkEventAsyncPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, const FPostAkEventPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName, const bool _bReplicates);
};

class UAkComponent : public UAkGameObject
{
    bool bUseSpatialAudio;
    TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;
    uint8 EnableSpotReflectors;
    class UAkAuxBus* EarlyReflectionAuxBus;
    FString EarlyReflectionAuxBusName;
    int32 EarlyReflectionOrder;
    float EarlyReflectionBusSendGain;
    float EarlyReflectionMaxPathLength;
    float roomReverbAuxBusGain;
    int32 diffractionMaxEdges;
    int32 diffractionMaxPaths;
    float diffractionMaxPathLength;
    uint8 DrawFirstOrderReflections;
    uint8 DrawSecondOrderReflections;
    uint8 DrawHigherOrderReflections;
    uint8 DrawDiffraction;
    bool StopWhenOwnerDestroyed;
    float AttenuationScalingFactor;
    float OcclusionRefreshInterval;
    bool bUseReverbVolumes;
    bool bUpdateReverbVolumesLocation;

    void UseReverbVolumes(bool inUseReverbVolumes);
    void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState, const bool _bReplicates);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, FString RTPC, const bool _bReplicates);
    void SetOutputBusVolume(float BusVolume);
    void SetListeners(const TArray<class UAkComponent*>& Listeners);
    void SetEarlyReflectionsVolume(float SendVolume);
    void SetEarlyReflectionsAuxBus(FString AuxBusName);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);
    void PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAkEventByName(FString in_EventName);
    void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    void OnComponentStartOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnComponentEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32 PlayingID);
    float GetAttenuationRadius();
};

class UAkAudioInputComponent : public UAkComponent
{

    int32 PostAssociatedAudioInputEvent();
};

class UAkAuxBus : public UAkAssetBase
{
    class UAkAudioBank* RequiredBank;

};

struct FAkBoolPropertyToControl
{
    FString ItemProperty;

};

struct FAkWwiseObjectDetails
{
    FString ItemName;
    FString ItemPath;
    FString ItemId;

};

struct FAkWwiseItemToControl
{
    FAkWwiseObjectDetails ItemPicked;
    FString ItemPath;

};

class UAkCheckBox : public UContentWidget
{
    ECheckBoxState CheckedState;
    FAkCheckBoxCheckedStateDelegate CheckedStateDelegate;
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    bool IsFocusable;
    FAkBoolPropertyToControl ThePropertyToControl;
    FAkWwiseItemToControl ItemToControl;
    FAkCheckBoxAkOnCheckStateChanged AkOnCheckStateChanged;
    void AkOnCheckBoxComponentStateChanged(bool bIsChecked);
    FAkCheckBoxOnItemDropped OnItemDropped;
    void OnWwiseItemDropDetected(FGuid ItemDroppedID);
    FAkCheckBoxOnPropertyDropped OnPropertyDropped;
    void OnBoolPropertyDropDetected(FString PropertyDropped);

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    void SetAkItemId(const FGuid& ItemId);
    void SetAkBoolProperty(FString ItemProperty);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
    FString GetAkProperty();
    FGuid GetAkItemId();
};

class UAkChinookPlatformInfo : public UAkPlatformInfo
{
};

class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
{
};

class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
{
};

class UAkFolder : public UAkAudioType
{
    FString UnrealFolderPath;
    FString WwiseFolderPath;

};

struct FAkChannelMask
{
    int32 ChannelMask;

};

class UAkGameplayStatics : public UBlueprintFunctionLibrary
{

    void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
    void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void UnloadBankByName(FString BankName);
    void UnloadBankAsync(class UAkAudioBank* Bank, const FUnloadBankAsyncBankUnloadedCallback& BankUnloadedCallback);
    void UnloadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);
    void StopProfilerCapture();
    void StopOutputCapture();
    void StopAllAmbientSounds(class UObject* WorldContextObject);
    void StopAll();
    void StopActor(class AActor* Actor);
    void StartProfilerCapture(FString Filename);
    void StartOutputCapture(FString Filename);
    void StartAllAmbientSounds(class UObject* WorldContextObject);
    class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy, const bool _bReplicates);
    void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState, const bool bReplicates);
    void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State, const class UObject* _worldContextObject, const bool bReplicates, const bool bSaveGame);
    void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);
    void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC, const class UObject* _worldContextObject, const bool _bReplicates);
    void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    void SetPanningRule(PanningRule PanRule);
    void SetOutputBusVolume(float BusVolume, class AActor* Actor);
    void SetOcclusionScalingFactor(float ScalingFactor);
    void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
    void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetCurrentAudioCultureAsync(FString AudioCulture, const FSetCurrentAudioCultureAsyncCompleted& Completed);
    void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);
    void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);
    class UAkComponent* SCGetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated);
    void ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC);
    void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);
    void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
    int32 PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName);
    void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject, const bool _bReplicates);
    int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject, const bool _bReplicates);
    int32 PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, const FPostEventPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName, const bool _bReplicates);
    void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo);
    void LoadInitBank();
    void LoadBanks(const TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    void LoadBankByName(FString BankName);
    void LoadBankAsync(class UAkAudioBank* Bank, const FLoadBankAsyncBankLoadedCallback& BankLoadedCallback);
    void LoadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);
    bool IsGame(class UObject* WorldContextObject);
    bool IsEditor();
    void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);
    void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC);
    float GetOcclusionScalingFactor();
    FString GetCurrentAudioCulture();
    TArray<FString> GetAvailableAudioCultures();
    TMap<class FString, class FText> GetAkSupportedLanguagesWithDisplayText();
    class UObject* GetAkMediaAssetUserData(const class UAkMediaAsset* Instance, const UClass* Type);
    class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    class UObject* GetAkAudioTypeUserData(const class UAkAudioType* Instance, const UClass* Type);
    void ForceAkAudioDeviceUpdate();
    void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
    void ClearBanks();
    void CancelEventCallback(const FCancelEventCallbackPostEventCallback& PostEventCallback);
    void AddOutputCaptureMarker(FString MarkerText);
};

class UAkCallbackInfo : public UObject
{
    class UAkComponent* AkComponent;

};

class UAkEventCallbackInfo : public UAkCallbackInfo
{
    int32 PlayingID;
    int32 EventId;

};

struct FAkMidiEventBase
{
    EAkMidiEventType Type;
    uint8 Chan;

};

struct FAkMidiProgramChange : public FAkMidiEventBase
{
    uint8 ProgramNum;

};

struct FAkMidiPitchBend : public FAkMidiEventBase
{
    uint8 ValueLsb;
    uint8 ValueMsb;
    int32 FullValue;

};

struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
    uint8 Note;
    uint8 Velocity;

};

struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
    uint8 Note;
    uint8 Value;

};

struct FAkMidiGeneric : public FAkMidiEventBase
{
    uint8 Param1;
    uint8 Param2;

};

struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
    uint8 Value;

};

struct FAkMidiCc : public FAkMidiEventBase
{
    EAkMidiCcValues Cc;
    uint8 Value;

};

class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{

    EAkMidiEventType GetType();
    bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);
    bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);
    bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);
    bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);
    bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);
    bool GetGeneric(FAkMidiGeneric& AsGeneric);
    bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);
    uint8 GetChannel();
    bool GetCc(FAkMidiCc& AsCc);
};

class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
    int32 Identifier;
    int32 Position;
    FString Label;

};

class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
    float Duration;
    float EstimatedDuration;
    int32 AudioNodeID;
    int32 MediaID;
    bool bStreaming;

};

struct FAkSegmentInfo
{
    int32 CurrentPosition;
    int32 PreEntryDuration;
    int32 ActiveDuration;
    int32 PostExitDuration;
    int32 RemainingLookAheadTime;
    float BeatDuration;
    float BarDuration;
    float GridDuration;
    float GridOffset;

};

class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
    int32 PlayingID;
    FAkSegmentInfo SegmentInfo;
    EAkCallbackType MusicSyncType;
    FString UserCueName;

};

struct FAkGeometrySurfaceOverride
{
    class UAkAcousticTexture* AcousticTexture;
    uint8 bEnableOcclusionOverride;
    float OcclusionValue;

};

struct FAkAcousticSurface
{
    uint32 Texture;
    float Occlusion;
    FString Name;

};

struct FAkTriangle
{
    uint16 Point0;
    uint16 Point1;
    uint16 Point2;
    uint16 Surface;

};

struct FAkGeometryData
{
    TArray<FVector> Vertices;
    TArray<FAkAcousticSurface> Surfaces;
    TArray<FAkTriangle> Triangles;
    TArray<class UPhysicalMaterial*> ToOverrideAcousticTexture;
    TArray<class UPhysicalMaterial*> ToOverrideOcclusion;

};

class UAkGeometryComponent : public USceneComponent
{
    AkMeshType MeshType;
    int32 LOD;
    float WeldingThreshold;
    TMap<class UMaterialInterface*, class FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    uint8 bEnableDiffraction;
    uint8 bEnableDiffractionOnBoundaryEdges;
    class AActor* AssociatedRoom;
    FAkGeometryData GeometryData;

    void UpdateGeometry();
    void RemoveGeometry();
    void ConvertMesh();
};

class UAkGroupValue : public UAkAudioType
{
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaDependencies;
    uint32 GroupShortID;

};

struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool GlobalFocus;
    bool UseHeadMountedDisplayAudioDevice;

};

class UAkHololensInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkHololensAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkHololensPlatformInfo : public UAkPlatformInfo
{
};

struct FAkPluginInfo
{
    FString Name;
    uint32 PluginID;
    FString dll;

};

class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
    TArray<FAkPluginInfo> PluginInfos;

};

class UAkInitBank : public UAkAssetBase
{
    TArray<FString> AvailableAudioCultures;
    FString DefaultLanguage;

};

struct FAkAudioSession
{
    EAkAudioSessionCategory AudioSessionCategory;
    uint32 AudioSessionCategoryOptions;
    EAkAudioSessionMode AudioSessionMode;

};

class UAkIOSInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkAudioSession AudioSession;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettings AdvancedSettings;

};

class UAkIOSPlatformInfo : public UAkPlatformInfo
{
};

class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkBoolPropertyToControlToText(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    FString Conv_FAkBoolPropertyToControlToString(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

class UAkItemBoolProperties : public UWidget
{
    FAkItemBoolPropertiesOnSelectionChanged OnSelectionChanged;
    void OnItemBoolPropertySelectionChanged(FString PropertySelected);
    FAkItemBoolPropertiesOnPropertyDragged OnPropertyDragged;
    void OnItemBoolPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
};

struct FAkPropertyToControl
{
    FString ItemProperty;

};

class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);
    FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);
};

class UAkItemProperties : public UWidget
{
    FAkItemPropertiesOnSelectionChanged OnSelectionChanged;
    void OnItemPropertySelectionChanged(FString PropertySelected);
    FAkItemPropertiesOnPropertyDragged OnPropertyDragged;
    void OnItemPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
};

class UAkLateReverbComponent : public USceneComponent
{
    uint8 bEnable;
    class UAkAuxBus* AuxBus;
    FString AuxBusName;
    float SendLevel;
    float FadeRate;
    float Priority;
    class UAkLateReverbComponent* NextLowerPriorityComponent;

};

class UAkLinuxInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
};

class UAkLuminInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkLuminPlatformInfo : public UAkPlatformInfo
{
};

class UAkMacInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkMacPlatformInfo : public UAkPlatformInfo
{
};

class UAkMediaAssetData : public UObject
{
    bool IsStreamed;
    bool UseDeviceMemory;

};

class UAkMediaAsset : public UObject
{
    uint32 ID;
    bool AutoLoad;
    TArray<class UObject*> UserData;
    class UAkMediaAssetData* CurrentMediaAssetData;

};

class UAkLocalizedMediaAsset : public UAkMediaAsset
{
};

class UAkExternalMediaAsset : public UAkMediaAsset
{
};

class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
{
};

class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
{
};

class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
{
};

class IAkPlatformInitialisationSettingsBase : public IInterface
{
};

struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 ACPBatchBufferSize;
    bool UseHardwareCodecLowLatencyMode;

};

class UAkPS4InitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkPS4AdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkPS4PlatformInfo : public UAkPlatformInfo
{
};

struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHardwareCodecLowLatencyMode;
    bool bVorbisHwAcceleration;

};

class UAkPS5InitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkPS5AdvancedInitializationSettings AdvancedSettings;

};

class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
};

class UAkReplication : public UReplayReplicationComponentBase
{

    void MulticastSetSwitch(uint32 _uiGroupID, uint32 _uiValueID, class AActor* _actor);
    void MulticastSetState(uint32 _uiGroupID, uint32 _uiValueID);
    void MulticastSetRTPCValueWithName(FString _rtpcName, float _akRtpcValue, int32 _iInterpolationTimeMs, const class AActor* _actor);
    void MulticastSetRTPCValue(uint32 _uiRtpc, float _akRtpcValue, int32 _iInterpolationTimeMs, const class AActor* _actor);
    void MulticastPostEventAtLocation(FString _eventName, const FVector& _vLocation, const FRotator& _rotation);
    void MulticastPostEvent(FString _eventName, const class AActor* _owner, uint32 _uFlags);
};

class AAkReverbVolume : public AVolume
{
    uint8 bEnabled;
    class UAkAuxBus* AuxBus;
    FString AuxBusName;
    float SendLevel;
    float FadeRate;
    float Priority;
    class UAkLateReverbComponent* LateReverbComponent;

};

class UAkRoomComponent : public UAkGameObject
{
    uint8 bEnable;
    class UAkRoomComponent* NextLowerPriorityComponent;
    float Priority;
    float WallOcclusion;
    float AuxSendLevel;
    bool AutoPost;

};

class UAkRtpc : public UAkAudioType
{
};

struct FAkGeometrySurfacePropertiesToMap
{
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    float OcclusionValue;

};

class UAkSettings : public UObject
{
    uint8 MaxSimultaneousReverbVolumes;
    FFilePath WwiseProjectPath;
    FDirectoryPath WwiseSoundDataFolder;
    bool bAutoConnectToWAAPI;
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;
    TMap<class TSoftObjectPtr<UPhysicalMaterial>, class FAkGeometrySurfacePropertiesToMap> AkGeometryMap;
    bool SplitSwitchContainerMedia;
    bool SplitMediaPerFolder;
    bool UseEventBasedPackaging;
    bool EnableAutomaticAssetSynchronization;
    FString CommandletCommitMessage;
    TMap<class FString, class FText> MapOfWWiseCulture;
    TMap<class FString, class FString> UnrealCultureToWwiseCulture;
    bool AskedToUseNewAssetManagement;
    bool bEnableMultiCoreRendering;
    bool MigratedEnableMultiCoreRendering;
    bool FixupRedirectorsDuringMigration;
    FDirectoryPath WwiseWindowsInstallationPath;
    FFilePath WwiseMacInstallationPath;
    float ReverbVolumeUpdateDelay;

};

class UAkSettingsPerUser : public UObject
{
    FDirectoryPath WwiseWindowsInstallationPath;
    FFilePath WwiseMacInstallationPath;
    bool EnableAutomaticAssetSynchronization;
    FString WaapiIPAddress;
    uint32 WaapiPort;
    bool bAutoConnectToWAAPI;
    bool AutoSyncSelection;
    bool SuppressWwiseProjectPathWarnings;
    bool SoundDataGenerationSkipLanguage;

};

class UAkSlider : public UWidget
{
    float Value;
    FAkSliderValueDelegate ValueDelegate;
    float GetFloat();
    FSliderStyle WidgetStyle;
    TEnumAsByte<EOrientation> Orientation;
    FLinearColor SliderBarColor;
    FLinearColor SliderHandleColor;
    bool IndentHandle;
    bool Locked;
    float StepSize;
    bool IsFocusable;
    FAkPropertyToControl ThePropertyToControl;
    FAkWwiseItemToControl ItemToControl;
    FAkSliderOnValueChanged OnValueChanged;
    void AkOnFloatValueChangedEvent(float Value);
    FAkSliderOnItemDropped OnItemDropped;
    void OnItemDropDetected(FGuid ItemDroppedID);
    FAkSliderOnPropertyDropped OnPropertyDropped;
    void OnPropertyDropDetected(FString PropertyDropped);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(FString ItemProperty);
    void SetAkSliderItemId(const FGuid& ItemId);
    float GetValue();
    FString GetAkSliderItemProperty();
    FGuid GetAkSliderItemId();
};

class AAkSpatialAudioVolume : public AVolume
{
    class UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    class UAkLateReverbComponent* LateReverb;
    class UAkRoomComponent* Room;

};

class AAkSpotReflector : public AActor
{
    class UAkAuxBus* EarlyReflectionAuxBus;
    FString EarlyReflectionAuxBusName;
    class UAkAcousticTexture* AcousticTexture;
    float DistanceScalingFactor;
    float Level;

};

class UAkStateValue : public UAkGroupValue
{
};

struct FAkPoly
{
    class UAkAcousticTexture* Texture;
    float Occlusion;
    bool EnableSurface;

};

class UAkSurfaceReflectorSetComponent : public USceneComponent
{
    uint8 bEnableSurfaceReflectors;
    TArray<FAkPoly> AcousticPolys;
    uint8 bEnableDiffraction;
    uint8 bEnableDiffractionOnBoundaryEdges;
    class AActor* AssociatedRoom;

    void UpdateSurfaceReflectorSet();
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
};

struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
    EAkCommSystem CommunicationSystem;

};

class UAkSwitchInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithCommSelection CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
};

class UAkSwitchValue : public UAkGroupValue
{
};

class UAkTrigger : public UAkAudioType
{
};

class UAkTVOSInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkAudioSession AudioSession;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettings AdvancedSettings;

};

class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
};

struct FAkWaapiSubscriptionId
{
};

struct FAKWaapiJsonObject
{
};

struct FAkWaapiUri
{
    FString Uri;

};

class UAkWaapiCalls : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    FAKWaapiJsonObject SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FSubscribeToWaapiCallback& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    void SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 ID);
    bool RegisterWaapiProjectLoadedCallback(const FRegisterWaapiProjectLoadedCallbackCallback& Callback);
    bool RegisterWaapiConnectionLostCallback(const FRegisterWaapiConnectionLostCallbackCallback& Callback);
    int32 GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription);
    FText Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FString Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FAKWaapiJsonObject CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions);
};

struct FAkWaapiFieldNames
{
    FString FieldName;

};

class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
};

class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject SetStringField(const FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetNumberField(const FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetBoolField(const FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayStringFields(const FAkWaapiFieldNames& FieldName, const TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayObjectFields(const FAkWaapiFieldNames& FieldName, const TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target);
    FString GetStringField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject GetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    float GetNumberField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    int32 GetIntegerField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    bool GetBoolField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    TArray<FAKWaapiJsonObject> GetArrayField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
};

class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);
    FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);
};

struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool GlobalFocus;
    bool UseHeadMountedDisplayAudioDevice;

};

class UAkWindowsInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkWindowsAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkWin32PlatformInfo : public UAkPlatformInfo
{
};

class UAkWin64PlatformInfo : public UAkPlatformInfo
{
};

class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
};

struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool GlobalFocus;
    bool UseHeadMountedDisplayAudioDevice;

};

class UAkWinGDKInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkWinGDKAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
};

class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
};

class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
};

class UAkWwiseTree : public UWidget
{
    FAkWwiseTreeOnSelectionChanged OnSelectionChanged;
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeOnItemDragged OnItemDragged;
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

    void SetSearchText(FString newText);
    FAkWwiseObjectDetails GetSelectedItem();
    FString GetSearchText();
};

class UAkWwiseTreeSelector : public UWidget
{
    FAkWwiseTreeSelectorOnSelectionChanged OnSelectionChanged;
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeSelectorOnItemDragged OnItemDragged;
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

};

struct FAkXboxOneGDKApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;

};

struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;

};

class UAkXboxOneGDKInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
};

class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
};

class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
};

struct FAkXboxOneApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;

};

struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;

};

class UAkXboxOneInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXboxOneAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
};

struct FAkXSXApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;

};

struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;

};

class UAkXSXInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXSXApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXSXAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
};

class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
};

struct FAkAudioEventTrackKey
{
    float Time;
    class UAkAudioEvent* AkAudioEvent;
    FString EventName;

};

class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
    TArray<FAkAudioEventTrackKey> Events;
    uint8 bContinueEventOnMatineeEnd;

};

class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
    FString Param;
    uint8 bPlayOnReverse;
    uint8 bContinueRTPCOnMatineeEnd;

};

class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
    float LastUpdatePosition;

};

class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
    float LastUpdatePosition;

};

class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
    bool bReplicates;
    class UAkAudioEvent* Event;
    bool RetriggerEvent;
    int32 ScrubTailLengthMs;
    bool StopAtSectionEnd;
    FString EventName;
    float MaxSourceDuration;
    FString MaxDurationSourceID;

};

class UMovieSceneAkTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;
    uint8 bIsAMasterTrack;

};

class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
};

struct FMovieSceneTangentDataSerializationHelper
{
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    float ArriveTangentWeight;
    float LeaveTangentWeight;

};

struct FMovieSceneFloatValueSerializationHelper
{
    float Value;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    FMovieSceneTangentDataSerializationHelper Tangent;

};

struct FMovieSceneFloatChannelSerializationHelper
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    TArray<int32> Times;
    TArray<FMovieSceneFloatValueSerializationHelper> Values;
    float DefaultValue;
    bool bHasDefaultValue;

};

class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
    class UAkRtpc* RTPC;
    FString Name;
    FRichCurve FloatCurve;
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    FMovieSceneFloatChannel RTPCChannel;

};

class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
};

class UPostEventAsync : public UBlueprintAsyncActionBase
{
    FPostEventAsyncCompleted Completed;
    void PostEventAsyncOutputPin(int32 PlayingID);

    class UPostEventAsync* PostEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, const FPostEventAsyncPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
    void PollPostEventFuture();
};

class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
    FPostEventAtLocationAsyncCompleted Completed;
    void PostEventAtLocationAsyncOutputPin(int32 PlayingID);

    class UPostEventAtLocationAsync* PostEventAtLocationAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    void PollPostEventFuture();
};

struct FAkAmbSoundCheckpointRecord
{
    bool bCurrentlyPlaying;

};

struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioEventSection* Section;

};

struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioRTPCSection* Section;

};

#endif
