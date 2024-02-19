#ifndef UE4SS_SDK_WBP_CharacterExportSettings_HPP
#define UE4SS_SDK_WBP_CharacterExportSettings_HPP

class UWBP_CharacterExportSettings_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWBP_ReplayCharacterPoseMenuItem_C* ChangeCharacterPose;                    // 0x0428 (size: 0x8)
    class UWBP_SpinBoxFloat_C* CharacterPoseCursor;                                   // 0x0430 (size: 0x8)
    class UWBP_SpinBoxFloatOptions_C* CharacterPosePositions;                         // 0x0438 (size: 0x8)
    class UWBP_SpinBoxFloat_C* CharacterRotation;                                     // 0x0440 (size: 0x8)
    class UWBP_ReplayHideActorMenuItem_C* HideActor;                                  // 0x0448 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0450 (size: 0x8)
    FWBP_CharacterExportSettings_COnInputAspectRatioUpdateDispatcher OnInputAspectRatioUpdateDispatcher; // 0x0458 (size: 0x10)
    void OnInputAspectRatioUpdateDispatcher();
    FWBP_CharacterExportSettings_COnInputHideActorUpdateDispatcher OnInputHideActorUpdateDispatcher; // 0x0468 (size: 0x10)
    void OnInputHideActorUpdateDispatcher();
    FWBP_CharacterExportSettings_COnInputFilterPresetUpdateDispatcher OnInputFilterPresetUpdateDispatcher; // 0x0478 (size: 0x10)
    void OnInputFilterPresetUpdateDispatcher();
    float CharacterPoseCursorProperty;                                                // 0x0488 (size: 0x4)
    float CharacterPosePositionProperty;                                              // 0x048C (size: 0x4)
    FRotator InitialControlRotation;                                                  // 0x0490 (size: 0xC)
    FRotator InitialCharacterRotation;                                                // 0x049C (size: 0xC)
    class AFightingCharacter* MainCharacter;                                          // 0x04A8 (size: 0x8)
    float CurrentRotationProperty;                                                    // 0x04B0 (size: 0x4)
    bool HasMainCharacter;                                                            // 0x04B4 (size: 0x1)
    bool Has Disabled Rotation Update;                                                // 0x04B5 (size: 0x1)

    void GetRootContainer(class UPanelWidget*& Widget);
    void OnCharacterRotationInputUpdate();
    void OnAnimationUpdated(bool bIsGameplayAnimation, const FAnimSequenceDBEntry& AnimSequenceDBEntry);
    void OnCharacterPosePositionInputUpdate();
    void UpdateCharacterPoseWithPosition();
    void OnCharacterPoseCursorInputUpdate();
    void OnHideActorInputUpdate();
    void OnParentRemoved();
    void BndEvt__WBP_ExportScreenMenu_ChangeCharacterPose_K2Node_ComponentBoundEvent_0_OnAnimationUpdatedDispatcher__DelegateSignature(bool bIsGameplayAnimation, FAnimSequenceDBEntry AnimationDBEntry);
    void BndEvt__WBP_ExportScreenMenu_ChangeCharacterPose_K2Node_ComponentBoundEvent_1_OnAnimationSequencesFiltered__DelegateSignature(bool bHasAnimation);
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void Construct();
    void ExecuteUbergraph_WBP_CharacterExportSettings(int32 EntryPoint);
    void OnInputFilterPresetUpdateDispatcher__DelegateSignature();
    void OnInputHideActorUpdateDispatcher__DelegateSignature();
    void OnInputAspectRatioUpdateDispatcher__DelegateSignature();
}; // Size: 0x4B6

#endif
