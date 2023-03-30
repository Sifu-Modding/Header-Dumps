#ifndef UE4SS_SDK_TrainingRoom_LD_HPP
#define UE4SS_SDK_TrainingRoom_LD_HPP

class ATrainingRoom_LD_C : public AThePlainesLDLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    FTimerHandle CoolDown;                                                            // 0x0488 (size: 0x8)
    bool OnCooldown;                                                                  // 0x0490 (size: 0x1)
    FTimerHandle HoldTimer;                                                           // 0x0498 (size: 0x8)
    float HoldDurationToLeave;                                                        // 0x04A0 (size: 0x4)
    class AFightingPlayerController* FightingPlayerController;                        // 0x04A8 (size: 0x8)
    bool IsPressed;                                                                   // 0x04B0 (size: 0x1)
    FTimerHandle HoldTimerToggleEnabled;                                              // 0x04B8 (size: 0x8)
    class ABP_TrainingManager_C* BP_TrainingManager_2_ExecuteUbergraph_TrainingRoom_LD_RefProperty; // 0x04C0 (size: 0x8)

    void ShowSkipButton();
    void CooldownEvent();
    void ReceiveBeginPlay();
    void HoldButton();
    void ReceiveTick(float DeltaSeconds);
    void UpInput();
    void LeftInput();
    void Leave();
    void CancelLeave();
    void RightInput();
    void TutorialInput();
    void ExecuteUbergraph_TrainingRoom_LD(int32 EntryPoint);
}; // Size: 0x4C8

#endif
