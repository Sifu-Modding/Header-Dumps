#ifndef UE4SS_SDK_BPStatsComponent_MainChar_HPP
#define UE4SS_SDK_BPStatsComponent_MainChar_HPP

class UBPStatsComponent_MainChar_C : public UBPStatsComponent_C
{
    class UAIFightingComponent* CurrentBossAIComponent;
    bool InBossFight;
    FBPStatsComponent_MainChar_COnIsInBossFightChanged OnIsInBossFightChanged;
    void OnIsInBossFightChanged();
    class AFightingCharacter* TPSChar;
    EFightingState K2Node_CustomEvent__eFightingState;
    bool K2Node_CustomEvent__bPush;
    FBPStatsComponent_MainChar_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void AINotify(class UAIFightingComponent* bpp__Who__pf);
    bool K2Node_SwitchEnum_CmpSuccess;
    class UAIFightingComponent* K2Node_CustomEvent_Who;
    bool CallFunc_IsInBossSituation_bInBossSituation;
    ECharacterStat K2Node_Event__eStat;
    int32 K2Node_Event__previousValue;
    int32 K2Node_Event__currentValue;
    int32 K2Node_Event__iNbSparePointsWin;
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character;
    bool K2Node_DynamicCast_bSuccess;
    class AFightingCharacter* K2Node_DynamicCast_AsBP_TPSCharacter;
    bool K2Node_DynamicCast_bSuccess_1;
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character_1;
    bool K2Node_DynamicCast_bSuccess_2;
    FBPStatsComponent_MainChar_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    TEnumAsByte<EEndPlayReason::Type> K2Node_Event_EndPlayReason;
    FBPStatsComponent_MainChar_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    class AFightingCharacter* K2Node_DynamicCast_AsBP_TPSCharacter_1;
    bool K2Node_DynamicCast_bSuccess_3;

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
};

#endif
