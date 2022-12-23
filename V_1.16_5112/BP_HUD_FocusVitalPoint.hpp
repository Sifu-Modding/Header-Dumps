#ifndef UE4SS_SDK_BP_HUD_FocusVitalPoint_HPP
#define UE4SS_SDK_BP_HUD_FocusVitalPoint_HPP

class UBP_HUD_FocusVitalPoint_C : public USCUserWidget
{
    class UWidgetAnimation* StateSelected;
    class UWidgetAnimation* StateActivable;
    class UWidgetAnimation* StateNotEnoughPoints;
    class UWidgetAnimation* StateHidden;
    class UImage* PointImg;
    VitalPointSlots FocusSlot;
    BP_HUD_FocusVitalPointState LastState;
    class AActor* LastVitalPointActor;
    class UTexture2D* Icon;
    class AVitalPointActor* CallFunc_FindVitalPoint_Out;
    BP_HUD_FocusVitalPointState CallFunc_GetState_State;
    BP_HUD_FocusVitalPointState CallFunc_GetState_State_1;
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;
    class AVitalPointActor* CallFunc_FindVitalPoint_Out_1;

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
};

#endif
