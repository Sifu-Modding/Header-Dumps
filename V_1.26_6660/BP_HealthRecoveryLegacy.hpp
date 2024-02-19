#ifndef UE4SS_SDK_BP_HealthRecoveryLegacy_HPP
#define UE4SS_SDK_BP_HealthRecoveryLegacy_HPP

class UBP_HealthRecoveryLegacy_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    bool isOutOfFight;                                                                // 0x0040 (size: 0x1)
    float fTimeTriggerRecovery;                                                       // 0x0044 (size: 0x4)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void HealthRecoveryLegacy(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    void ExecuteUbergraph_BP_HealthRecoveryLegacy(int32 EntryPoint);
}; // Size: 0x48

#endif
