#ifndef UE4SS_SDK_BP_HUD_RadialProgressLine_HPP
#define UE4SS_SDK_BP_HUD_RadialProgressLine_HPP

class UBP_HUD_RadialProgressLine_C : public UBindableMaterialWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BG_Border;
    class UImage* ImgCircle;
    class UMaterialInstance* RadialMaterial;
    FLinearColor BGOpacity;
    float Start;
    float Thickness;
    float Diameter;

    void SetDiameter(float Thicknesss);
    void SetStart(float Start);
    void SetThickness(float Thicknesss);
    void SetPercent(float Value);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_HUD_RadialProgressLine(int32 EntryPoint);
};

#endif
