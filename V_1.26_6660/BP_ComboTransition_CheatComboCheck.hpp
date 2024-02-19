#ifndef UE4SS_SDK_BP_ComboTransition_CheatComboCheck_HPP
#define UE4SS_SDK_BP_ComboTransition_CheatComboCheck_HPP

class UBP_ComboTransition_CheatComboCheck_C : public UComboTransitionCondition
{
    bool AltPakMei;                                                                   // 0x00D8 (size: 0x1)
    bool Brawler;                                                                     // 0x00D9 (size: 0x1)
    bool Agile;                                                                       // 0x00DA (size: 0x1)

    FString BPE_GetLog();
    uint8 BPE_GetTargetNode(const class AFightingCharacter* _owner, const class AActor* _target);
}; // Size: 0xDB

#endif
