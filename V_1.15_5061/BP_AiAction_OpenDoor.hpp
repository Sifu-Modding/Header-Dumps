#ifndef UE4SS_SDK_BP_AiAction_OpenDoor_HPP
#define UE4SS_SDK_BP_AiAction_OpenDoor_HPP

class UBP_AiAction_OpenDoor_C : public UBP_AiActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_GameplayDoor_C* Door To Open;
    bool bUseWay1;

    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
    void ExecuteUbergraph_BP_AiAction_OpenDoor(int32 EntryPoint);
};

#endif
