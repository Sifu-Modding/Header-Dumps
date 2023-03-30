#ifndef UE4SS_SDK_BP_HUD_Interface_HPP
#define UE4SS_SDK_BP_HUD_Interface_HPP

class IBP_HUD_Interface_C : public IInterface
{

    void ScaleHUD(bool bpp__SetDefault__pf);
    void GetHudScaleValue(float& bpp__Value__pf);
    void GetHUDEventDispatcher(class UObject*& bpp__EventDispatcher__pf);
}; // Size: 0x28

#endif
