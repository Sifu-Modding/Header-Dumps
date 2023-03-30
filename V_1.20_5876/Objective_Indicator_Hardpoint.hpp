#ifndef UE4SS_SDK_Objective_Indicator_Hardpoint_HPP
#define UE4SS_SDK_Objective_Indicator_Hardpoint_HPP

class UObjective_Indicator_Hardpoint_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* Pulse;                                                    // 0x0318 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0320 (size: 0x8)
    class UBp_HUD_HardpointName_C* Bp_HUD_HardpointName;                              // 0x0328 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Arrow;                                            // 0x0330 (size: 0x8)
    class UImage* CenterImage;                                                        // 0x0338 (size: 0x8)
    class UOverlay* Hardpoint_Canvas;                                                 // 0x0340 (size: 0x8)
    class UScaleBox* HUDScaleBox;                                                     // 0x0348 (size: 0x8)
    class UImage* PulseImage;                                                         // 0x0350 (size: 0x8)
    class UImage* PulseImageExt;                                                      // 0x0358 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x0360 (size: 0x8)
    FVector LocToFocus;                                                               // 0x0368 (size: 0xC)
    FLinearColor ColorDefault;                                                        // 0x0374 (size: 0x10)
    FLinearColor ColorHidden;                                                         // 0x0384 (size: 0x10)
    class ABaseCharacter* Actor;                                                      // 0x0398 (size: 0x8)
    bool IsNTargetDead;                                                               // 0x03A0 (size: 0x1)
    bool Should NOTDisplay;                                                           // 0x03A1 (size: 0x1)
    bool Initialized;                                                                 // 0x03A2 (size: 0x1)
    bool Hardpoint;                                                                   // 0x03A3 (size: 0x1)
    FGeometry WidgetSize;                                                             // 0x03A4 (size: 0x38)
    float HUDEllipticRadiusY;                                                         // 0x03DC (size: 0x4)

    void OnOptionChanged(EGameOptionTypes eGameOptionType);
    void Set Loc(const FVector& WorldPosition);
    void Initialize();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShouldDisplayDot?(bool ShouldNOTDisplay);
    void Construct();
    void OnScaleHUD();
    void UpdateLocOfUIPoint(FVector WorldCoord);
    void ExecuteUbergraph_Objective_Indicator_Hardpoint(int32 EntryPoint);
}; // Size: 0x3E0

#endif
