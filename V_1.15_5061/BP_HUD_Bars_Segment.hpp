#ifndef UE4SS_SDK_BP_HUD_Bars_Segment_HPP
#define UE4SS_SDK_BP_HUD_Bars_Segment_HPP

class UBP_HUD_Bars_Segment_C : public UUserWidget
{
    class UWidgetAnimation* OutVertical;
    class UWidgetAnimation* OutHorizontal;
    class UBorder* BarSegment;
    FTimerHandle Timer;

    void OutAnimVertical();
    void OutAnimHorizontal();
    void Init(FVector2D bpp__InSize__pf, bool bpp__IsPositive__pf, HUD_Enum_BarSegmentOutAnim bpp__OutAnim__pf, float bpp__Duration__pf);
};

#endif
