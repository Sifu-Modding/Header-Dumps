#ifndef UE4SS_SDK_Bp_AimingBillboard_HPP
#define UE4SS_SDK_Bp_AimingBillboard_HPP

class ABP_AimingBillboard_C : public AAimingBillboardActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* ScoreDisplay;
    class UTextRenderComponent* Selected;

    float BPE_ComputeScore(FVector _v3DPointToTest);
    FVector2D BPE_ComputeSize();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BP_OnSelectionChanged(bool _bSelected, class AAimingBillboardActor* aimingBillboard);
    void ExecuteUbergraph_BP_AimingBillboard(int32 EntryPoint);
};

#endif
