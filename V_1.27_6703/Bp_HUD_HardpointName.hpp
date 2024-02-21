#ifndef UE4SS_SDK_Bp_HUD_HardpointName_HPP
#define UE4SS_SDK_Bp_HUD_HardpointName_HPP

class UBp_HUD_HardpointName_C : public UUserWidget
{
    class UWidgetAnimation* NewName;                                                  // 0x0268 (size: 0x8)
    class UTextBlock* AreaNameText;                                                   // 0x0270 (size: 0x8)

    void Set Hardpoint Name();
    void PlayNewHardpointAnim();
}; // Size: 0x278

#endif
