#ifndef UE4SS_SDK_BP_ShadowQualitySwitcher_HPP
#define UE4SS_SDK_BP_ShadowQualitySwitcher_HPP

class ABP_ShadowQualitySwitcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class AActor* FogEnabledActor;
    class AActor* FogDisabledActor;

    void UpdateActorsVisibility();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShadowQualitySwitcher(int32 EntryPoint);
};

#endif
