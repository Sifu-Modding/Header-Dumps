#ifndef UE4SS_SDK_BP_Fan_HPP
#define UE4SS_SDK_BP_Fan_HPP

class ABP_Fan_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_FanPropeller_01_A_1;
    class UStaticMeshComponent* E;
    class UStaticMeshComponent* SM_Fan_01_A_1;
    class UParticleSystemComponent* P_FastFanBlur;
    class UParticleSystemComponent* P_FanWind;
    class UStaticMeshComponent* SM_Rubber;
    class UStaticMeshComponent* SM_FanPedestal_01_A_1;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Fan(int32 EntryPoint);
};

#endif
