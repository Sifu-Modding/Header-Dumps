#ifndef UE4SS_SDK_BP_Rain_SifuBossRoom_P2_HPP
#define UE4SS_SDK_BP_Rain_SifuBossRoom_P2_HPP

class ABP_Rain_SifuBossRoom_P2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* ThunderBounce;
    class USpotLightComponent* ThunderLight;
    class UParticleSystemComponent* Thunder;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class UParticleSystemComponent* PS_Rain;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_45E92D3041756135B41080BF3E46016F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_45E92D3041756135B41080BF3E46016F;
    class UTimelineComponent* Timeline_0;
    TArray<FParticleSysParam> NewVar_0;
    class UStaticMeshComponent* NewVar_1;
    class UCameraComponentThird* Camera;
    FVector Target;
    bool Channel 0;
    bool Channel 1;
    bool Channel 2;
    float IntensityMaxBounce;
    bool b_Activate Thunder;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void PopulateCollectionParameters();
    void ReceiveBeginPlay();
    void Thunder Light();
    void Init Thunder Phase 2();
    void Init Rain Phase 2();
    void Deactivate Thunder(bool Activate);
    void ExecuteUbergraph_BP_Rain_SifuBossRoom_P2(int32 EntryPoint);
};

#endif
