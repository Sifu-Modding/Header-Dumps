#ifndef UE4SS_SDK_BPU_Swapable_Skylight_HPP
#define UE4SS_SDK_BPU_Swapable_Skylight_HPP

class IBPU_Swapable_Skylight_C : public IInterface
{

    void SwapSkylight(FLinearColor bpp__NewxSkylightxColor__pfTT, float bpp__NewxSkylightxIntensity__pfTT, FLinearColor bpp__NewxFogxColor__pfTT, float bpp__NewxFogxDensity__pfTT, float bpp__NewxFogxMaxxOpacity__pfTTT, float bpp__NewxFogxHeightxFallxoff__pfTTTT, float bpp__NewxFogxCuttoffxDistance__pfTTT, float bpp__NewxFogxScatteringxDistribution__pfTTT, FColor bpp__NewxFogxAlbedo__pfTT, FColor bpp__NewxFogxEmissive__pfTT, float bpp__newxFogxExtinctionxScale__pfTTT, bool bpp__b_AdjustSkylight__pf, bool bpp__b_AdjustFog__pf, bool bpp__b_AdjustxVolumetricxFog__pfTT);
    void CopyFromSkylight();
}; // Size: 0x28

#endif
