#ifndef UE4SS_SDK_BP_HUD_FocusPanel_HPP
#define UE4SS_SDK_BP_HUD_FocusPanel_HPP

class UBP_HUD_FocusPanel_C : public UVitalPointWidget
{
    class UWidgetAnimation* DisplayAnim;                                              // 0x0318 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x0320 (size: 0x8)
    class UTextBlock* DotTxt;                                                         // 0x0328 (size: 0x8)
    class UTextBlock* TxtEffect;                                                      // 0x0330 (size: 0x8)
    bool Consumable;                                                                  // 0x0338 (size: 0x1)

    void OnSelected(class AVitalPointActor* bpp__VitalPointLocal__pf, bool bpp__bSelected__pf);
    void Is Consumable(class AVitalPointActor* bpp__VitalPoint__pf, bool& bpp__Consumable__pf);
}; // Size: 0x340

#endif
