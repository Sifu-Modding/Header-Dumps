#ifndef UE4SS_SDK_BP_PlanarAutoCharacter_HPP
#define UE4SS_SDK_BP_PlanarAutoCharacter_HPP

class ABP_PlanarAutoCharacter_C : public APlanarReflection
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBoxComponent* characterDetector;                                           // 0x02D8 (size: 0x8)

    void BndEvt__characterDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__characterDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_PlanarAutoCharacter(int32 EntryPoint);
}; // Size: 0x2E0

#endif
