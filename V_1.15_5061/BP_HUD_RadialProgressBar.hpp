#ifndef UE4SS_SDK_BP_HUD_RadialProgressBar_HPP
#define UE4SS_SDK_BP_HUD_RadialProgressBar_HPP

class UBP_HUD_RadialProgressBar_C : public UBindableMaterialWidget
{
    class UBorder* BG_Border;
    class UImage* ImgCircle;
    class UMaterialInstance* RadialMaterial;
    FLinearColor BGOpacity;
    float Start;
    float Thickness;
    FLinearColor FillColor;
    FLinearColor EmptyColor;
    FSlateBrush K2Node_MakeStruct_SlateBrush;
    bool K2Node_Event_IsDesignTime;

    void SetThickness(float bpp__Thicknesss__pf);
    void SetStart(float bpp__Start__pf);
    void SetPercent(float bpp__Value__pf);
    void SetFillColor(FLinearColor bpp__FillColor__pf);
    void SetEmptyColor(FLinearColor bpp__EmptyColor__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void Construct();
    void BPE_OnSynchronizeProperties();
};

#endif
