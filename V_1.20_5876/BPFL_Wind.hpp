#ifndef UE4SS_SDK_BPFL_Wind_HPP
#define UE4SS_SDK_BPFL_Wind_HPP

class UBPFL_Wind_C : public UBlueprintFunctionLibrary
{

    void SetGlobalWindValue(int32 Hideout_ID, class UObject* __WorldContext);
    void Wind Transfert Local Bounds(class UStaticMeshComponent* Reference, class UStaticMeshComponent* Target, class UObject* __WorldContext);
}; // Size: 0x28

#endif
