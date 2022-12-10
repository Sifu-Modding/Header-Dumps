#ifndef UE4SS_SDK_BP_AICharacter_Boss_Base_HPP
#define UE4SS_SDK_BP_AICharacter_Boss_Base_HPP

class ABP_AICharacter_Boss_Base_C : public ABP_AICharacter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* RainDrops;
    int32 CurrentPhaseTimeInSecond;
    FTimerHandle CurrentPhaseTimer;
    TArray<FName> BossPhases;
    int32 StructureBrokenCount;

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
};

#endif
