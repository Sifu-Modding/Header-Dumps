#ifndef UE4SS_SDK_BP_HUD_RadialProgressBar_HPP
#define UE4SS_SDK_BP_HUD_RadialProgressBar_HPP

class UBP_HUD_RadialProgressBar_C : public UBindableMaterialWidget
{
    class UBorder* BG_Border;                                                         // 0x0358 (size: 0x8)
    class UImage* ImgCircle;                                                          // 0x0360 (size: 0x8)
    class UMaterialInstance* RadialMaterial;                                          // 0x0368 (size: 0x8)
    FLinearColor BGOpacity;                                                           // 0x0370 (size: 0x10)
    float Start;                                                                      // 0x0380 (size: 0x4)
    float Thickness;                                                                  // 0x0384 (size: 0x4)
    FLinearColor FillColor;                                                           // 0x0388 (size: 0x10)
    FLinearColor EmptyColor;                                                          // 0x0398 (size: 0x10)
    FSlateBrush K2Node_MakeStruct_SlateBrush;                                         // 0x03A8 (size: 0x88)
    bool K2Node_Event_IsDesignTime;                                                   // 0x0430 (size: 0x1)

    void SetThickness(float bpp__Thicknesss__pf);
    void SetStart(float bpp__Start__pf);
    void SetPercent(float bpp__Value__pf);
    void SetFillColor(FLinearColor bpp__FillColor__pf);
    void SetEmptyColor(FLinearColor bpp__EmptyColor__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void Construct();
    void BPE_OnSynchronizeProperties();
}; // Size: 0x438

#endif
