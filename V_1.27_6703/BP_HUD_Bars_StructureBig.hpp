#ifndef UE4SS_SDK_BP_HUD_Bars_StructureBig_HPP
#define UE4SS_SDK_BP_HUD_Bars_StructureBig_HPP

class UBP_HUD_Bars_StructureBig_C : public USCUserWidget
{
    class UWidgetAnimation* StructureHit;                                             // 0x0310 (size: 0x8)
    class UWidgetAnimation* StructureBrokenStateExit;                                 // 0x0318 (size: 0x8)
    class UWidgetAnimation* StructureBrokenState;                                     // 0x0320 (size: 0x8)
    class UWidgetAnimation* StructureBrokenImpact;                                    // 0x0328 (size: 0x8)
    class UWidgetAnimation* ScaleShake;                                               // 0x0330 (size: 0x8)
    class UWidgetAnimation* VerticalShake;                                            // 0x0338 (size: 0x8)
    class UImage* Axis_Glow;                                                          // 0x0340 (size: 0x8)
    class UOverlay* Container_Overlay;                                                // 0x0348 (size: 0x8)
    class USizeBox* GaugeContainer;                                                   // 0x0350 (size: 0x8)
    class UImage* Icon_StructureBroken;                                               // 0x0358 (size: 0x8)
    class UImage* Structure_Axis;                                                     // 0x0360 (size: 0x8)
    class UProgressBar* Structure_Bar;                                                // 0x0368 (size: 0x8)
    class UImage* StructureBroken_01;                                                 // 0x0370 (size: 0x8)
    class UImage* StructureBroken_02;                                                 // 0x0378 (size: 0x8)
    class UImage* StructureBroken_03;                                                 // 0x0380 (size: 0x8)
    class UImage* StructureBroken_04;                                                 // 0x0388 (size: 0x8)
    class UObject* Structure;                                                         // 0x0390 (size: 0x8)
    class UHealthComponent* Health;                                                   // 0x0398 (size: 0x8)
    class UDefenseComponent* Defense;                                                 // 0x03A0 (size: 0x8)
    float Health Percent;                                                             // 0x03A8 (size: 0x4)
    float Structure Percent;                                                          // 0x03AC (size: 0x4)
    class AFightingCharacter* My Char;                                                // 0x03B0 (size: 0x8)
    bool StructureDisplayed;                                                          // 0x03B8 (size: 0x1)
    bool LowStructureDisplayed;                                                       // 0x03B9 (size: 0x1)
    FBP_HUD_Bars_StructureBig_COnStructureFull OnStructureFull;                       // 0x03C0 (size: 0x10)
    void OnStructureFull();
    bool GaugesDisplayed;                                                             // 0x03D0 (size: 0x1)
    EDangerStates CurrentDangerState;                                                 // 0x03D1 (size: 0x1)
    bool StructureBrokenDisplayed;                                                    // 0x03D2 (size: 0x1)
    FVector2D SizeBaseRef;                                                            // 0x03D4 (size: 0x8)
    float MaxStructureBaseRef;                                                        // 0x03DC (size: 0x4)
    float StructurePercentDisplayed;                                                  // 0x03E0 (size: 0x4)
    class UCurveFloat* StructureRebindCurve;                                          // 0x03E8 (size: 0x8)
    class AActor* Character;                                                          // 0x03F0 (size: 0x8)
    bool K2Node_Event__bPawnOnly;                                                     // 0x03F8 (size: 0x1)
    class AController* K2Node_CustomEvent_ControllerInstigator;                       // 0x0400 (size: 0x8)
    bool K2Node_CustomEvent_IsGuarding;                                               // 0x0408 (size: 0x1)
    EFightingState K2Node_CustomEvent__eFightingState;                                // 0x0409 (size: 0x1)
    bool K2Node_CustomEvent__bPush;                                                   // 0x040A (size: 0x1)
    FBP_HUD_Bars_StructureBig_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x040C (size: 0x10)
    void GuardBrokenDynamicDelegate();
    FBP_HUD_Bars_StructureBig_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x041C (size: 0x10)
    void WidgetAnimationDynamicEvent();
    class AActor* K2Node_CustomEvent_Character;                                       // 0x0430 (size: 0x8)
    FBP_HUD_Bars_StructureBig_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0438 (size: 0x10)
    void FightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);

    void OnStructureFull__DelegateSignature();
    void WhileGuardBroken();
    void Update Structure(float& bpp__StructurexPercent__pfT, bool& bpp__StructureImpacted__pf);
    void UpdateSizeFromMaxStructure(float bpp__NewMaxStructure__pf);
    void OverrideGaugeSize(float bpp__Length__pf, float bpp__Height__pf);
    void On Hitted(class AController* bpp__ControllerInstigator__pf, bool bpp__IsGuarding__pf);
    void OnPawnInitialized(class AActor* bpp__Character__pf);
    void OnGuardBroken();
    void OnFightingStateChanged(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
    void FetchCharacterComponents(class AActor* bpp__Actor__pf);
    void End GuardBroken();
    void BPE_UnbindFromDelegates();
    void BPE_BindToDelegates(bool bpp___bPawnOnly__pf);
    void GuardBrokenDynamicDelegate__DelegateSignature();
    void FightingStateChanged__DelegateSignature(EFightingState bpp___eFightingState__pf, bool bpp___bPush__pf);
}; // Size: 0x448

#endif
