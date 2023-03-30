#ifndef UE4SS_SDK_BP_AiAction_KurokiRainDashes_HPP
#define UE4SS_SDK_BP_AiAction_KurokiRainDashes_HPP

class UBP_AiAction_KurokiRainDashes_C : public UAIActionRainDashes
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01A0 (size: 0x8)

    void BPE_OnNamedEvent(FName _eventName);
    void ExecuteUbergraph_BP_AiAction_KurokiRainDashes(int32 EntryPoint);
}; // Size: 0x1A8

#endif
