#ifndef UE4SS_SDK_BP_MainChar_W_UI_3D_HPP
#define UE4SS_SDK_BP_MainChar_W_UI_3D_HPP

class ABP_MainChar_W_UI_3D_C : public ABP_MainChar_M_UI_3D_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MainChar_W_UI_3D(int32 EntryPoint);
};

#endif
