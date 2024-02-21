#ifndef UE4SS_SDK_WBP_ReplayCharacterPoseMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayCharacterPoseMenuItem_HPP

class UWBP_ReplayCharacterPoseMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    uint8 OptionIndex;                                                                // 0x0588 (size: 0x1)
    uint8 PreviousOptionIndex;                                                        // 0x0589 (size: 0x1)
    class UAnimSequenceDB* AnimSequenceDB;                                            // 0x0590 (size: 0x8)
    class AFightingCharacter* Character;                                              // 0x0598 (size: 0x8)
    class ABaseReplayController* ReplayController;                                    // 0x05A0 (size: 0x8)
    FWBP_ReplayCharacterPoseMenuItem_COnAnimationUpdatedDispatcher OnAnimationUpdatedDispatcher; // 0x05A8 (size: 0x10)
    void OnAnimationUpdatedDispatcher(bool bIsGameplayAnimation, FAnimSequenceDBEntry AnimationDBEntry);
    TArray<class UAnimSequenceEntryDB*> AnimSequenceDBs;                              // 0x05B8 (size: 0x10)
    TArray<FAnimSequenceDBEntry> FilteredAnimSequences;                               // 0x05C8 (size: 0x10)
    TArray<FText> DefaultEnumTexts;                                                   // 0x05D8 (size: 0x10)
    FWBP_ReplayCharacterPoseMenuItem_COnAnimationSequencesFiltered OnAnimationSequencesFiltered; // 0x05E8 (size: 0x10)
    void OnAnimationSequencesFiltered(bool bHasAnimation);
    FAnimSequenceDBCache AnimSequenceDBCache;                                         // 0x05F8 (size: 0x50)

    void UpdateCharacterClothing();
    void SetSingleNodeAnimationCursor(float AnimationPosition);
    void RestoreGameplayPose();
    void GetSelectedAnimSequence(class UAnimSequence*& AnimSequence);
    void GetSelectedAnimSequenceDBEntry(FAnimSequenceDBEntry& AnimSequenceDBEntry);
    void SetReplayController();
    void IsUsingSingleNodeAnimation(bool& Value);
    void IsSwitchingFromSingleNodeToAnimGraph(bool& Value);
    void IsSwitchingFromAnimGraphToSingleNodeAnimation(bool& Value);
    void OnOptionUpdated();
    void OnSetNextValue(ECycleDirection Direction);
    void BindProperty(class UWBP_ReplaySubMenuWithProperties_C* Owner);
    void Construct();
    void InitializeFilteredAnimSequences();
    void ExecuteUbergraph_WBP_ReplayCharacterPoseMenuItem(int32 EntryPoint);
    void OnAnimationSequencesFiltered__DelegateSignature(bool bHasAnimation);
    void OnAnimationUpdatedDispatcher__DelegateSignature(bool bIsGameplayAnimation, FAnimSequenceDBEntry AnimationDBEntry);
}; // Size: 0x648

#endif
