#ifndef UE4SS_SDK_WBP_ReplayCharacterPoseMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayCharacterPoseMenuItem_HPP

class UWBP_ReplayCharacterPoseMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    uint8 OptionIndex;
    uint8 PreviousOptionIndex;
    class UAnimSequenceDB* AnimSequenceDB;
    class AFightingCharacter* Character;
    class ABaseReplayController* ReplayController;
    FWBP_ReplayCharacterPoseMenuItem_COnAnimationUpdatedDispatcher OnAnimationUpdatedDispatcher;
    void OnAnimationUpdatedDispatcher(bool bIsGameplayAnimation, FAnimSequenceDBEntry AnimationDBEntry);
    TArray<class UAnimSequenceEntryDB*> AnimSequenceDBs;
    TArray<FAnimSequenceDBEntry> FilteredAnimSequences;
    TArray<FText> DefaultEnumTexts;
    FWBP_ReplayCharacterPoseMenuItem_COnAnimationSequencesFiltered OnAnimationSequencesFiltered;
    void OnAnimationSequencesFiltered(bool bHasAnimation);
    FAnimSequenceDBCache AnimSequenceDBCache;

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
};

#endif
