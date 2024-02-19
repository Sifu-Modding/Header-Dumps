#ifndef UE4SS_SDK_BP_VitalPoint_HPP
#define UE4SS_SDK_BP_VitalPoint_HPP

class ABP_VitalPoint_C : public AVitalPointActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VitalPoint(int32 EntryPoint);
}; // Size: 0x358

#endif
