#ifndef UE4SS_SDK_Text2LipSync_HPP
#define UE4SS_SDK_Text2LipSync_HPP

#include "Text2LipSync_enums.hpp"

class ULipSyncDB : public UInheritedDataAsset
{
    float MorphLowerLimit;
    float MorphUpperLimit;
    float MinimumPhonemesInterval;
    float PauseFadeInTime;
    float PauseFadeOutTime;
    float PhonemeFadeInTime;
    float PhonemeFadeOutTime;
    float m_fPlayOffset;
    float EmotionBlendTime;
    float ShortEmotionHalfDuration;
    ELipSyncAnimType AnimationType;
    class UPoseAsset* m_PoseAsset;
    TMap<class EPhoneme, class FName> m_MorphTargetsMap;
    TMap<class FName, class FName> m_EmotionTargetsMap;
    TMap<class FName, class FName> m_FullIdleToDialogIdleTargetName;
    float m_fLipSyncCurveChannelBlendDuration;
    class UCurveFloat* m_PhonemeBlendInCurve;
    class UCurveFloat* m_PhonemeBlendOutCurve;
    float PauseMultiplier;
    float EnvelopeMultiplier;
    float EnvelopeVolumeMultiplier;
    float AudioMinTreshold;

};

struct FLipSync_TimedData
{
    float TimeOffset;
    float EndTime;
    FText Data;

};

struct FLipSync_TimedPhrase
{
    float TimeOffset;
    FName ItemName;
    uint8 Flag;

};

struct FLipSync_Phrase : public FTableRowBase
{
    class USoundBase* VoiceAsset;
    FLipSync_TimedData Subtitle;
    TArray<FLipSync_TimedPhrase> Notifies;

};

class UPhrasesList : public UObject
{
    TMap<class FName, class FLipSync_Phrase> Data;

    bool LoadFromDataTable(class UDataTable* DataTable);
    void GetPhraseFromList(const FName& Key, FLipSync_Phrase& ReturnValue);
};

struct FLipSync_Interval
{
    int32 PhonemeIndex;
    float StartTime;
    float EndTime;
    uint8 Flag;

};

struct FLipSync_Pause
{
    TArray<FLipSync_Interval> Pauses;

};

class USubtitlesCache : public UObject
{
    TMap<class FName, class FLipSync_Pause> Data;

    int32 SaveToDisk(FString Filename);
    int32 SaveToBinaryFile(FString FullFileName);
    bool RenameAsset(FString CurrentName, FString NewName);
    bool RemoveAsset(const class USoundBase* SoundAsset);
    int32 LoadFromDisk(FString Filename);
    int32 LoadFromBinaryFile(FString FullFileName);
    bool GetPausesForVoiceAsset(const class USoundBase* SoundAsset, TArray<FLipSync_Interval>& Pauses);
    void GetCachedKeys(TArray<FString>& CachedKeys);
    bool AddAsset(const class USoundBase* SoundAsset, const TArray<FLipSync_TimedPhrase>& PhraseData, const TArray<int32> PauseIndexes, const float PhraseDuration);
};

class USubtitlesFileSave : public USaveGame
{
    TMap<class FName, class FLipSync_Pause> Data;

};

struct FLipsyncData
{
};

class UTextLipSync : public UActorComponent
{
    class ULipSyncDB* m_LipSyncDB;
    FTextLipSyncOnNotifyExecuted OnNotifyExecuted;
    void SpeakingNotify(const FName& NotifyName, float CurrentTime);
    FTextLipSyncOnPlayingFinished OnPlayingFinished;
    void SpeakingEvent();
    FTextLipSyncOnSpeakingPause OnSpeakingPause;
    void SpeakingEventBool(bool State);
    FTextLipSyncOnTimelineChanged OnTimelineChanged;
    void SpeakingEvent();
    class USkeletalMeshComponent* ControlledMesh;
    FName MorphTargets;
    TMap<FName, float> MorphTargetRuntimeValue;
    TSet<FName> MorphTargetsList;
    bool bIsInitialized;
    bool bIsSpeaking;
    bool bIsSpeakingPhonemeInAudio;
    bool bSubtitleWasChanged;
    float PauseTime;
    float CurrentTime;
    float EnvelopeVolumeMultiplier;
    float PhraseDuration;
    int32 PreviousPhonemeIndex;
    int32 CurrentPhonemeIndex;
    int32 NextNotifyIndex;
    TArray<FLipSync_TimedPhrase> PhraseData;
    TArray<int32> PauseIndexes;
    TArray<FLipSync_TimedPhrase> PhraseNotifies;
    float CurrentIntervalDuration;

    bool StopSpeaking(bool bStopPlayingSound);
    bool Speak(const FLipsyncData& _lipsyncData, float _fDuration, bool _bUseImprovedTextToPhoneme);
    void SetSingleAnimationValue(const FName& _targetName, float _fValue);
    bool IsSpeaking();
    bool IsInitialized();
    void InitializePhonemesArray();
    float GetSpeakingTime();
    float GetLastPhraseDuration();
    float GetCurveValue(const FName& CurveName);
    void GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue);
    FString GetCurrentPhonemesLine();
    FString GetActiveMorphTargets();
    void BuildPhraseData(const FLipsyncData& _lipsyncData);
};

struct FStringArray
{
    TArray<FString> m_StringArray;

};

struct FLipSync_PhoneticRule
{
    bool bCondition_IsFirst;
    bool bCondition_IsLast;
    FString Condition_NextSymbol;
    TArray<EPhoneme> Result_Replace;
    bool bResult_RemoveNext;

};

#endif
