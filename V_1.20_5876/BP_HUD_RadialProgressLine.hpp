#ifndef UE4SS_SDK_BP_HUD_RadialProgressLine_HPP
#define UE4SS_SDK_BP_HUD_RadialProgressLine_HPP

class UBP_HUD_RadialProgressLine_C : public UBindableMaterialWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UBorder* BG_Border;                                                         // 0x0360 (size: 0x8)
    class UImage* ImgCircle;                                                          // 0x0368 (size: 0x8)
    class UMaterialInstance* RadialMaterial;                                          // 0x0370 (size: 0x8)
    FLinearColor BGOpacity;                                                           // 0x0378 (size: 0x10)
    float Start;                                                                      // 0x0388 (size: 0x4)
    float Thickness;                                                                  // 0x038C (size: 0x4)
    float Diameter;                                                                   // 0x0390 (size: 0x4)

    void SetDiameter(float Thicknesss);
    void SetStart(float Start);
    void SetThickness(float Thicknesss);
    void SetPercent(float Value);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_HUD_RadialProgressLine(int32 EntryPoint);
}; // Size: 0x394

#endif
