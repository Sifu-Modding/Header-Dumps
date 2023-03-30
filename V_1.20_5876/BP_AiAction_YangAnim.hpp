#ifndef UE4SS_SDK_BP_AiAction_YangAnim_HPP
#define UE4SS_SDK_BP_AiAction_YangAnim_HPP

class UBP_AiAction_YangAnim_C : public UBP_AiAction_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    FSCAITicketEnum TicketToReset;                                                    // 0x0178 (size: 0x50)

    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    void BPE_OnFinished(bool _bSucceeded);
    void ExecuteUbergraph_BP_AiAction_YangAnim(int32 EntryPoint);
}; // Size: 0x1C8

#endif
