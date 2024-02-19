#ifndef UE4SS_SDK_Text2LipSync_HPP
#define UE4SS_SDK_Text2LipSync_HPP

#include "Text2LipSync_enums.hpp"

struct FLipSync_Interval
{
    int32 PhonemeIndex;                                                               // 0x0000 (size: 0x4)
    float StartTime;                                                                  // 0x0004 (size: 0x4)
    float EndTime;                                                                    // 0x0008 (size: 0x4)
    uint8 Flag;                                                                       // 0x000C (size: 0x1)

}; // Size: 0x10

struct FLipSync_Pause
{
    TArray<FLipSync_Interval> Pauses;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLipSync_PhoneticRule
{
    bool bCondition_IsFirst;                                                          // 0x0000 (size: 0x1)
    bool bCondition_IsLast;                                                           // 0x0001 (size: 0x1)
    FString Condition_NextSymbol;                                                     // 0x0008 (size: 0x10)
    TArray<EPhoneme> Result_Replace;                                                  // 0x0018 (size: 0x10)
    bool bResult_RemoveNext;                                                          // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FLipSync_Phrase : public FTableRowBase
{
    class USoundBase* VoiceAsset;                                                     // 0x0008 (size: 0x8)
    FLipSync_TimedData Subtitle;                                                      // 0x0010 (size: 0x20)
    TArray<FLipSync_TimedPhrase> Notifies;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLipSync_TimedData
{
    float TimeOffset;                                                                 // 0x0000 (size: 0x4)
    float EndTime;                                                                    // 0x0004 (size: 0x4)
    FText Data;                                                                       // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FLipSync_TimedPhrase
{
    float TimeOffset;                                                                 // 0x0000 (size: 0x4)
    FName ItemName;                                                                   // 0x0008 (size: 0x8)
    uint8 Flag;                                                                       // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FLipsyncData
{
}; // Size: 0x90

struct FStringArray
{
    TArray<FString> m_StringArray;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

class ULipSyncDB : public UInheritedDataAsset
{
    float MorphLowerLimit;                                                            // 0x0038 (size: 0x4)
    float MorphUpperLimit;                                                            // 0x003C (size: 0x4)
    float MinimumPhonemesInterval;                                                    // 0x0040 (size: 0x4)
    float PauseFadeInTime;                                                            // 0x0044 (size: 0x4)
    float PauseFadeOutTime;                                                           // 0x0048 (size: 0x4)
    float PhonemeFadeInTime;                                                          // 0x004C (size: 0x4)
    float PhonemeFadeOutTime;                                                         // 0x0050 (size: 0x4)
    float m_fPlayOffset;                                                              // 0x0054 (size: 0x4)
    float EmotionBlendTime;                                                           // 0x0058 (size: 0x4)
    float ShortEmotionHalfDuration;                                                   // 0x005C (size: 0x4)
    ELipSyncAnimType AnimationType;                                                   // 0x0060 (size: 0x1)
    class UPoseAsset* m_PoseAsset;                                                    // 0x0068 (size: 0x8)
    TMap<class EPhoneme, class FName> m_MorphTargetsMap;                              // 0x0070 (size: 0x50)
    TMap<class FName, class FName> m_EmotionTargetsMap;                               // 0x00C0 (size: 0x50)
    TMap<class FName, class FName> m_FullIdleToDialogIdleTargetName;                  // 0x0110 (size: 0x50)
    float m_fLipSyncCurveChannelBlendDuration;                                        // 0x0160 (size: 0x4)
    class UCurveFloat* m_PhonemeBlendInCurve;                                         // 0x0168 (size: 0x8)
    class UCurveFloat* m_PhonemeBlendOutCurve;                                        // 0x0170 (size: 0x8)
    float PauseMultiplier;                                                            // 0x0178 (size: 0x4)
    float EnvelopeMultiplier;                                                         // 0x017C (size: 0x4)
    float EnvelopeVolumeMultiplier;                                                   // 0x0180 (size: 0x4)
    float AudioMinTreshold;                                                           // 0x0184 (size: 0x4)

}; // Size: 0x188

class UPhrasesList : public UObject
{
    TMap<class FName, class FLipSync_Phrase> Data;                                    // 0x0028 (size: 0x50)

    bool LoadFromDataTable(class UDataTable* DataTable);
    void GetPhraseFromList(const FName& Key, FLipSync_Phrase& ReturnValue);
}; // Size: 0x78

class USubtitlesCache : public UObject
{
    TMap<class FName, class FLipSync_Pause> Data;                                     // 0x0028 (size: 0x50)

    int32 SaveToDisk(FString Filename);
    int32 SaveToBinaryFile(FString FullFileName);
    bool RenameAsset(FString CurrentName, FString NewName);
    bool RemoveAsset(const class USoundBase* SoundAsset);
    int32 LoadFromDisk(FString Filename);
    int32 LoadFromBinaryFile(FString FullFileName);
    bool GetPausesForVoiceAsset(const class USoundBase* SoundAsset, TArray<FLipSync_Interval>& Pauses);
    void GetCachedKeys(TArray<FString>& CachedKeys);
    bool AddAsset(const class USoundBase* SoundAsset, const TArray<FLipSync_TimedPhrase>& PhraseData, const TArray<int32> PauseIndexes, const float PhraseDuration);
}; // Size: 0x78

class USubtitlesFileSave : public USaveGame
{
    TMap<class FName, class FLipSync_Pause> Data;                                     // 0x0028 (size: 0x50)

}; // Size: 0x78

class UTextLipSync : public UActorComponent
{
    class ULipSyncDB* m_LipSyncDB;                                                    // 0x00C0 (size: 0x8)
    FTextLipSyncOnNotifyExecuted OnNotifyExecuted;                                    // 0x00C8 (size: 0x10)
    void SpeakingNotify(const FName& NotifyName, float CurrentTime);
    FTextLipSyncOnPlayingFinished OnPlayingFinished;                                  // 0x00D8 (size: 0x10)
    void SpeakingEvent();
    FTextLipSyncOnSpeakingPause OnSpeakingPause;                                      // 0x00E8 (size: 0x10)
    void SpeakingEventBool(bool State);
    FTextLipSyncOnTimelineChanged OnTimelineChanged;                                  // 0x00F8 (size: 0x10)
    void SpeakingEvent();
    class USkeletalMeshComponent* ControlledMesh;                                     // 0x0110 (size: 0x8)
    FName MorphTargets;                                                               // 0x0118 (size: 0x88)
    TMap<FName, float> MorphTargetRuntimeValue;                                       // 0x01A0 (size: 0x50)
    TSet<FName> MorphTargetsList;                                                     // 0x0240 (size: 0x50)
    bool bIsInitialized;                                                              // 0x0290 (size: 0x1)
    bool bIsSpeaking;                                                                 // 0x0291 (size: 0x1)
    bool bIsSpeakingPhonemeInAudio;                                                   // 0x0292 (size: 0x1)
    bool bSubtitleWasChanged;                                                         // 0x0293 (size: 0x1)
    float PauseTime;                                                                  // 0x0294 (size: 0x4)
    float CurrentTime;                                                                // 0x0298 (size: 0x4)
    float EnvelopeVolumeMultiplier;                                                   // 0x029C (size: 0x4)
    float PhraseDuration;                                                             // 0x02A0 (size: 0x4)
    int32 PreviousPhonemeIndex;                                                       // 0x02A4 (size: 0x4)
    int32 CurrentPhonemeIndex;                                                        // 0x02A8 (size: 0x4)
    int32 NextNotifyIndex;                                                            // 0x02AC (size: 0x4)
    TArray<FLipSync_TimedPhrase> PhraseData;                                          // 0x02B0 (size: 0x10)
    TArray<int32> PauseIndexes;                                                       // 0x02D0 (size: 0x10)
    TArray<FLipSync_TimedPhrase> PhraseNotifies;                                      // 0x02E0 (size: 0x10)
    float CurrentIntervalDuration;                                                    // 0x0358 (size: 0x4)

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
}; // Size: 0x4E0

#endif
