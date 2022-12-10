#ifndef UE4SS_SDK_BP_AISituation_Boss_Sean_HPP
#define UE4SS_SDK_BP_AISituation_Boss_Sean_HPP

class ABP_AISituation_Boss_Sean_C : public ABP_AISituation_Boss_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector Sean Offset Wall BRK;
    class AFightingCharacter* FightingAI;

    void SeanFX(class AFightingCharacter* FightingCharacter, FName PhaseName);
    void BPE_OnEndAIPhaseChanged(class AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex, FName _currentPhaseName);
    void OnHittedStoppedAfterBurstTransition(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_AISituation_Boss_Sean(int32 EntryPoint);
};

#endif
