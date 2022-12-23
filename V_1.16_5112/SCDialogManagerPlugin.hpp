#ifndef UE4SS_SDK_SCDialogManagerPlugin_HPP
#define UE4SS_SDK_SCDialogManagerPlugin_HPP

#include "SCDialogManagerPlugin_enums.hpp"

class UDialogActionBase : public UObject
{
    bool m_OnNodeStart;

};

class USCDialogComponent : public UBlackboardComponent
{
    FSCDialogComponentOnGenericDialogEvent OnGenericDialogEvent;
    void GenericDialogEventDelegate(FName EventTriggered);
    class UDataTable* m_ContextualDb;

    bool BPF_InitBlackBoardFromAsset(class UBlackboardData* _data);
};

class USCDialogGameplayStatics : public UBlueprintFunctionLibrary
{

    void BPF_PlayDialogLine(class ACharacter* _character, FName _line, const bool _bGenericSubtitles);
    bool BPF_IsPlayingDialogLine(class ACharacter* _character);
    bool BPF_IsInvolvedInConversation(const class ACharacter* _character);
};

struct FDialogActionArrayContainer
{
    TArray<class UDialogActionBase*> m_Array;

};

class USCDialogRealOverrideDb : public UDataAsset
{
    TArray<FDialogActionArrayContainer> m_FirstLinesActions;
    FDialogActionArrayContainer m_LastLineActions;

};

class USCDialogSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UDataTable> m_GenericDialogs;
    TSoftObjectPtr<UDataTable> m_GenericConversations;
    TSoftObjectPtr<UDataTable> m_BarksGenericDialogs;
    TSoftObjectPtr<UDataTable> m_BarksGenericConversations;
    TSoftObjectPtr<UBlackboardData> m_GlobalFacts;
    TSoftObjectPtr<UBlackboardData> m_ContextualFacts;
    TSoftObjectPtr<UBlackboardData> m_CharacterFacts;
    TSoftObjectPtr<UDataTable> m_PhonemeDictionary;
    TSoftObjectPtr<UDataTable> m_ChinesePhonemeDictionary;
    bool m_bUseChineseDictionary;
    TSoftObjectPtr<UDataTable> m_EventToSoundFileTable;
    FString m_DialogCutEvent;
    FString m_DialogLineStartAkEvent;
    FString m_DialogLineStopAkEvent;
    float m_fDefaultTimeBetweenLines;
    TSoftObjectPtr<USCDialogRealOverrideDb> m_DefaultDialogReal;
    FDirectoryPath m_DialogSoundFilesPath;
    FDirectoryPath m_DialogEnvelopeFilesPath;
    FDirectoryPath m_DialogSoundFilesPathForChinese;
    FDirectoryPath m_DialogEnvelopeFilesPathForChinese;

};

class USCDialogPerUserSettings : public UDeveloperSettings
{
    FDirectoryPath m_DialogProjectPath;

};

struct FSCDialogCondition
{
    FName Context;
    FName Key;
    FString Value;
    EOperationType Operation;

};

struct FSCConversationRule
{
    bool bIntendedResult;
    bool bCheckGameplayTag;
    FName Context;
    FName Key;
    FSCDialogCondition DialogCondition;
    EOperationType Operation;
    FString Value;
    FName GameplayTagOwner;
    FGameplayTag RequiredGameplayTag;

};

struct FSCConversationInteractiveReply
{
    FName NextSegment;
    FText Text;
    FText TextWithGender;
    uint8 IconType;
    TArray<FSCConversationRule> Rules;

};

struct FSCConversationInteractiveChoice
{
    float Timer;
    TArray<FSCConversationInteractiveReply> Replies;
    FName TimerExpiredNextSegment;

};

struct FLipSyncPhonemeInPhraseArray
{
    TArray<FLipSyncPhonemeInPhrase> phonemeArray;

};

struct FLipSyncEmotionDataArray
{
    TArray<FLipSyncEmotionData> emotionArray;

};

struct FSCDialogData
{
    FName AkEventName;
    bool bUseLipSync;
    TMap<float, float> Envelope;
    TMap<float, float> EnvelopeForChinese;
    TMap<uint16, FLipSyncPhonemeInPhraseArray> phonemeInPhrase;
    TMap<uint16, FLipSyncPhonemeInPhraseArray> phonemeInPhraseInChinese;
    TMap<uint16, FLipSyncEmotionDataArray> emotionsInPhrase;
    FLipSyncPhonemeInPhraseArray m_phonemeForTest;
    FLipSyncPhonemeInPhraseArray m_phonemeForTestInChinese;
    FLipSyncEmotionDataArray m_emotionForTest;
    class UAkAudioEvent* AkEventObj;
    FName AkEventAltName;
    TMap<float, float> EnvelopeAlt;
    TMap<float, float> EnvelopeAltForChinese;
    class UAkAudioEvent* AkEventAltObj;
    FText Subtitles;
    FSCGestureContainer GestureContainer;
    bool ShouldDisplayText;
    FText m_SubtitlesWithGender;
    TArray<FLipSyncPhonemeInPhrase> phonemeInPhraseWithGender;
    TArray<FLipSyncEmotionData> emotionsInPhraseWithGender;

};

struct FSCConversationSegment
{
    TArray<FSCConversationRule> Rules;
    float m_fPlaySegmentProbability;
    bool m_bValidOnlyInGroup;
    FName DialogLine;
    FName NextSegment;
    float MinDelayAtEnd;
    float MaxDelayAtEnd;
    bool bDontSwitchListenerAndSpeaker;

};

struct FSCConversationSegmentTableRow : public FTableRowBase
{
    bool m_bIsBarkContainer;
    TArray<FSCConversationSegment> ConversationSegments;
    TArray<class UDialogActionBase*> m_DialogActions;
    FName SpeakerId;
    FName ListenerId;
    FSCConversationInteractiveChoice InteractiveChoices;
    bool m_bIgnoreCharacterCanSpeak;

};

struct FSCEventNameToSoundFileTableRow : public FTableRowBase
{
    FString SoundName;

};

struct FSCDialogLineTableRow : public FTableRowBase
{
    TArray<FSCDialogData> DialogsVariations;
    int32 LinePriority;

};

#endif
