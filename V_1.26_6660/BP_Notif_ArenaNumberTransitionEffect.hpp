#ifndef UE4SS_SDK_BP_Notif_ArenaNumberTransitionEffect_HPP
#define UE4SS_SDK_BP_Notif_ArenaNumberTransitionEffect_HPP

class UBP_Notif_ArenaNumberTransitionEffect_C : public USCUserWidget
{
    class UWidgetAnimation* ValueTransitionAnim;                                      // 0x0310 (size: 0x8)
    class UTextBlock* NewDeathValue;                                                  // 0x0318 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0320 (size: 0x8)
    class UTextBlock* PreviousDeathValue;                                             // 0x0328 (size: 0x8)
    int32 PreviousValue;                                                              // 0x0330 (size: 0x4)

    void SetNewValue(int32 bpp__NewValue__pf);
    void SequenceEvent__ENTRYPOINTBP_Notif_ArenaNumberTransitionEffect_0();
    void EndGainAnim();
}; // Size: 0x338

#endif
