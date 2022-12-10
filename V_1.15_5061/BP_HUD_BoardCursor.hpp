#ifndef UE4SS_SDK_BP_HUD_BoardCursor_HPP
#define UE4SS_SDK_BP_HUD_BoardCursor_HPP

class UBP_HUD_BoardCursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unzoom;
    class UWidgetAnimation* Zoom;
    class UImage* CenterTransparentImage;
    class UImage* CircleOutlineImage;

    void PlayCursorTransitionAnim(float Scale, ECycleDirection Direction, float ZoomMin);
    void PlayHoverAnim(bool Reverse, float Scale, float ZoomMin, float ZoomMax);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_HUD_BoardCursor(int32 EntryPoint);
};

#endif
