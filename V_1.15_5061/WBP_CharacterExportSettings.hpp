#ifndef UE4SS_SDK_WBP_CharacterExportSettings_HPP
#define UE4SS_SDK_WBP_CharacterExportSettings_HPP

class UWBP_CharacterExportSettings_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_ReplayCharacterPoseMenuItem_C* ChangeCharacterPose;
    class UWBP_SpinBoxFloat_C* CharacterPoseCursor;
    class UWBP_SpinBoxFloatOptions_C* CharacterPosePositions;
    class UWBP_SpinBoxFloat_C* CharacterRotation;
    class UWBP_ReplayHideActorMenuItem_C* HideActor;
    class UVerticalBox* PropertiesVerticalBox;
    FWBP_CharacterExportSettings_COnInputAspectRatioUpdateDispatcher OnInputAspectRatioUpdateDispatcher;
    void OnInputAspectRatioUpdateDispatcher();
    FWBP_CharacterExportSettings_COnInputHideActorUpdateDispatcher OnInputHideActorUpdateDispatcher;
    void OnInputHideActorUpdateDispatcher();
    FWBP_CharacterExportSettings_COnInputFilterPresetUpdateDispatcher OnInputFilterPresetUpdateDispatcher;
    void OnInputFilterPresetUpdateDispatcher();
    float CharacterPoseCursorProperty;
    float CharacterPosePositionProperty;
    FRotator InitialControlRotation;
    FRotator InitialCharacterRotation;
    class AFightingCharacter* MainCharacter;
    float CurrentRotationProperty;
    bool HasMainCharacter;
    bool Has Disabled Rotation Update;

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
};

#endif
