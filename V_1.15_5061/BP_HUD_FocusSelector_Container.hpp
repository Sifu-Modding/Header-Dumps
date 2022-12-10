#ifndef UE4SS_SDK_BP_HUD_FocusSelector_Container_HPP
#define UE4SS_SDK_BP_HUD_FocusSelector_Container_HPP

class UBP_HUD_FocusSelector_Container_C : public UVitalPointWidget
{
    class UWidgetAnimation* PanelAnim;
    class UBP_HUD_FocusPanel_C* BP_HUD_FocusPanel;
    class UBP_HUD_FocusSelector_C* BP_HUD_FocusSelector;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* DisabledText;
    class UWidgetSwitcher* InputsSwitcher;
    class UProgressBar* LaunchTimer;
    class UWidgetSwitcher* MessageSwitcher;
    class UScaleBox* ScaleBox_Focus_HUDResize;
    class UProgressBar* SelectTimer;
    class AVitalPointActor* CurrentPoint;
    bool Temp_bool_Variable;
    int32 Temp_int_Variable;
    int32 Temp_int_Variable_1;
    bool Temp_bool_Variable_1;
    FText Temp_text_Variable;
    FText Temp_text_Variable_1;
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;
    class AVitalPointActor* K2Node_Event__vitalPointOwner;
    int32 K2Node_Select_Default;
    FText K2Node_Select_Default_1;

    void UpdateTimeStyle();
    void UpdateFocusPanel();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void OnPaint(FPaintContext& bpp__Context__pf);
    bool IsYang();
    void Init();
    void FocusValidated(class AVitalPointActor* bpp___vitalPointSelected__pf);
    void FocusLaunched(bool bpp___bCancel__pf);
    void BPE_OnVitalPointActorSet(class AVitalPointActor* bpp___vitalPointOwner__pf);
};

#endif
