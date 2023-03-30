#ifndef UE4SS_SDK_BP_HUD_Bars_Health_HPP
#define UE4SS_SDK_BP_HUD_Bars_Health_HPP

class UBP_HUD_Bars_Health_C : public USCUserWidget
{
    class UWidgetAnimation* ShieldBroke;                                              // 0x0310 (size: 0x8)
    class UWidgetAnimation* MaxHealthAnim;                                            // 0x0318 (size: 0x8)
    class UWidgetAnimation* MinibossTransform;                                        // 0x0320 (size: 0x8)
    class UWidgetAnimation* HealthBonus;                                              // 0x0328 (size: 0x8)
    class UProgressBar* BarRefill;                                                    // 0x0330 (size: 0x8)
    class UBP_HUD_Bars_Segment_C* BP_BarSegment;                                      // 0x0338 (size: 0x8)
    class UOverlay* BreakAnimOverlay;                                                 // 0x0340 (size: 0x8)
    class UImage* Damage;                                                             // 0x0348 (size: 0x8)
    class UImage* HalfShield1;                                                        // 0x0350 (size: 0x8)
    class UImage* HalfShield2;                                                        // 0x0358 (size: 0x8)
    class UProgressBar* Health_ProgressBar;                                           // 0x0360 (size: 0x8)
    class UScaleBox* HealthCursor;                                                    // 0x0368 (size: 0x8)
    class UImage* Image;                                                              // 0x0370 (size: 0x8)
    class UImage* LostMax;                                                            // 0x0378 (size: 0x8)
    class USizeBox* LostSize;                                                         // 0x0380 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0388 (size: 0x8)
    class UOverlay* ProtectionOverlay;                                                // 0x0390 (size: 0x8)
    class UImage* Shield;                                                             // 0x0398 (size: 0x8)
    class USizeBox* ShieldSizeBox;                                                    // 0x03A0 (size: 0x8)
    class UImage* SlashEffectImage;                                                   // 0x03A8 (size: 0x8)
    class USpacer* Spacer_HealthGauge;                                                // 0x03B0 (size: 0x8)
    float HealthPercent;                                                              // 0x03B8 (size: 0x4)
    FVector2D SizeBaseRef;                                                            // 0x03BC (size: 0x8)
    float CursorScale;                                                                // 0x03C4 (size: 0x4)
    bool NoAnim;                                                                      // 0x03C8 (size: 0x1)
    float MaxHealthBaseRef;                                                           // 0x03CC (size: 0x4)
    float LostHealth;                                                                 // 0x03D0 (size: 0x4)
    bool IsPlayer;                                                                    // 0x03D4 (size: 0x1)
    bool DisplayMaxHealth;                                                            // 0x03D5 (size: 0x1)
    bool ProtectionBroken;                                                            // 0x03D6 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x03D7 (size: 0x1)

    void UpdateSizeFromMaxHealth(float bpp__NewMaxHealth__pf);
    void UpdateSegment(float bpp__Local_Old__pf, float bpp__Local_New__pf);
    void UpdateHealth(float bpp__NewValue__pf, bool bpp__DisplaySegment__pf);
    void TriggerBreakAnimation();
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
    void ForceNoProtectionAndCancelAnim();
    void EffectHeal();
    void Construct();
    void CancelProtectionAnimation();
    void ActivateProtectionState();
}; // Size: 0x3D8

#endif
