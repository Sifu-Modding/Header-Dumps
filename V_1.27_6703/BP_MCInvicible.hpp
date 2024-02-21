#ifndef UE4SS_SDK_BP_MCInvicible_HPP
#define UE4SS_SDK_BP_MCInvicible_HPP

class UBP_MCInvicible_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MCInvicible(int32 EntryPoint);
}; // Size: 0x40

#endif
