#ifndef UE4SS_SDK_Wuguan_LD_HPP
#define UE4SS_SDK_Wuguan_LD_HPP

class AWuguan_LD_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    int32 iHideoutNb;                                                                 // 0x0438 (size: 0x4)
    FString MapTags;                                                                  // 0x0440 (size: 0x10)
    bool NeedSave;                                                                    // 0x0450 (size: 0x1)
    TSoftObjectPtr<AActor> SkillTree;                                                 // 0x0458 (size: 0x28)
    int32 tmpAge;                                                                     // 0x0480 (size: 0x4)
    int32 tmpDeathCounter;                                                            // 0x0484 (size: 0x4)
    FTransform transformBeforeOutfitInteraction;                                      // 0x0490 (size: 0x30)
    class UWBP_ReplayManagement_C* RecordingReplayManagement;                         // 0x04C0 (size: 0x8)
    class ABP_CityViewMenu_C* BP_CityViewMenu_2_ExecuteUbergraph_Wuguan_LD_RefProperty; // 0x04C8 (size: 0x8)
    class ABP_WoodenDummy_TrainingRoom_C* BP_WoodenDummy_TrainingRoom_2_ExecuteUbergraph_Wuguan_LD_RefProperty; // 0x04D0 (size: 0x8)
    class ABP_PakMeiForms_Sequence_C* BP_PakMeiForms_Sequence_2_ExecuteUbergraph_Wuguan_LD_RefProperty; // 0x04D8 (size: 0x8)
    class AActor* OutfitInteraction_ExecuteUbergraph_Wuguan_LD_RefProperty;           // 0x04E0 (size: 0x8)
    class ALevelSequenceActor* SEQ_OutfitSelection_Wug4_11_EdGraph_1_RefProperty;     // 0x04E8 (size: 0x8)
    class ALevelSequenceActor* SEQ_OutfitSelection_Wug3_8_EdGraph_1_RefProperty;      // 0x04F0 (size: 0x8)
    class ALevelSequenceActor* SEQ_OutfitSelection_Wug2_5_EdGraph_1_RefProperty;      // 0x04F8 (size: 0x8)
    class ALevelSequenceActor* SEQ_OutfitSelection_Wug1_2_EdGraph_1_RefProperty;      // 0x0500 (size: 0x8)
    class ALevelSequenceActor* SEQ_OutfitSelection_Wug5_14_EdGraph_1_RefProperty;     // 0x0508 (size: 0x8)

    void GetOutfitSequence(class ALevelSequenceActor*& OutfitSequence);
    void GetHideoutNb(int32& HideoutNb);
    void ReceiveBeginPlay();
    void OnControlGiven();
    void FajarItemPickedUp(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void OnUseInteractionObject_Event(class APlayerController* PlayerController);
    void OnVisibilityChanged_Event(ESlateVisibility InVisibility);
    void OnContinueInteraction(bool _bContinue);
    void ExecuteUbergraph_Wuguan_LD(int32 EntryPoint);
}; // Size: 0x510

#endif
