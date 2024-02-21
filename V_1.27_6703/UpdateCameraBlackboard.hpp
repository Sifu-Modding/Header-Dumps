#ifndef UE4SS_SDK_UpdateCameraBlackboard_HPP
#define UE4SS_SDK_UpdateCameraBlackboard_HPP

class UUpdateCameraBlackboard_C : public UUpdateCameraBlackboardBTService
{
    class AFightingPlayerController* FightingPlayerC;                                 // 0x0238 (size: 0x8)
    FBlackboardKeySelector IsLocked;                                                  // 0x0240 (size: 0x28)
    float Dt;                                                                         // 0x0268 (size: 0x4)
    FBlackboardKeySelector IsDodging;                                                 // 0x0270 (size: 0x28)
    FBlackboardKeySelector IsAttacking;                                               // 0x0298 (size: 0x28)
    FBlackboardKeySelector IsHitted;                                                  // 0x02C0 (size: 0x28)
    FBlackboardKeySelector IsDead;                                                    // 0x02E8 (size: 0x28)
    FBlackboardKeySelector IsInFreeMove;                                              // 0x0310 (size: 0x28)
    FBlackboardKeySelector IsGuarding;                                                // 0x0338 (size: 0x28)
    FBlackboardKeySelector IsSpawning;                                                // 0x0360 (size: 0x28)
    class AActor* CurrentTarget;                                                      // 0x0388 (size: 0x8)
    FBlackboardKeySelector InFlyMode;                                                 // 0x0390 (size: 0x28)
    FBlackboardKeySelector IsInTakedown;                                              // 0x03B8 (size: 0x28)
    FBlackboardKeySelector LeftStickYValue;                                           // 0x03E0 (size: 0x28)
    FBlackboardKeySelector IsInTraversal;                                             // 0x0408 (size: 0x28)
    bool IsLockActive;                                                                // 0x0430 (size: 0x1)
    FBlackboardKeySelector IsInConfrontation;                                         // 0x0438 (size: 0x28)
    FBlackboardKeySelector IsInPrepFocus;                                             // 0x0460 (size: 0x28)
    FBlackboardKeySelector IsInFocusExecution;                                        // 0x0488 (size: 0x28)
    FBlackboardKeySelector eVelocityKey;                                              // 0x04B0 (size: 0x28)
    FBlackboardKeySelector IsInTraversalClimb;                                        // 0x04D8 (size: 0x28)
    FBlackboardKeySelector IsKnockdown;                                               // 0x0500 (size: 0x28)
    uint8 PlayingTakedown;                                                            // 0x0528 (size: 0x1)
    FBlackboardKeySelector InFocusValidated;                                          // 0x0530 (size: 0x28)
    FBlackboardKeySelector HasTargetLockMove;                                         // 0x0558 (size: 0x28)
    FBlackboardKeySelector IsInTraversalCinematic;                                    // 0x0580 (size: 0x28)
    FBlackboardKeySelector IsTgtOnSameSide;                                           // 0x05A8 (size: 0x28)
    TArray<class AActor*> AIsInFight;                                                 // 0x05D0 (size: 0x10)
    FBlackboardKeySelector IsInSynchroAttackVictim;                                   // 0x05E0 (size: 0x28)
    FBlackboardKeySelector WantLockOnTarget;                                          // 0x0608 (size: 0x28)
    FBlackboardKeySelector WantLockFollowing;                                         // 0x0630 (size: 0x28)
    bool WasActive;                                                                   // 0x0658 (size: 0x1)
    bool CamLockByAvoidSuccess;                                                       // 0x0659 (size: 0x1)
    bool CamLockByParrySuccess;                                                       // 0x065A (size: 0x1)
    bool CamLockByKillSomething;                                                      // 0x065B (size: 0x1)
    FBlackboardKeySelector Is1v1;                                                     // 0x0660 (size: 0x28)
    bool CamLockByThrow;                                                              // 0x0688 (size: 0x1)
    FBlackboardKeySelector Falling;                                                   // 0x0690 (size: 0x28)
    FCameraLookAtServiceBehavior LookAtReorientMidFight;                              // 0x06B8 (size: 0xE0)
    int32 MidFightLockHandle;                                                         // 0x0798 (size: 0x4)
    FBlackboardKeySelector TargetIsDown;                                              // 0x07A0 (size: 0x28)
    bool CamInCollision;                                                              // 0x07C8 (size: 0x1)
    FBlackboardKeySelector AngleDiffBetweenCurrentAndWanted;                          // 0x07D0 (size: 0x28)
    FBlackboardKeySelector IsInDialog;                                                // 0x07F8 (size: 0x28)
    FCameraLookAtServiceBehavior LookAtReorientMidFight_1v1;                          // 0x0820 (size: 0xE0)
    float TimerInCollision;                                                           // 0x0900 (size: 0x4)
    FCameraLookAtServiceBehavior LookAtReorientCollision;                             // 0x0908 (size: 0xE0)
    int32 HandleFreezeMirrorFromSequence;                                             // 0x09E8 (size: 0x4)
    int32 HandleFreezeMirrorFromAnimDrivenCam;                                        // 0x09EC (size: 0x4)
    FCameraLookAtServiceBehavior LookAtReorientCollision_1v1;                         // 0x09F0 (size: 0xE0)
    int32 LookAtPauseHandleInAnimDrivenCam;                                           // 0x0AD0 (size: 0x4)
    class AFightingCharacter* CurrentTgt;                                             // 0x0AD8 (size: 0x8)
    FCameraLookAtServiceBehavior LookAtReorientPush;                                  // 0x0AE0 (size: 0xE0)
    FBlackboardKeySelector IsInForcedTraversalCinematic;                              // 0x0BC0 (size: 0x28)
    FBlackboardKeySelector IsInGenericAttackSync;                                     // 0x0BE8 (size: 0x28)
    class UOrderComponent* OrderComponentOwner;                                       // 0x0C10 (size: 0x8)
    FBlackboardKeySelector AnimDrivenFov;                                             // 0x0C18 (size: 0x28)
    int32 LockFreezeHandle;                                                           // 0x0C40 (size: 0x4)
    int32 HidingZoneRepulsionFreezeHandle;                                            // 0x0C44 (size: 0x4)
    FBlackboardKeySelector AnimDrivenTakedownBlocked;                                 // 0x0C48 (size: 0x28)
    FBlackboardKeySelector AnimDrivenFocusBlocked;                                    // 0x0C70 (size: 0x28)
    FBlackboardKeySelector AnimDrivenAnimSyncGenericBlocked;                          // 0x0C98 (size: 0x28)
    FBlackboardKeySelector AnimDrivenAttackVictimBlocked;                             // 0x0CC0 (size: 0x28)
    FTimerHandle DelayBeforeRush_Timer;                                               // 0x0CE8 (size: 0x8)
    float DelayBeforeConsideredInRush;                                                // 0x0CF0 (size: 0x4)
    bool WantDelayedRush;                                                             // 0x0CF4 (size: 0x1)
    uint8 CurrentTakedownID;                                                          // 0x0CF5 (size: 0x1)
    int32 DeadZoneRepulsionFreezeHandle;                                              // 0x0CF8 (size: 0x4)
    FBlackboardKeySelector IsInSynchroAttackVictimBoss;                               // 0x0D00 (size: 0x28)
    FBlackboardKeySelector CameraTakedownLD;                                          // 0x0D28 (size: 0x28)
    float DelayAfterForceRush;                                                        // 0x0D50 (size: 0x4)
    FTimerHandle DelayBeforeReleaseRush;                                              // 0x0D58 (size: 0x8)
    bool ForceRush;                                                                   // 0x0D60 (size: 0x1)
    EFightingActionState K2Node_Event__eStateEntered_1;                               // 0x0D61 (size: 0x1)
    EFightingActionState K2Node_Event__eStateEntered;                                 // 0x0D62 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x0D63 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess_1;                                              // 0x0D64 (size: 0x1)
    EMenuEnum K2Node_CustomEvent__ePrevMenu;                                          // 0x0D65 (size: 0x1)
    EMenuEnum K2Node_CustomEvent__eNewMenu;                                           // 0x0D66 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess_2;                                              // 0x0D67 (size: 0x1)
    class AActor* K2Node_Event_OwnerActor_2;                                          // 0x0D68 (size: 0x8)
    bool Temp_bool_Variable;                                                          // 0x0D70 (size: 0x1)
    float CallFunc_GetInputAnalogStickState_StickX;                                   // 0x0D74 (size: 0x4)
    float CallFunc_GetInputAnalogStickState_StickY;                                   // 0x0D78 (size: 0x4)
    EGlobalBehaviors K2Node_CustomEvent_eGLobalBehaviors;                             // 0x0D7C (size: 0x1)
    class AActor* K2Node_Event_OwnerActor_1;                                          // 0x0D80 (size: 0x8)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0D88 (size: 0x10)
    void CurrentMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0D98 (size: 0x10)
    void GlobalBehaviorChanged(EGlobalBehaviors bpp__eGLobalBehaviors__pf);
    float Temp_float_Variable;                                                        // 0x0DA8 (size: 0x4)
    class AAIDirectorActor* CallFunc_GetActorOfClass_ReturnValue;                     // 0x0DB0 (size: 0x8)
    float Temp_float_Variable_1;                                                      // 0x0DB8 (size: 0x4)
    EFightingState K2Node_CustomEvent__eFightingState;                                // 0x0DBC (size: 0x1)
    bool K2Node_CustomEvent__bPush;                                                   // 0x0DBD (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0DC0 (size: 0x10)
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    EOrderType K2Node_Event__eOrderType_1;                                            // 0x0DD0 (size: 0x1)
    uint8 K2Node_Event__orderID_1;                                                    // 0x0DD1 (size: 0x1)
    EOrderType K2Node_Event__eOrderType;                                              // 0x0DD2 (size: 0x1)
    uint8 K2Node_Event__orderID;                                                      // 0x0DD3 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x0DD4 (size: 0x10)
    void OnFocusMechanicValidated(class AVitalPointActor* bpp___vitalPointSelected__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x0DE4 (size: 0x10)
    void OnFocusMechanicStop(bool bpp___bCancel__pf);
    class AVitalPointActor* K2Node_CustomEvent_VitalPoint;                            // 0x0DF8 (size: 0x8)
    bool K2Node_CustomEvent_Cancel;                                                   // 0x0E00 (size: 0x1)
    bool Temp_bool_Variable_1;                                                        // 0x0E01 (size: 0x1)
    bool Temp_bool_Variable_2;                                                        // 0x0E02 (size: 0x1)
    bool CallFunc_TgtsOnSameSide_bool;                                                // 0x0E03 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5; // 0x0E04 (size: 0x10)
    void OnAvoidSuccessDelegate(FHitRequest bpp___hitRequest__pf, FHitDefenseResult bpp___hitDefenseResult__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6; // 0x0E14 (size: 0x10)
    void KilldDelegate(class AActor* bpp__Victim__pf, bool bpp___bIsOnlyAssist__pf, bool bpp___bKillingBlow__pf, class AActor* bpp___Instigator__pf, const FDamageInfos& bpp___damageInfos__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7; // 0x0E24 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8; // 0x0E34 (size: 0x10)
    void MovementModeChangedSignature(class ACharacter* bpp__Character__pf, TEnumAsByte<EMovementMode> bpp__PrevMovementMode__pf, uint8 bpp__PreviousCustomMode__pf);
    class ACharacter* K2Node_CustomEvent_Character;                                   // 0x0E48 (size: 0x8)
    TEnumAsByte<EMovementMode> K2Node_CustomEvent_PrevMovementMode;                   // 0x0E50 (size: 0x1)
    uint8 K2Node_CustomEvent_PreviousCustomMode;                                      // 0x0E51 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9; // 0x0E54 (size: 0x10)
    void OnCameraAnimDrivenStateChanged(ECameraTransitionState bpp___eNewState__pf);
    ECameraTransitionState K2Node_CustomEvent__eNewState;                             // 0x0E64 (size: 0x1)
    class AActor* K2Node_Event_OwnerActor;                                            // 0x0E68 (size: 0x8)
    float K2Node_Event_DeltaSeconds;                                                  // 0x0E70 (size: 0x4)
    bool K2Node_SwitchEnum_CmpSuccess_3;                                              // 0x0E74 (size: 0x1)
    FCameraMirrorManagementConfig K2Node_MakeStruct_CameraMirrorManagementConfig;     // 0x0E78 (size: 0x20)
    bool Temp_bool_Variable_3;                                                        // 0x0E98 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10; // 0x0E9C (size: 0x10)
    void OnAttackHitDymanic(const FAttackHitRequest& bpp___hitRequest__pf, const FImpactResult& bpp___impactResult__pf, class AActor* bpp___hittedActor__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11; // 0x0EAC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    uint8 K2Node_CustomEvent__ID_12;                                                  // 0x0EBC (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_12;                     // 0x0EC0 (size: 0x8)
    EGlobalBehaviors Temp_byte_Variable;                                              // 0x0EC8 (size: 0x1)
    FNetOrderStructTraversalCine CallFunc_GetBaseNetOrderStruct__outNetOrderStruct;   // 0x0ED0 (size: 0x228)
    FCameraMirrorManagementConfig K2Node_MakeStruct_CameraMirrorManagementConfig_1;   // 0x10F8 (size: 0x20)
    uint8 K2Node_CustomEvent__ID_11;                                                  // 0x1118 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_11;                     // 0x1120 (size: 0x8)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12; // 0x1128 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13; // 0x1138 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    uint8 K2Node_CustomEvent__ID_10;                                                  // 0x1148 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_10;                     // 0x1150 (size: 0x8)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14; // 0x1158 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15; // 0x1168 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    uint8 K2Node_CustomEvent__ID_9;                                                   // 0x1178 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_9;                      // 0x1180 (size: 0x8)
    uint8 K2Node_CustomEvent__ID_8;                                                   // 0x1188 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_8;                      // 0x1190 (size: 0x8)
    bool CallFunc_IsHighPrioLDCameraOn_On;                                            // 0x1198 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_16 K2Node_CreateDelegate_OutputDelegate_16; // 0x119C (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_17 K2Node_CreateDelegate_OutputDelegate_17; // 0x11AC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    uint8 K2Node_CustomEvent__ID_7;                                                   // 0x11BC (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_7;                      // 0x11C0 (size: 0x8)
    uint8 K2Node_CustomEvent__ID_6;                                                   // 0x11C8 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_6;                      // 0x11D0 (size: 0x8)
    bool CallFunc_IsHighPrioLDCameraOn_On_1;                                          // 0x11D8 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_18 K2Node_CreateDelegate_OutputDelegate_18; // 0x11DC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_19 K2Node_CreateDelegate_OutputDelegate_19; // 0x11EC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    uint8 K2Node_CustomEvent__ID_5;                                                   // 0x11FC (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_5;                      // 0x1200 (size: 0x8)
    uint8 K2Node_CustomEvent__ID_4;                                                   // 0x1208 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_4;                      // 0x1210 (size: 0x8)
    bool CallFunc_IsHighPrioLDCameraOn_On_2;                                          // 0x1218 (size: 0x1)
    uint8 K2Node_CustomEvent__ID_3;                                                   // 0x1219 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_3;                      // 0x1220 (size: 0x8)
    uint8 K2Node_CustomEvent__ID_2;                                                   // 0x1228 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_2;                      // 0x1230 (size: 0x8)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_20 K2Node_CreateDelegate_OutputDelegate_20; // 0x1238 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_21 K2Node_CreateDelegate_OutputDelegate_21; // 0x1248 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    bool CallFunc_IsHighPrioLDCameraOn_On_3;                                          // 0x1258 (size: 0x1)
    class UFightingMovementComponent* K2Node_DynamicCast_AsFighting_Movement_Component; // 0x1260 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x1268 (size: 0x1)
    class AFightingPlayerController* K2Node_DynamicCast_AsFighting_Player_Controller; // 0x1270 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x1278 (size: 0x1)
    float CallFunc_BreakVector_X;                                                     // 0x127C (size: 0x4)
    float CallFunc_BreakVector_Y;                                                     // 0x1280 (size: 0x4)
    float CallFunc_BreakVector_Z;                                                     // 0x1284 (size: 0x4)
    class UFightingMovementComponent* K2Node_DynamicCast_AsFighting_Movement_Component_1; // 0x1288 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x1290 (size: 0x1)
    float K2Node_Select_Default;                                                      // 0x1294 (size: 0x4)
    TArray<class AActor*> CallFunc_BPF_GetValidTarget__arrayOfTarget;                 // 0x1298 (size: 0x10)
    FMinimalViewInfo CallFunc_GetCameraView_DesiredView;                              // 0x12B0 (size: 0x5F0)
    float CallFunc_BreakRotator_Roll;                                                 // 0x18A0 (size: 0x4)
    float CallFunc_BreakRotator_Pitch;                                                // 0x18A4 (size: 0x4)
    float CallFunc_BreakRotator_Yaw;                                                  // 0x18A8 (size: 0x4)
    float CallFunc_BreakVector_X_1;                                                   // 0x18AC (size: 0x4)
    float CallFunc_BreakVector_Y_1;                                                   // 0x18B0 (size: 0x4)
    float CallFunc_BreakVector_Z_1;                                                   // 0x18B4 (size: 0x4)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_22 K2Node_CreateDelegate_OutputDelegate_22; // 0x18B8 (size: 0x10)
    void CurrentMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_23 K2Node_CreateDelegate_OutputDelegate_23; // 0x18C8 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_24 K2Node_CreateDelegate_OutputDelegate_24; // 0x18D8 (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FNetOrderStructTakedown CallFunc_GetBaseNetOrderStruct__outNetOrderStruct_1;      // 0x18F0 (size: 0xDA0)
    class UPlayerAnim* K2Node_DynamicCast_AsPlayer_Anim;                              // 0x2690 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_3;                                               // 0x2698 (size: 0x1)
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character;                // 0x26A0 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_4;                                               // 0x26A8 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess_4;                                              // 0x26A9 (size: 0x1)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_25 K2Node_CreateDelegate_OutputDelegate_25; // 0x26AC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_26 K2Node_CreateDelegate_OutputDelegate_26; // 0x26BC (size: 0x10)
    void OrderStartingDynamicDelegate(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    FNetOrderStructTakedown CallFunc_GetBaseNetOrderStruct__outNetOrderStruct_2;      // 0x26D0 (size: 0xDA0)
    FUpdateCameraBlackboard_CK2Node_CreateDelegate_OutputDelegate_27 K2Node_CreateDelegate_OutputDelegate_27; // 0x3470 (size: 0x10)
    void DeathComponentDelegate();
    class AFightingCharacter* K2Node_DynamicCast_AsFighting_Character_1;              // 0x3480 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_5;                                               // 0x3488 (size: 0x1)
    FAnimNotifyEvent CallFunc_FindNotifyByClass__outFoundNotify;                      // 0x3490 (size: 0xB8)
    bool CallFunc_FindNotifyByClass__bOutFound;                                       // 0x3548 (size: 0x1)
    uint8 K2Node_CustomEvent__ID_1;                                                   // 0x3549 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent_1;                      // 0x3550 (size: 0x8)
    uint8 K2Node_CustomEvent__ID;                                                     // 0x3558 (size: 0x1)
    class UOrderComponent* K2Node_CustomEvent__OrderComponent;                        // 0x3560 (size: 0x8)
    bool CallFunc_IsHighPrioLDCameraOn_On_4;                                          // 0x3568 (size: 0x1)
    bool Temp_bool_Variable_4;                                                        // 0x3569 (size: 0x1)
    bool Temp_bool_Variable_5;                                                        // 0x356A (size: 0x1)
    bool Temp_bool_Variable_6;                                                        // 0x356B (size: 0x1)
    bool Temp_bool_Variable_7;                                                        // 0x356C (size: 0x1)
    bool K2Node_Select_Default_1;                                                     // 0x356D (size: 0x1)

    void UpdateVelocityKey();
    void UpdateTargetIsDown(class AActor* bpp__Object__pf);
    void UpdateLeftStickYKeyValue();
    void UpdateGuardingKey();
    void UpdateDialog();
    void UpdateCombatStatus();
    void UpdateCamInCollision(float bpp__DeltaTime__pf);
    void UpdateAngleDiff();
    void TraversalCineStart(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void ThrowSomeone(uint8 bpp___ID__pf, class UOrderComponent* bpp__NewParam__pf);
    void TgtsOnSameSide(bool& bpp__bool__pf);
    void SynchroAttackVictimStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void SynchroAttackVictimEnded(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void SynchroAttackVictimBossStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void SynchroAttackVictimBossEnded(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void StopTakedown();
    void SetInRush();
    void ReceiveTick(class AActor* bpp__OwnerActor__pf, float bpp__DeltaSeconds__pf);
    void ReceiveDeactivation(class AActor* bpp__OwnerActor__pf);
    void ReceiveActivation(class AActor* bpp__OwnerActor__pf);
    void OrderTakedownStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderTakedownEnded(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderInvertPositionStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderInvertPositionEnded(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderFocusInstigatorStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderFocusInstigatorEnded(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderAttackKnockDownStarted(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OrderAttackKnockDownEnded(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OnTakedownTargetDeath();
    void OnFocusValidated(class AVitalPointActor* bpp__VitalPoint__pf);
    void OnFocusStopped(bool bpp__Cancel__pf);
    void OnFightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void OnCameraAnimDrivenTransitionStateChanged(ECameraTransitionState bpp___eNewState__pf);
    void MovementModeChanged(class ACharacter* bpp__Character__pf, TEnumAsByte<EMovementMode> bpp__PrevMovementMode__pf, uint8 bpp__PreviousCustomMode__pf);
    void LaunchLookAtMidFight(FCameraLookAtServiceBehavior bpp__LookAtBehavior__pf, FString bpp__InString__pf__const, bool bpp__CheckCollisions__pf);
    void LaunchLookAt(int32 bpp__NbAIStillActiveToTest__pf, FString bpp__InString__pf__const);
    void KillSomeone(class AActor* bpp__Victim__pf, bool bpp___bIsOnlyAssist__pf, bool bpp___bKillingBlow__pf, class AActor* bpp___Instigator__pf, FDamageInfos& bpp___damage__pf);
    void IsNotLockedOrNotInCombat();
    void IsLockedAndInCombat();
    void IsHighPrioLDCameraOn(bool& bpp__On__pf);
    void InitKeys();
    void Init();
    void FreezeCombatAlgo(bool bpp__Freeze__pf, FString bpp__ContextString__pf__const, bool bpp__DisableDeadZoneRepulsion__pf);
    void EnteringLock();
    void DodgeLaunched();
    void DeactivateForceRush();
    void CurrentMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    void CanLaunchMidFightLookAt(int32 bpp__NbAIStillActiveToTest__pf, class AActor* bpp__RemovedxActor__pfT, FVector bpp__RefDir__pf, bool bpp__ByPassActiveLookAt__pf, float bpp__Range__pf, bool bpp__ByPassTgtSameSide__pf, bool& bpp__CanLaunch__pf);
    void CancelMidFightLookAt();
    void BPE_OnOrderStarting(EOrderType bpp___eOrderType__pf, uint8 bpp___orderId__pf);
    void BPE_OnOrderEnding(EOrderType bpp___eOrderType__pf, uint8 bpp___orderId__pf);
    void BPE_ExitState(EFightingActionState bpp___eStateEntered__pf);
    void BPE_EnterState(EFightingActionState bpp___eStateEntered__pf);
    void AvoidSuccess(const FHitRequest bpp___hitRequest__pf__const, const FHitDefenseResult bpp___hitDefenseResult__pf__const);
    void AttackHit(const FAttackHitRequest& bpp___hitRequest__pf__const, const FImpactResult& bpp___impactResult__pf__const, class AActor* bpp___hittedActor__pf);
    void AreAIsOnSameSide(class AActor* bpp__RemovedActor__pf, FVector bpp__RefDir__pf, float bpp__Range__pf, bool& bpp__AreOnSameSide__pf);
    void AIGlobalBehaviorChanged(EGlobalBehaviors bpp__eGLobalBehaviors__pf);
    void OrderStartingDynamicDelegate__DelegateSignature(uint8 bpp___ID__pf, class UOrderComponent* bpp___OrderComponent__pf);
    void OnFocusMechanicValidated__DelegateSignature(class AVitalPointActor* bpp___vitalPointSelected__pf);
    void OnFocusMechanicStop__DelegateSignature(bool bpp___bCancel__pf);
    void OnCameraAnimDrivenStateChanged__DelegateSignature(ECameraTransitionState bpp___eNewState__pf);
    void OnAvoidSuccessDelegate__DelegateSignature(FHitRequest bpp___hitRequest__pf, FHitDefenseResult bpp___hitDefenseResult__pf);
    void OnAttackHitDymanic__DelegateSignature(const FAttackHitRequest& bpp___hitRequest__pf, const FImpactResult& bpp___impactResult__pf, class AActor* bpp___hittedActor__pf);
    void MovementModeChangedSignature__DelegateSignature(class ACharacter* bpp__Character__pf, TEnumAsByte<EMovementMode> bpp__PrevMovementMode__pf, uint8 bpp__PreviousCustomMode__pf);
    void KilldDelegate__DelegateSignature(class AActor* bpp__Victim__pf, bool bpp___bIsOnlyAssist__pf, bool bpp___bKillingBlow__pf, class AActor* bpp___Instigator__pf, const FDamageInfos& bpp___damageInfos__pf);
    void GlobalBehaviorChanged__DelegateSignature(EGlobalBehaviors bpp__eGLobalBehaviors__pf);
    void FightingStateChanged__DelegateSignature(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void DeathComponentDelegate__DelegateSignature();
    void CurrentMenuChanged__DelegateSignature(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
}; // Size: 0x3570

#endif
