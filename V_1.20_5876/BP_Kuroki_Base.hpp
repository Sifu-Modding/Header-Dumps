#ifndef UE4SS_SDK_BP_Kuroki_Base_HPP
#define UE4SS_SDK_BP_Kuroki_Base_HPP

class ABP_Kuroki_Base_C : public ABP_AICharacter_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1F10 (size: 0x8)
    class USkeletalMeshComponent* Daggers_Shiroizu_L;                                 // 0x1F18 (size: 0x8)
    class USkeletalMeshComponent* Daggers_Shiroizu_R;                                 // 0x1F20 (size: 0x8)
    float TransitionShiroizu_TransitionShiroizu_1437BD4247505A2C567869831AB45686;     // 0x1F28 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TransitionShiroizu__Direction_1437BD4247505A2C567869831AB45686; // 0x1F2C (size: 0x1)
    class UTimelineComponent* TransitionShiroizu;                                     // 0x1F30 (size: 0x8)
    float DashDistance;                                                               // 0x1F38 (size: 0x4)
    TEnumAsByte<AKE_WeaponName_Switch> AKE_Weapon_Name;                               // 0x1F3C (size: 0x1)
    class AActor* WaterSurface;                                                       // 0x1F40 (size: 0x8)

    void IsKurokiSetup(class AActor* WaterSurface, bool& bIsKuroki, class AActor*& KurokiReference);
    void GetAkWeaponNameSwitch(TEnumAsByte<AKE_WeaponName_Switch>& Name);
    void GetWeaponType(TEnumAsByte<EWeaponType>& WeaponType);
    void GetWeaponAkComponent(class UAkComponent*& AkComponent);
    void GetDistanceDirectionFromDash(uint8 OrderID, class UOrderComponent* OrderComponent);
    void SetDaggersVisibility(bool bInVisible);
    void OnDashEnd();
    void OnDashStart(float Distance, FVector Direction);
    void OnAIPhaseChanged(int32 PreviousPhaseIndex, int32 NewPhaseIndex, FName NewPhaseName);
    void TransitionShiroizu__FinishedFunc();
    void TransitionShiroizu__UpdateFunc();
    void SetKurokiDashing(bool IsKurokiDashing);
    void ImpactOnSurface(FVector Position, float Velocity, float Size, bool bIsMultiWrite, FVector MultiWriteEndPosition);
    void UpdateDurabilityRTPC();
    void SendOptionValueAndTriggerUpdate(bool bIsHighContrast);
    void ReceiveBeginPlay();
    void BndEvt__AIFighting_K2Node_ComponentBoundEvent_0_OnAIPhaseChangedDynamic__DelegateSignature(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void OnDashStarted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnDashEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void StartTimeline_ShiroizuTransition();
    void ExecuteUbergraph_BP_Kuroki_Base(int32 EntryPoint);
}; // Size: 0x1F48

#endif
