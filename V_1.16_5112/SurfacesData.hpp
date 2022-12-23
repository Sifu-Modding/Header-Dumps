#ifndef UE4SS_SDK_SurfacesData_HPP
#define UE4SS_SDK_SurfacesData_HPP

class USurfacesData_C : public UPrimaryDataAsset
{
    TMap<TEnumAsByte<EPhysicalSurface>, FStruct_Footsteps> SurfacesMap;

};

#endif
