#ifndef UE4SS_SDK_BP_AiAction_WallJumpAttack_HPP
#define UE4SS_SDK_BP_AiAction_WallJumpAttack_HPP

class UBP_AiAction_WallJumpAttack_C : public UAIActionWallJumpAttack
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    float Min Distance Enemy To WJ;                                                   // 0x0558 (size: 0x4)
    float Max Distance Enemy To WJ;                                                   // 0x055C (size: 0x4)
    FString DisplayName;                                                              // 0x0560 (size: 0x10)

    FString BPE_GetName();
    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    void ExecuteUbergraph_BP_AiAction_WallJumpAttack(int32 EntryPoint);
}; // Size: 0x570

#endif
