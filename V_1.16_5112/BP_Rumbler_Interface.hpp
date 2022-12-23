#ifndef UE4SS_SDK_BP_Rumbler_Interface_HPP
#define UE4SS_SDK_BP_Rumbler_Interface_HPP

class IBP_Rumbler_Interface_C : public IInterface
{

    bool CanUseAdvancedVibration();
    void PlayRumble(float InIntensity, int32 InFrames, bool AffectsLeftLarge, bool AffectsLeftSmall, bool AffectsRightLarge, bool AffectsRightSmall);
};

#endif
