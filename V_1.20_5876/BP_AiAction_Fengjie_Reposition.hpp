#ifndef UE4SS_SDK_BP_AiAction_Fengjie_Reposition_HPP
#define UE4SS_SDK_BP_AiAction_Fengjie_Reposition_HPP

class UBP_AiAction_Fengjie_Reposition_C : public UBP_AiAction_Attack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    TArray<class AActor*> Waypoints;                                                  // 0x0170 (size: 0x10)
    FVector SelectedWaypointLocation;                                                 // 0x0180 (size: 0xC)
    class ABP_Fengjie_Base_C* Fengjie;                                                // 0x0190 (size: 0x8)
    class AActor* WaypointContainer;                                                  // 0x0198 (size: 0x8)

    void SelectBestWaypoint(class AActor*& Waypoint, bool& Successfull);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
    void BPE_OnFinished(bool _bSucceeded);
    void ExecuteUbergraph_BP_AiAction_Fengjie_Reposition(int32 EntryPoint);
}; // Size: 0x1A0

#endif
