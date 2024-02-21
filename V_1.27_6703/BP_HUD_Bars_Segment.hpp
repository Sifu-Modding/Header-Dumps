#ifndef UE4SS_SDK_BP_HUD_Bars_Segment_HPP
#define UE4SS_SDK_BP_HUD_Bars_Segment_HPP

class UBP_HUD_Bars_Segment_C : public UUserWidget
{
    class UWidgetAnimation* OutVertical;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* OutHorizontal;                                            // 0x0270 (size: 0x8)
    class UBorder* BarSegment;                                                        // 0x0278 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0280 (size: 0x8)

    void OutAnimVertical();
    void OutAnimHorizontal();
    void Init(FVector2D bpp__InSize__pf, bool bpp__IsPositive__pf, HUD_Enum_BarSegmentOutAnim bpp__OutAnim__pf, float bpp__Duration__pf);
}; // Size: 0x288

#endif
