#ifndef UE4SS_SDK_BP_MainChar_M_UI_3D_HPP
#define UE4SS_SDK_BP_MainChar_M_UI_3D_HPP

class ABP_MainChar_M_UI_3D_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MainChar_M_UI_3D(int32 EntryPoint);
}; // Size: 0x348

#endif
