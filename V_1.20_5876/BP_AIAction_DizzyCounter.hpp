#ifndef UE4SS_SDK_BP_AIAction_DizzyCounter_HPP
#define UE4SS_SDK_BP_AIAction_DizzyCounter_HPP

class UBP_AIAction_DizzyCounter_C : public UAIActionAttack
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0158 (size: 0x8)
    FName AttackName;                                                                 // 0x0160 (size: 0x8)

    void BPE_OnPreCreateOrderAttackParams(FName _paramsName, class UOrderAttackParams* _orderParams);
    void ExecuteUbergraph_BP_AIAction_DizzyCounter(int32 EntryPoint);
}; // Size: 0x168

#endif
