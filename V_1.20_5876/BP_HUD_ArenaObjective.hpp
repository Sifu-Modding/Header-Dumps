#ifndef UE4SS_SDK_BP_HUD_ArenaObjective_HPP
#define UE4SS_SDK_BP_HUD_ArenaObjective_HPP

class UBP_HUD_ArenaObjective_C : public UUserWidget
{
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UImage* Objective_Image;                                                    // 0x0270 (size: 0x8)
    class URichTextBlock* ObjectiveType;                                              // 0x0278 (size: 0x8)

    void SetupChallengeType(const class UBaseArenaObjective* bpp__Object__pf__const, class UArenaChallengeDescription* bpp__ChallengeDesc__pf);
    void Init Objective();
    void CloseObjective();
}; // Size: 0x280

#endif
