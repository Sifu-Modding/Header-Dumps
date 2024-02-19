#ifndef UE4SS_SDK_BP_Vampire_HPP
#define UE4SS_SDK_BP_Vampire_HPP

class UBP_Vampire_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class UStatsComponent* StatComp;                                                  // 0x0040 (size: 0x8)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void m_OnDeathCounterDecrement_Event(int32 _iCount, class AActor* _actor, bool _bAllowDecrement);
    void ExecuteUbergraph_BP_Vampire(int32 EntryPoint);
}; // Size: 0x48

#endif
