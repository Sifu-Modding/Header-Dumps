#ifndef UE4SS_SDK_BP_ArenaChallenge_Base_HPP
#define UE4SS_SDK_BP_ArenaChallenge_Base_HPP

class UBP_ArenaChallenge_Base_C : public UArenaChallengeDescription
{
    FName MusicStartingPhase;                                                         // 0x0228 (size: 0x8)
    bool ScoringNotificationSFX;                                                      // 0x0230 (size: 0x1)
    class UTexture2D* Texture;                                                        // 0x0238 (size: 0x8)
    bool FocusGaugeNotificationSFX;                                                   // 0x0240 (size: 0x1)

}; // Size: 0x241

#endif
