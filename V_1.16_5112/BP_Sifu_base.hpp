#ifndef UE4SS_SDK_BP_Sifu_base_HPP
#define UE4SS_SDK_BP_Sifu_base_HPP

class ABP_Sifu_Base_C : public ABP_AICharacter_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sifu_Base(int32 EntryPoint);
};

#endif
