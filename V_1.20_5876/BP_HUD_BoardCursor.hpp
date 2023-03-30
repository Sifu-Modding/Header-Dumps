#ifndef UE4SS_SDK_BP_HUD_BoardCursor_HPP
#define UE4SS_SDK_BP_HUD_BoardCursor_HPP

class UBP_HUD_BoardCursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Unzoom;                                                   // 0x0270 (size: 0x8)
    class UWidgetAnimation* Zoom;                                                     // 0x0278 (size: 0x8)
    class UImage* CenterTransparentImage;                                             // 0x0280 (size: 0x8)
    class UImage* CircleOutlineImage;                                                 // 0x0288 (size: 0x8)

    void PlayCursorTransitionAnim(float Scale, ECycleDirection Direction, float ZoomMin);
    void PlayHoverAnim(bool Reverse, float Scale, float ZoomMin, float ZoomMax);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_HUD_BoardCursor(int32 EntryPoint);
}; // Size: 0x290

#endif
