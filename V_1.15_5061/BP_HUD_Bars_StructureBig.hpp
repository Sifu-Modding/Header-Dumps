#ifndef UE4SS_SDK_BP_HUD_Bars_StructureBig_HPP
#define UE4SS_SDK_BP_HUD_Bars_StructureBig_HPP

class UBP_HUD_Bars_StructureBig_C : public USCUserWidget
{
    class UWidgetAnimation* StructureHit;
    class UWidgetAnimation* StructureBrokenStateExit;
    class UWidgetAnimation* StructureBrokenState;
    class UWidgetAnimation* StructureBrokenImpact;
    class UWidgetAnimation* ScaleShake;
    class UWidgetAnimation* VerticalShake;
    class UImage* Axis_Glow;
    class UOverlay* Container_Overlay;
    class USizeBox* GaugeContainer;
    class UImage* Icon_StructureBroken;
    class UImage* Structure_Axis;
    class UProgressBar* Structure_Bar;
    class UImage* StructureBroken_01;
    class UImage* StructureBroken_02;
    class UImage* StructureBroken_03;
    class UImage* StructureBroken_04;
    class UObject* Structure;
    class UHealthComponent* Health;
    class UDefenseComponent* Defense;
    float Health Percent;
    float Structure Percent;
    class AFightingCharacter* My Char;
    bool StructureDisplayed;
    bool LowStructureDisplayed;
    FBP_HUD_Bars_StructureBig_COnStructureFull OnStructureFull;
    void OnStructureFull();
    bool GaugesDisplayed;
    EDangerStates CurrentDangerState;
    bool StructureBrokenDisplayed;
    FVector2D SizeBaseRef;
    float MaxStructureBaseRef;
    float StructurePercentDisplayed;
    class UCurveFloat* StructureRebindCurve;
    class AActor* Character;
    bool K2Node_Event__bPawnOnly;
    class AController* K2Node_CustomEvent_ControllerInstigator;
    bool K2Node_CustomEvent_IsGuarding;
    EFightingState K2Node_CustomEvent__eFightingState;
    bool K2Node_CustomEvent__bPush;
    FBP_HUD_Bars_StructureBig_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void GuardBrokenDynamicDelegate();
    FBP_HUD_Bars_StructureBig_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void WidgetAnimationDynamicEvent();
    class AActor* K2Node_CustomEvent_Character;
    FBP_HUD_Bars_StructureBig_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
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
};

#endif
