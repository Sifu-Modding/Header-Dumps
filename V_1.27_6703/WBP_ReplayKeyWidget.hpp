#ifndef UE4SS_SDK_WBP_ReplayKeyWidget_HPP
#define UE4SS_SDK_WBP_ReplayKeyWidget_HPP

class UWBP_ReplayKeyWidget_C : public UWBP_ReplayKeyWidgetBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B0 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x08B8 (size: 0x8)
    class UImage* KeyImage;                                                           // 0x08C0 (size: 0x8)
    class UBP_Button_Over_C* OutlineFocus;                                            // 0x08C8 (size: 0x8)
    FText Text;                                                                       // 0x08D0 (size: 0x18)
    FLinearColor UnselectedColor;                                                     // 0x08E8 (size: 0x10)
    FSlateColor TextColor;                                                            // 0x08F8 (size: 0x28)
    bool Enabled;                                                                     // 0x0920 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> TextAlignment;                                  // 0x0921 (size: 0x1)
    bool AutoWrapButtonText;                                                          // 0x0922 (size: 0x1)
    class UAkAudioEvent* OnFocusEvent;                                                // 0x0928 (size: 0x8)
    class UAkAudioEvent* OnClickEvent;                                                // 0x0930 (size: 0x8)
    class UTexture2D* CutTexture;                                                     // 0x0938 (size: 0x8)
    bool TestHovered;                                                                 // 0x0940 (size: 0x1)

    void UpdateKeyVisuals();
    bool BPE_ApplyVisualsOverride(const FReplayKeyWidgetVisualKey& _key, FVector2D& _vSize);
    void ResetImageKeyState();
    void OnKeyStateUpdated();
    void SetStyle(float Angle, class UTexture2D* Texture);
    void SetBorderStyle(class UImage* Image, float Angle, class UTexture2D* Texture);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_ApplyVisuals(const FReplayKeyWidgetVisualData& _visuals);
    void BPE_OnSynchronizeProperties();
    void Construct();
    void BPE_OnSelectionUpdate(class UReplayKey* _key, bool _bIsSelected);
    void BPE_OnHoveringStateUpdate(class UReplayKey* _key, bool _bIsHovered);
    void ExecuteUbergraph_WBP_ReplayKeyWidget(int32 EntryPoint);
}; // Size: 0x941

#endif
