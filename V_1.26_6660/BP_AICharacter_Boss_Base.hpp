#ifndef UE4SS_SDK_BP_AICharacter_Boss_Base_HPP
#define UE4SS_SDK_BP_AICharacter_Boss_Base_HPP

class ABP_AICharacter_Boss_Base_C : public ABP_AICharacter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1FF0 (size: 0x8)
    class UNiagaraComponent* RainDrops;                                               // 0x1FF8 (size: 0x8)
    int32 CurrentPhaseTimeInSecond;                                                   // 0x2000 (size: 0x4)
    FTimerHandle CurrentPhaseTimer;                                                   // 0x2008 (size: 0x8)
    TArray<FName> BossPhases;                                                         // 0x2010 (size: 0x10)
    int32 StructureBrokenCount;                                                       // 0x2020 (size: 0x4)

    void IsCloseEnoughFromEnemy(bool& bIsCloseEnough);
    void SetXRayWantedCount(int32 InNewCount, bool bForce);
    void UserConstructionScript();
    void CurrentPhaseDuration();
    void PlayTimer();
    void ReceiveBeginPlay();
    void ClearTimer();
    void OnPhaseChanged(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void GuardBroken();
    void OnPoolablePreInitializeComponents();
    void Event_SetRainOnCharacter(bool Activate);
    void OnFirstStructureBrokenEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void PlayFullLifeDialogue();
    void ResetFullLifeDialogue();
    void ExecuteUbergraph_BP_AICharacter_Boss_Base(int32 EntryPoint);
}; // Size: 0x2024

#endif
