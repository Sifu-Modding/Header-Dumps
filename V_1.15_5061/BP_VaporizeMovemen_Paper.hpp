#ifndef UE4SS_SDK_BP_VaporizeMovemen_Paper_HPP
#define UE4SS_SDK_BP_VaporizeMovemen_Paper_HPP

class ABP_VaporizeMovemen_Paper_C : public ABP_Vaporizer_FakePhysics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_VaporizeMovemen_Paper(int32 EntryPoint);
};

#endif
