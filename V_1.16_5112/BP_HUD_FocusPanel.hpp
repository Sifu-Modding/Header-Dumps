#ifndef UE4SS_SDK_BP_HUD_FocusPanel_HPP
#define UE4SS_SDK_BP_HUD_FocusPanel_HPP

class UBP_HUD_FocusPanel_C : public UVitalPointWidget
{
    class UWidgetAnimation* DisplayAnim;
    class UBP_Btn_Input_C* BP_Btn_Input;
    class UTextBlock* DotTxt;
    class UTextBlock* TxtEffect;
    bool Consumable;

    void OnSelected(class AVitalPointActor* bpp__VitalPointLocal__pf, bool bpp__bSelected__pf);
    void Is Consumable(class AVitalPointActor* bpp__VitalPoint__pf, bool& bpp__Consumable__pf);
};

#endif
