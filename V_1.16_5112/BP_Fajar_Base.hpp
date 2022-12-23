#ifndef UE4SS_SDK_BP_Fajar_Base_HPP
#define UE4SS_SDK_BP_Fajar_Base_HPP

class ABP_Fajar_Base_C : public ABP_AICharacter_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnFailure_A4BF9F4940B93FAFE6BE18BF47FB3DFA();
    void OnSuccess_A4BF9F4940B93FAFE6BE18BF47FB3DFA();
    void Perform WallJump Attack(class AActor* WallJump Actor, const FVector& FallJumpLocation, const bool bResetTicketCooldown, class AActor* Target, TSubclassOf<class UAIActionWallJumpAttack> _action);
    void ExecuteUbergraph_BP_Fajar_Base(int32 EntryPoint);
};

#endif
