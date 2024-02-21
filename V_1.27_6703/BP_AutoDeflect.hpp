#ifndef UE4SS_SDK_BP_AutoDeflect_HPP
#define UE4SS_SDK_BP_AutoDeflect_HPP

class UBP_AutoDeflect_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class UStatsComponent* StatComp;                                                  // 0x0040 (size: 0x8)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_AutoDeflect(int32 EntryPoint);
}; // Size: 0x48

#endif
