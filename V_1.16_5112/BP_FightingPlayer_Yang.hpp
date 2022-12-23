#ifndef UE4SS_SDK_BP_FightingPlayer_Yang_HPP
#define UE4SS_SDK_BP_FightingPlayer_Yang_HPP

class ABP_FightingPlayer_Yang_C : public ABP_FightingPlayer_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnTauntStart();
    void Init Default Skills();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FightingPlayer_Yang(int32 EntryPoint);
};

#endif
