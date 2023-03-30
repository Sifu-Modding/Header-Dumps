#ifndef UE4SS_SDK_BPStatsComponent_MainChar_HPP
#define UE4SS_SDK_BPStatsComponent_MainChar_HPP

class UBPStatsComponent_MainChar_C : public UBPStatsComponent_C
{
    class UAIFightingComponent* CurrentBossAIComponent;                               // 0x0420 (size: 0x8)
    bool InBossFight;                                                                 // 0x0428 (size: 0x1)
    FBPStatsComponent_MainChar_COnIsInBossFightChanged OnIsInBossFightChanged;        // 0x0430 (size: 0x10)
    void OnIsInBossFightChanged();
    class AFightingCharacter* TPSChar;                                                // 0x0440 (size: 0x8)
    int32 iPreviousAge;                                                               // 0x0448 (size: 0x4)
    FBPStatsComponent_MainChar_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x044C (size: 0x10)
    void AINotify(class UAIFightingComponent* bpp__Who__pf);
    int32 Temp_int_Array_Index_Variable;                                              // 0x045C (size: 0x4)
    int32 K2Node_Event__iNbSparePointsWin;                                            // 0x0460 (size: 0x4)
    int32 Temp_int_Array_Index_Variable_1;                                            // 0x0464 (size: 0x4)
    EFightingState K2Node_CustomEvent__eFightingState;                                // 0x0468 (size: 0x1)
    bool K2Node_CustomEvent__bPush;                                                   // 0x0469 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x046A (size: 0x1)
    class UAIFightingComponent* K2Node_CustomEvent_Who;                               // 0x0470 (size: 0x8)
    int32 Temp_int_Loop_Counter_Variable;                                             // 0x0478 (size: 0x4)
    bool CallFunc_IsInBossSituation_bInBossSituation;                                 // 0x047C (size: 0x1)
    ECharacterStat K2Node_Event__eStat;                                               // 0x047D (size: 0x1)
    int32 K2Node_Event__previousValue;                                                // 0x0480 (size: 0x4)
    int32 K2Node_Event__currentValue;                                                 // 0x0484 (size: 0x4)
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character;                // 0x0488 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0490 (size: 0x1)
    class AFightingCharacter* K2Node_DynamicCast_AsBP_TPSCharacter;                   // 0x0498 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x04A0 (size: 0x1)
    FBPStatsComponent_MainChar_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x04A4 (size: 0x10)
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    TEnumAsByte<EEndPlayReason::Type> K2Node_Event_EndPlayReason;                     // 0x04B4 (size: 0x1)
    FBPStatsComponent_MainChar_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x04B8 (size: 0x10)
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    class AFightingCharacter* K2Node_DynamicCast_AsBP_TPSCharacter_1;                 // 0x04C8 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x04D0 (size: 0x1)
    TArray<class AAISituationActor*> CallFunc_BPF_GetAllActiveAiSituations__outAiSituations; // 0x04D8 (size: 0x10)
    class AAISituationActor* CallFunc_Array_Get_Item;                                 // 0x04E8 (size: 0x8)
    TArray<class UAIFightingComponent*> CallFunc_BPF_GetAis__outAiComponents;         // 0x04F0 (size: 0x10)
    int32 Temp_int_Loop_Counter_Variable_1;                                           // 0x0500 (size: 0x4)
    class UAIFightingComponent* CallFunc_Array_Get_Item_1;                            // 0x0508 (size: 0x8)
    class AFightingCharacter* K2Node_DynamicCast_AsBP_AICharacter_Boss_Base;          // 0x0510 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_3;                                               // 0x0518 (size: 0x1)

    void OnIsInBossFightChanged__DelegateSignature();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> bpp__EndPlayReason__pf);
    void ReceiveBeginPlay();
    void OnSpare(class UAIFightingComponent* bpp__Who__pf);
    void OnFightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void OnBossDefeated();
    void BPE_StatChanged(ECharacterStat bpp___eStat__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void BPE_SparePointsWin(int32 bpp___iNbSparePointsWin__pf);
    void FightingStateChanged__DelegateSignature(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void AINotify__DelegateSignature(class UAIFightingComponent* bpp__Who__pf);
}; // Size: 0x520

#endif
