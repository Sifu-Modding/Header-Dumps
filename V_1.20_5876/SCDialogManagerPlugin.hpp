#ifndef UE4SS_SDK_SCDialogManagerPlugin_HPP
#define UE4SS_SDK_SCDialogManagerPlugin_HPP

#include "SCDialogManagerPlugin_enums.hpp"

struct FDialogActionArrayContainer
{
    TArray<class UDialogActionBase*> m_Array;                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLipSyncEmotionDataArray
{
    TArray<FLipSyncEmotionData> emotionArray;                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLipSyncPhonemeInPhraseArray
{
    TArray<FLipSyncPhonemeInPhrase> phonemeArray;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSCConversationInteractiveChoice
{
    float Timer;                                                                      // 0x0000 (size: 0x4)
    TArray<FSCConversationInteractiveReply> Replies;                                  // 0x0008 (size: 0x10)
    FName TimerExpiredNextSegment;                                                    // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FSCConversationInteractiveReply
{
    FName NextSegment;                                                                // 0x0000 (size: 0x8)
    FText Text;                                                                       // 0x0008 (size: 0x18)
    FText TextWithGender;                                                             // 0x0020 (size: 0x18)
    uint8 IconType;                                                                   // 0x0038 (size: 0x1)
    TArray<FSCConversationRule> Rules;                                                // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FSCConversationRule
{
    bool bIntendedResult;                                                             // 0x0000 (size: 0x1)
    bool bCheckGameplayTag;                                                           // 0x0001 (size: 0x1)
    FName Context;                                                                    // 0x0004 (size: 0x8)
    FName Key;                                                                        // 0x000C (size: 0x8)
    FSCDialogCondition DialogCondition;                                               // 0x0018 (size: 0x28)
    EOperationType Operation;                                                         // 0x0040 (size: 0x1)
    FString Value;                                                                    // 0x0048 (size: 0x10)
    FName GameplayTagOwner;                                                           // 0x0058 (size: 0x8)
    FGameplayTag RequiredGameplayTag;                                                 // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FSCConversationSegment
{
    TArray<FSCConversationRule> Rules;                                                // 0x0000 (size: 0x10)
    float m_fPlaySegmentProbability;                                                  // 0x0010 (size: 0x4)
    bool m_bValidOnlyInGroup;                                                         // 0x0014 (size: 0x1)
    FName DialogLine;                                                                 // 0x0018 (size: 0x8)
    FName NextSegment;                                                                // 0x0020 (size: 0x8)
    float MinDelayAtEnd;                                                              // 0x0028 (size: 0x4)
    float MaxDelayAtEnd;                                                              // 0x002C (size: 0x4)
    bool bDontSwitchListenerAndSpeaker;                                               // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSCConversationSegmentTableRow : public FTableRowBase
{
    bool m_bIsBarkContainer;                                                          // 0x0008 (size: 0x1)
    TArray<FSCConversationSegment> ConversationSegments;                              // 0x0010 (size: 0x10)
    TArray<class UDialogActionBase*> m_DialogActions;                                 // 0x0020 (size: 0x10)
    FName SpeakerId;                                                                  // 0x0030 (size: 0x8)
    FName ListenerId;                                                                 // 0x0038 (size: 0x8)
    FSCConversationInteractiveChoice InteractiveChoices;                              // 0x0040 (size: 0x20)
    bool m_bIgnoreCharacterCanSpeak;                                                  // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FSCDialogCondition
{
    FName Context;                                                                    // 0x0000 (size: 0x8)
    FName Key;                                                                        // 0x0008 (size: 0x8)
    FString Value;                                                                    // 0x0010 (size: 0x10)
    EOperationType Operation;                                                         // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSCDialogData
{
    FName AkEventName;                                                                // 0x0000 (size: 0x8)
    bool bUseLipSync;                                                                 // 0x0008 (size: 0x1)
    TMap<float, float> Envelope;                                                      // 0x0010 (size: 0x50)
    TMap<float, float> EnvelopeForChinese;                                            // 0x0060 (size: 0x50)
    TMap<float, float> EnvelopeForCantonese;                                          // 0x00B0 (size: 0x50)
    TMap<uint16, FLipSyncPhonemeInPhraseArray> phonemeInPhrase;                       // 0x0100 (size: 0x50)
    TMap<uint16, FLipSyncPhonemeInPhraseArray> phonemeInPhraseInChinese;              // 0x0150 (size: 0x50)
    TMap<uint16, FLipSyncPhonemeInPhraseArray> phonemeInPhraseInCantonese;            // 0x01A0 (size: 0x50)
    TMap<uint16, FLipSyncEmotionDataArray> emotionsInPhrase;                          // 0x01F0 (size: 0x50)
    FLipSyncPhonemeInPhraseArray m_phonemeForTest;                                    // 0x0240 (size: 0x10)
    FLipSyncPhonemeInPhraseArray m_phonemeForTestInChinese;                           // 0x0250 (size: 0x10)
    FLipSyncPhonemeInPhraseArray m_phonemeForTestInCantonese;                         // 0x0260 (size: 0x10)
    FLipSyncEmotionDataArray m_emotionForTest;                                        // 0x0270 (size: 0x10)
    class UAkAudioEvent* AkEventObj;                                                  // 0x0280 (size: 0x8)
    FName AkEventAltName;                                                             // 0x0288 (size: 0x8)
    TMap<float, float> EnvelopeAlt;                                                   // 0x0290 (size: 0x50)
    TMap<float, float> EnvelopeAltForChinese;                                         // 0x02E0 (size: 0x50)
    TMap<float, float> EnvelopeAltForCantonese;                                       // 0x0330 (size: 0x50)
    class UAkAudioEvent* AkEventAltObj;                                               // 0x0380 (size: 0x8)
    FText Subtitles;                                                                  // 0x0388 (size: 0x18)
    FSCGestureContainer GestureContainer;                                             // 0x03A0 (size: 0x10)
    bool ShouldDisplayText;                                                           // 0x03B0 (size: 0x1)
    FText m_SubtitlesWithGender;                                                      // 0x03B8 (size: 0x18)
    TArray<FLipSyncPhonemeInPhrase> phonemeInPhraseWithGender;                        // 0x03D0 (size: 0x10)
    TArray<FLipSyncEmotionData> emotionsInPhraseWithGender;                           // 0x03E0 (size: 0x10)

}; // Size: 0x3F0

struct FSCDialogLineTableRow : public FTableRowBase
{
    TArray<FSCDialogData> DialogsVariations;                                          // 0x0008 (size: 0x10)
    int32 LinePriority;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSCEventNameToSoundFileTableRow : public FTableRowBase
{
    FString SoundName;                                                                // 0x0008 (size: 0x10)
    FString SoundNameChinese;                                                         // 0x0018 (size: 0x10)
    FString SoundNameCantonese;                                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UDialogActionBase : public UObject
{
    bool m_OnNodeStart;                                                               // 0x0028 (size: 0x1)

}; // Size: 0x30

class USCDialogComponent : public UBlackboardComponent
{
    FSCDialogComponentOnGenericDialogEvent OnGenericDialogEvent;                      // 0x01D0 (size: 0x10)
    void GenericDialogEventDelegate(FName EventTriggered);
    class UDataTable* m_ContextualDb;                                                 // 0x01E0 (size: 0x8)

    bool BPF_InitBlackBoardFromAsset(class UBlackboardData* _data);
}; // Size: 0x1E8

class USCDialogGameplayStatics : public UBlueprintFunctionLibrary
{

    void BPF_PlayDialogLine(class ACharacter* _character, FName _line, const bool _bGenericSubtitles);
    bool BPF_IsPlayingDialogLine(class ACharacter* _character);
    bool BPF_IsInvolvedInConversation(const class ACharacter* _character);
}; // Size: 0x28

class USCDialogPerUserSettings : public UDeveloperSettings
{
    FDirectoryPath m_DialogProjectPath;                                               // 0x0038 (size: 0x10)

}; // Size: 0x48

class USCDialogRealOverrideDb : public UDataAsset
{
    TArray<FDialogActionArrayContainer> m_FirstLinesActions;                          // 0x0030 (size: 0x10)
    FDialogActionArrayContainer m_LastLineActions;                                    // 0x0040 (size: 0x10)

}; // Size: 0x50

class USCDialogSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UDataTable> m_GenericDialogs;                                      // 0x0038 (size: 0x28)
    TSoftObjectPtr<UDataTable> m_GenericConversations;                                // 0x0060 (size: 0x28)
    TSoftObjectPtr<UDataTable> m_BarksGenericDialogs;                                 // 0x0088 (size: 0x28)
    TSoftObjectPtr<UDataTable> m_BarksGenericConversations;                           // 0x00B0 (size: 0x28)
    TSoftObjectPtr<UBlackboardData> m_GlobalFacts;                                    // 0x00D8 (size: 0x28)
    TSoftObjectPtr<UBlackboardData> m_ContextualFacts;                                // 0x0100 (size: 0x28)
    TSoftObjectPtr<UBlackboardData> m_CharacterFacts;                                 // 0x0128 (size: 0x28)
    TSoftObjectPtr<UDataTable> m_PhonemeDictionary;                                   // 0x0150 (size: 0x28)
    TSoftObjectPtr<UDataTable> m_ChinesePhonemeDictionary;                            // 0x0178 (size: 0x28)
    TSoftObjectPtr<UDataTable> m_CantonesePhonemeDictionary;                          // 0x01A0 (size: 0x28)
    bool m_bUseChineseDictionary;                                                     // 0x01C8 (size: 0x1)
    ELipSyncLanguage m_eWantedLanguageDictionary;                                     // 0x01C9 (size: 0x1)
    TSoftObjectPtr<UDataTable> m_EventToSoundFileTable;                               // 0x01D0 (size: 0x28)
    FString m_DialogCutEvent;                                                         // 0x01F8 (size: 0x10)
    FString m_DialogLineStartAkEvent;                                                 // 0x0208 (size: 0x10)
    FString m_DialogLineStopAkEvent;                                                  // 0x0218 (size: 0x10)
    float m_fDefaultTimeBetweenLines;                                                 // 0x0228 (size: 0x4)
    TSoftObjectPtr<USCDialogRealOverrideDb> m_DefaultDialogReal;                      // 0x0230 (size: 0x28)
    FDirectoryPath m_DialogSoundFilesPath;                                            // 0x0258 (size: 0x10)
    FDirectoryPath m_DialogEnvelopeFilesPath;                                         // 0x0268 (size: 0x10)
    FDirectoryPath m_DialogSoundFilesPathForChinese;                                  // 0x0278 (size: 0x10)
    FDirectoryPath m_DialogEnvelopeFilesPathForChinese;                               // 0x0288 (size: 0x10)
    FDirectoryPath m_DialogSoundFilesPathForCantonese;                                // 0x0298 (size: 0x10)
    FDirectoryPath m_DialogEnvelopeFilesPathForCantonese;                             // 0x02A8 (size: 0x10)

}; // Size: 0x2B8

#endif
