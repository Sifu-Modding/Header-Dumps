#ifndef UE4SS_SDK_BP_ImpactableSurface_Interface_HPP
#define UE4SS_SDK_BP_ImpactableSurface_Interface_HPP

class IBP_ImpactableSurface_Interface_C : public IInterface
{

    void SetKurokiDashing(bool bpp__IsKurokiDashing__pf);
    void IsKurokiSetup(class AActor* bpp__WaterSurface__pf, bool& bpp__bIsKuroki__pf, class AActor*& bpp__KurokiReference__pf);
    void ImpactOnSurface(FVector bpp__Position__pf, float bpp__Velocity__pf, float bpp__Size__pf, bool bpp__bIsMultiWrite__pf, FVector bpp__MultiWriteEndPosition__pf);
};

#endif
