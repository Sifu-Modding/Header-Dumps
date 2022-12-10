#ifndef UE4SS_SDK_BP_HUD_FocusSelector_HPP
#define UE4SS_SDK_BP_HUD_FocusSelector_HPP

class UBP_HUD_FocusSelector_C : public USCUserWidget
{
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_1;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_2;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_3;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_4;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_5;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_6;
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_7;
    class UCanvasPanel* CanvasSelector;
    class UBP_HUD_FocusVitalPoint_C* CentralPoint;
    class UImage* CircleSelector;
    float SelectionRadius;
    float InputLengthForSelection;
    class AFightingCharacter* CurrentTarget;
    FCameraLookAtServiceBehavior LookAt;
    int32 MidFightLockHandle;
    bool TickOnce;

    void UpdateTarget();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void OnPaint(FPaintContext& bpp__Context__pf);
    void NewTarget();
    void Init();
    void GetCurrentTargetPosition(FVector& bpp__Position__pf, bool& bpp__IsInvalid__pf);
};

#endif
