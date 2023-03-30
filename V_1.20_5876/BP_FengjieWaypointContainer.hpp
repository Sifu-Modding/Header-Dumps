#ifndef UE4SS_SDK_BP_FengjieWaypointContainer_HPP
#define UE4SS_SDK_BP_FengjieWaypointContainer_HPP

class ABP_FengjieWaypointContainer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    class ABP_Fengjie_Base_C* BossFengjie;                                            // 0x02C0 (size: 0x8)
    TArray<class AActor*> Waypoints;                                                  // 0x02C8 (size: 0x10)

    void SetFengjie(class ABaseCharacter* BossFengjie);
    void AddWaypoint();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FengjieWaypointContainer(int32 EntryPoint);
}; // Size: 0x2D8

#endif
