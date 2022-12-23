#ifndef UE4SS_SDK_BP_AiAction_WallJumpAttack_HPP
#define UE4SS_SDK_BP_AiAction_WallJumpAttack_HPP

class UBP_AiAction_WallJumpAttack_C : public UAIActionWallJumpAttack
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Min Distance Enemy To WJ;
    float Max Distance Enemy To WJ;
    FString DisplayName;

    FString BPE_GetName();
    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    void ExecuteUbergraph_BP_AiAction_WallJumpAttack(int32 EntryPoint);
};

#endif
