#ifndef UE4SS_SDK_BP_HUD_FocusVitalPoint_HPP
#define UE4SS_SDK_BP_HUD_FocusVitalPoint_HPP

class UBP_HUD_FocusVitalPoint_C : public USCUserWidget
{
    class UWidgetAnimation* StateSelected;                                            // 0x0310 (size: 0x8)
    class UWidgetAnimation* StateActivable;                                           // 0x0318 (size: 0x8)
    class UWidgetAnimation* StateNotEnoughPoints;                                     // 0x0320 (size: 0x8)
    class UWidgetAnimation* StateHidden;                                              // 0x0328 (size: 0x8)
    class UImage* PointImg;                                                           // 0x0330 (size: 0x8)
    VitalPointSlots FocusSlot;                                                        // 0x0338 (size: 0x1)
    BP_HUD_FocusVitalPointState LastState;                                            // 0x0339 (size: 0x1)
    class AActor* LastVitalPointActor;                                                // 0x0340 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0348 (size: 0x8)
    class AVitalPointActor* CallFunc_FindVitalPoint_Out;                              // 0x0350 (size: 0x8)
    BP_HUD_FocusVitalPointState CallFunc_GetState_State;                              // 0x0358 (size: 0x1)
    BP_HUD_FocusVitalPointState CallFunc_GetState_State_1;                            // 0x0359 (size: 0x1)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x035C (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x0394 (size: 0x4)
    class AVitalPointActor* CallFunc_FindVitalPoint_Out_1;                            // 0x0398 (size: 0x8)

    void UpdateWidgetFromState(BP_HUD_FocusVitalPointState bpp__State__pf, BP_HUD_FocusVitalPointState bpp__PrevState__pf);
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void Select();
    void GetState(BP_HUD_FocusVitalPointState& bpp__State__pf);
    void FindVitalPointActor(class AActor* bpp__Owner__pf, class AVitalPointActor*& bpp__Out__pf);
    void FindVitalPoint(class AVitalPointActor*& bpp__Out__pf);
    void ExecuteUbergraph_BP_HUD_FocusVitalPoint_0(int32 bpp__EntryPoint__pf);
    void Deselect();
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BPE_OnHidden();
}; // Size: 0x3A0

#endif
