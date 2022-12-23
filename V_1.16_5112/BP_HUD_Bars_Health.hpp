#ifndef UE4SS_SDK_BP_HUD_Bars_Health_HPP
#define UE4SS_SDK_BP_HUD_Bars_Health_HPP

class UBP_HUD_Bars_Health_C : public USCUserWidget
{
    class UWidgetAnimation* MaxHealthAnim;
    class UWidgetAnimation* MinibossTransform;
    class UWidgetAnimation* HealthBonus;
    class UProgressBar* BarRefill;
    class UBP_HUD_Bars_Segment_C* BP_BarSegment;
    class UImage* Damage;
    class UProgressBar* Health_ProgressBar;
    class UScaleBox* HealthCursor;
    class UImage* LostMax;
    class USizeBox* LostSize;
    class UProgressBar* ProgressBar_0;
    class USpacer* Spacer_HealthGauge;
    float HealthPercent;
    FVector2D SizeBaseRef;
    float CursorScale;
    bool NoAnim;
    float MaxHealthBaseRef;
    float LostHealth;
    bool IsPlayer;
    bool DisplayMaxHealth;
    bool K2Node_Event_IsDesignTime;
    FUI_Base_Colors CallFunc_GetUI_Colors_BaseColors;
    FUI_GameplayColors CallFunc_GetUI_Colors_GameplayColors;
    FUI_ElementColors CallFunc_GetUI_Colors_ElementColors;

    void UpdateSizeFromMaxHealth(float bpp__NewMaxHealth__pf);
    void UpdateSegment(float bpp__Local_Old__pf, float bpp__Local_New__pf);
    void UpdateHealth(float bpp__NewValue__pf, bool bpp__DisplaySegment__pf);
    void StopMinibossTransform();
    void SetLostHealthSize();
    void SetImageSizeFromSizeBaseRef();
    void SetHealthSize(FVector2D bpp__InSize__pf);
    void SequenceEvent__ENTRYPOINTBP_HUD_Bars_Health_0();
    void ResetEffect();
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void PlayMinibossTransform();
    void OnStatChanged(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void MaxHealthDisplayed();
    void InitValues(float bpp__HealthPercent__pf);
    FLinearColor GetHealthColor();
    void EffectHeal();
};

#endif
