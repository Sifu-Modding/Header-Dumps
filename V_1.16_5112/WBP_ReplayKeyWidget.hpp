#ifndef UE4SS_SDK_WBP_ReplayKeyWidget_HPP
#define UE4SS_SDK_WBP_ReplayKeyWidget_HPP

class UWBP_ReplayKeyWidget_C : public UWBP_ReplayKeyWidgetBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UImage* KeyImage;
    class UBP_Button_Over_C* OutlineFocus;
    FText Text;
    FLinearColor UnselectedColor;
    FSlateColor TextColor;
    bool Enabled;
    TEnumAsByte<EHorizontalAlignment> TextAlignment;
    bool AutoWrapButtonText;
    class UAkAudioEvent* OnFocusEvent;
    class UAkAudioEvent* OnClickEvent;
    class UTexture2D* CutTexture;
    bool TestHovered;

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
};

#endif
