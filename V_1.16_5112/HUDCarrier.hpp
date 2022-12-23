#ifndef UE4SS_SDK_HUDCarrier_HPP
#define UE4SS_SDK_HUDCarrier_HPP

class IHUDCarrier_C : public IInterface
{

    void WidgetLocation(FVector& bpp__HUDLocation__pf);
    void Unregister Hud Listener(const TScriptInterface<class IHudCarrierListener_C>& bpp__Listener__pf__const);
    void ShouldDisplayStamina(bool& bpp__DisplayStamina__pf);
    void ShouldDisplayHealth(bool& bpp__DisplayHealth__pf);
    void Register Hud Listener(const TScriptInterface<class IHudCarrierListener_C>& bpp__Listener__pf__const);
    void Get Carried Hud Offset(FVector& bpp__WidgetxOffset__pfT);
};

#endif
