#ifndef UE4SS_SDK_BP_HUD_FocusSelector_Container_HPP
#define UE4SS_SDK_BP_HUD_FocusSelector_Container_HPP

class UBP_HUD_FocusSelector_Container_C : public UVitalPointWidget
{
    class UWidgetAnimation* PanelAnim;                                                // 0x0318 (size: 0x8)
    class UBP_HUD_FocusPanel_C* BP_HUD_FocusPanel;                                    // 0x0320 (size: 0x8)
    class UBP_HUD_FocusSelector_C* BP_HUD_FocusSelector;                              // 0x0328 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0330 (size: 0x8)
    class UTextBlock* DisabledText;                                                   // 0x0338 (size: 0x8)
    class UWidgetSwitcher* InputsSwitcher;                                            // 0x0340 (size: 0x8)
    class UProgressBar* LaunchTimer;                                                  // 0x0348 (size: 0x8)
    class UWidgetSwitcher* MessageSwitcher;                                           // 0x0350 (size: 0x8)
    class UScaleBox* ScaleBox_Focus_HUDResize;                                        // 0x0358 (size: 0x8)
    class UProgressBar* SelectTimer;                                                  // 0x0360 (size: 0x8)
    class AVitalPointActor* CurrentPoint;                                             // 0x0368 (size: 0x8)
    bool Temp_bool_Variable;                                                          // 0x0370 (size: 0x1)
    int32 Temp_int_Variable;                                                          // 0x0374 (size: 0x4)
    int32 Temp_int_Variable_1;                                                        // 0x0378 (size: 0x4)
    bool Temp_bool_Variable_1;                                                        // 0x037C (size: 0x1)
    FText Temp_text_Variable;                                                         // 0x0380 (size: 0x18)
    FText Temp_text_Variable_1;                                                       // 0x0398 (size: 0x18)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x03B0 (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x03E8 (size: 0x4)
    class AVitalPointActor* K2Node_Event__vitalPointOwner;                            // 0x03F0 (size: 0x8)
    int32 K2Node_Select_Default;                                                      // 0x03F8 (size: 0x4)
    FText K2Node_Select_Default_1;                                                    // 0x0400 (size: 0x18)

    void UpdateTimeStyle();
    void UpdateFocusPanel();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void OnPaint(FPaintContext& bpp__Context__pf);
    bool IsYang();
    void Init();
    void FocusValidated(class AVitalPointActor* bpp___vitalPointSelected__pf);
    void FocusLaunched(bool bpp___bCancel__pf);
    void BPE_OnVitalPointActorSet(class AVitalPointActor* bpp___vitalPointOwner__pf);
}; // Size: 0x418

#endif
