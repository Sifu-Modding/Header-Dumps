#ifndef UE4SS_SDK_BP_BuildupFramesModifier_HPP
#define UE4SS_SDK_BP_BuildupFramesModifier_HPP

class UBP_BuildupFramesModifier_C : public UBP_GameplayCheatMaster_C
{
    float fBuildUpMult;                                                               // 0x0038 (size: 0x4)

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
}; // Size: 0x3C

#endif
