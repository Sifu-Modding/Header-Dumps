#ifndef UE4SS_SDK_BP_HUD_FocusSelector_HPP
#define UE4SS_SDK_BP_HUD_FocusSelector_HPP

class UBP_HUD_FocusSelector_C : public USCUserWidget
{
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint;                          // 0x0310 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_1;                        // 0x0318 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_2;                        // 0x0320 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_3;                        // 0x0328 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_4;                        // 0x0330 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_5;                        // 0x0338 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_6;                        // 0x0340 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* BP_HUD_FocusVitalPoint_7;                        // 0x0348 (size: 0x8)
    class UCanvasPanel* CanvasSelector;                                               // 0x0350 (size: 0x8)
    class UBP_HUD_FocusVitalPoint_C* CentralPoint;                                    // 0x0358 (size: 0x8)
    class UImage* CircleSelector;                                                     // 0x0360 (size: 0x8)
    float SelectionRadius;                                                            // 0x0368 (size: 0x4)
    float InputLengthForSelection;                                                    // 0x036C (size: 0x4)
    class AFightingCharacter* CurrentTarget;                                          // 0x0370 (size: 0x8)
    FCameraLookAtServiceBehavior LookAt;                                              // 0x0378 (size: 0xE0)
    int32 MidFightLockHandle;                                                         // 0x0458 (size: 0x4)
    bool TickOnce;                                                                    // 0x045C (size: 0x1)

    void UpdateTarget();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void OnPaint(FPaintContext& bpp__Context__pf);
    void NewTarget();
    void Init();
    void GetCurrentTargetPosition(FVector& bpp__Position__pf, bool& bpp__IsInvalid__pf);
}; // Size: 0x460

#endif
