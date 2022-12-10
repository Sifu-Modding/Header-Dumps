#ifndef UE4SS_SDK_BP_VitalPoint_HPP
#define UE4SS_SDK_BP_VitalPoint_HPP

class ABP_VitalPoint_C : public AVitalPointActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VitalPoint(int32 EntryPoint);
};

#endif
