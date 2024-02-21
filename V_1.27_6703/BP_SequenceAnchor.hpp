#ifndef UE4SS_SDK_BP_SequenceAnchor_HPP
#define UE4SS_SDK_BP_SequenceAnchor_HPP

class ABP_SequenceAnchor_C : public ASCSequenceAnchor
{
    class ULevelSequence* Cutscene;                                                   // 0x02E0 (size: 0x8)
    bool IGC_cutscene?;                                                               // 0x02E8 (size: 0x1)
    class ALevelSequenceActor* SpawnedCutScene;                                       // 0x02F0 (size: 0x8)
    class ACameraActor* SpawnedCamera;                                                // 0x02F8 (size: 0x8)
    class ACharacter* PlayerCharacter;                                                // 0x0300 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x0308 (size: 0x8)
    FTransform SnapCurrentActorTransform;                                             // 0x0310 (size: 0x30)
    FTransform SnapTargetTransform;                                                   // 0x0340 (size: 0x30)
    TArray<FMovieSceneObjectBindingID> CutscenePlayerBinding;                         // 0x0370 (size: 0x10)
    TArray<FMovieSceneObjectBindingID> CutsceneCameraBinding;                         // 0x0380 (size: 0x10)
    FTransform CineCapsuleWorldPosition;                                              // 0x0390 (size: 0x30)
    FTransform CineCamWorldPosition;                                                  // 0x03C0 (size: 0x30)
    FTransform worldPositionBeforePlay;                                               // 0x03F0 (size: 0x30)

}; // Size: 0x420

#endif
