#ifndef UE4SS_SDK_MagicLeapARPinInfoActor_HPP
#define UE4SS_SDK_MagicLeapARPinInfoActor_HPP

class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Right;                                                // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Forward;                                              // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Up;                                                   // 0x02E8 (size: 0x8)
    class USphereComponent* ValidRadiusVisualizer;                                    // 0x02F0 (size: 0x8)
    class USceneComponent* AxisRoot;                                                  // 0x02F8 (size: 0x8)
    class USceneComponent* VisualizerRoot;                                            // 0x0300 (size: 0x8)
    class UTextRenderComponent* TypeValue;                                            // 0x0308 (size: 0x8)
    class UTextRenderComponent* TransErrValue;                                        // 0x0310 (size: 0x8)
    class UTextRenderComponent* RotErrValue;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* ConfidenceValue;                                      // 0x0320 (size: 0x8)
    class UTextRenderComponent* TransErrLabel;                                        // 0x0328 (size: 0x8)
    class UTextRenderComponent* RotErrLabel;                                          // 0x0330 (size: 0x8)
    class UTextRenderComponent* ConfidenceLabel;                                      // 0x0338 (size: 0x8)
    class UTextRenderComponent* PinIDValue;                                           // 0x0340 (size: 0x8)
    class USceneComponent* InfoRoot;                                                  // 0x0348 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0350 (size: 0x8)
    float RotationSmoothSpeed;                                                        // 0x0358 (size: 0x4)

    void UpdatePinState();
    void UserConstructionScript();
    void OnUpdateARPinState();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_MagicLeapARPinInfoActor(int32 EntryPoint);
}; // Size: 0x35C

#endif
