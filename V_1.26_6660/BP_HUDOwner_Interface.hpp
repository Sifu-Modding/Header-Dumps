#ifndef UE4SS_SDK_BP_HUDOwner_Interface_HPP
#define UE4SS_SDK_BP_HUDOwner_Interface_HPP

class IBP_HUDOwner_Interface_C : public IInterface
{

    void GetUseLockedText(bool& bpp__use__pf);
    void GetInteractionText(FInteractionTextStruct& bpp__text__pf);
    void GetInteractionLockedText(FText& bpp__text__pf);
    void ForceHideScoring(bool bpp__Hide__pf);
    void ForceHideFocus(bool bpp__Hide__pf);
}; // Size: 0x28

#endif
