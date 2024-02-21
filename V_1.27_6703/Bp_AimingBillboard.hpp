#ifndef UE4SS_SDK_Bp_AimingBillboard_HPP
#define UE4SS_SDK_Bp_AimingBillboard_HPP

class ABP_AimingBillboard_C : public AAimingBillboardActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UTextRenderComponent* ScoreDisplay;                                         // 0x0328 (size: 0x8)
    class UTextRenderComponent* Selected;                                             // 0x0330 (size: 0x8)

    float BPE_ComputeScore(FVector _v3DPointToTest);
    FVector2D BPE_ComputeSize();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BP_OnSelectionChanged(bool _bSelected, class AAimingBillboardActor* aimingBillboard);
    void ExecuteUbergraph_BP_AimingBillboard(int32 EntryPoint);
}; // Size: 0x338

#endif
