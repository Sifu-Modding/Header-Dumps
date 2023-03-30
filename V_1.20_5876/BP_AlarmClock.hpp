#ifndef UE4SS_SDK_BP_AlarmClock_HPP
#define UE4SS_SDK_BP_AlarmClock_HPP

class ABP_AlarmClock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* PlaneSeconds1;                                        // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* PlaneSeconds;                                         // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* PlaneHour_Decade;                                     // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* PlaneHour_Unit;                                       // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* PlaneMinute_Decade;                                   // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* PlaneMinute_Unit;                                     // 0x02E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)
    float Time_Minute_B;                                                              // 0x02F8 (size: 0x4)
    float Time_Hour_A;                                                                // 0x02FC (size: 0x4)
    float Time_Minute_A;                                                              // 0x0300 (size: 0x4)
    float Time_Hour_B;                                                                // 0x0304 (size: 0x4)
    FLinearColor ColorEmit;                                                           // 0x0308 (size: 0x10)
    FVector4 Value;                                                                   // 0x0320 (size: 0x10)
    FVector Color;                                                                    // 0x0330 (size: 0xC)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AlarmClock(int32 EntryPoint);
}; // Size: 0x33C

#endif
