#ifndef UE4SS_SDK_BP_ShadowQualitySwitcher_HPP
#define UE4SS_SDK_BP_ShadowQualitySwitcher_HPP

class ABP_ShadowQualitySwitcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    class AActor* FogEnabledActor;                                                    // 0x02C0 (size: 0x8)
    class AActor* FogDisabledActor;                                                   // 0x02C8 (size: 0x8)

    void UpdateActorsVisibility();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShadowQualitySwitcher(int32 EntryPoint);
}; // Size: 0x2D0

#endif
