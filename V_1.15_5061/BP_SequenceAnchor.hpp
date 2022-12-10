#ifndef UE4SS_SDK_BP_SequenceAnchor_HPP
#define UE4SS_SDK_BP_SequenceAnchor_HPP

class ABP_SequenceAnchor_C : public ASCSequenceAnchor
{
    class ULevelSequence* Cutscene;
    bool IGC_cutscene?;
    class ALevelSequenceActor* SpawnedCutScene;
    class ACameraActor* SpawnedCamera;
    class ACharacter* PlayerCharacter;
    class APlayerController* PlayerController;
    FTransform SnapCurrentActorTransform;
    FTransform SnapTargetTransform;
    TArray<FMovieSceneObjectBindingID> CutscenePlayerBinding;
    TArray<FMovieSceneObjectBindingID> CutsceneCameraBinding;
    FTransform CineCapsuleWorldPosition;
    FTransform CineCamWorldPosition;
    FTransform worldPositionBeforePlay;

};

#endif
