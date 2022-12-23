#ifndef UE4SS_SDK_Bp_HUD_HardpointName_HPP
#define UE4SS_SDK_Bp_HUD_HardpointName_HPP

class UBp_HUD_HardpointName_C : public UUserWidget
{
    class UWidgetAnimation* NewName;
    class UTextBlock* AreaNameText;

    void Set Hardpoint Name();
    void PlayNewHardpointAnim();
};

#endif
