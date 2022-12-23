#ifndef UE4SS_SDK_BP_WeakBreakable_HPP
#define UE4SS_SDK_BP_WeakBreakable_HPP

class ABP_WeakBreakable_C : public ABP_DynamicBreakable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<TEnumAsByte<AKE_WeakBreakable_Switch>> ArrayWeakBreakable;
    TArray<int32> AkPlayingID_Array;

    float BPE_GetRTPCValue();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void OnDestructionSFX(FVector Location, FVector Direction, float RTPC_Value, FName RTPC_Name, class UAkAudioEvent* AudioBreakEvent);
    void On Wake Changed(bool bIsAwake);
    void ExecuteUbergraph_BP_WeakBreakable(int32 EntryPoint);
};

#endif
