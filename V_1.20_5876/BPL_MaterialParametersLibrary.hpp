#ifndef UE4SS_SDK_BPL_MaterialParametersLibrary_HPP
#define UE4SS_SDK_BPL_MaterialParametersLibrary_HPP

class UBPL_MaterialParametersLibrary_C : public UBlueprintFunctionLibrary
{

    int32 Set Bit Enabled(int32 bpp__InBitmask__pf, int32 bpp__InBitIndex__pf, bool bpp__bEnable__pf, class UObject* bpp____WorldContext__pf);
    void SetBitEnabledOnMesh(class UPrimitiveComponent* bpp__InPrimComp__pf, int32 bpp__InBitIndex__pf, bool bpp__bInEnabled__pf, class UObject* bpp____WorldContext__pf);
    FName Get_Lockable_ParameterName(class UObject* bpp____WorldContext__pf);
    FName Get_IsUseable_ParameterName(class UObject* bpp____WorldContext__pf);
}; // Size: 0x28

#endif
