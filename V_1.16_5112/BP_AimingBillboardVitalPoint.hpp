#ifndef UE4SS_SDK_BP_AimingBillboardVitalPoint_HPP
#define UE4SS_SDK_BP_AimingBillboardVitalPoint_HPP

class ABP_AimingBillboardVitalPoint_C : public ABP_AimingBillboard_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    FVector2D BPE_ComputeSize();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AimingBillboardVitalPoint(int32 EntryPoint);
};

#endif
