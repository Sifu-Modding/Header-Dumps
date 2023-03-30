#ifndef UE4SS_SDK_BP_PhysicalDetectiveBoard_HPP
#define UE4SS_SDK_BP_PhysicalDetectiveBoard_HPP

class ABP_PhysicalDetectiveBoard_C : public ASCStaticMeshPrimInstActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02C8 (size: 0x8)
    class UBoxComponent* DetectionBox;                                                // 0x02D0 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject;                             // 0x02D8 (size: 0x8)
    TMap<FGameplayTag, int32> PrimitiveDataToGameplayTagMap;                          // 0x02E0 (size: 0x50)

    void UpdateDetectiveBoardMaterials(class USCAbilitySystemComponent* InAbilityComponent);
    void ReceiveBeginPlay();
    void OnPawnInitializedEvent(class AFightingCharacter* _pawn);
    void OnGameplayTagChanged(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void BndEvt__BP_PhysicalDetectiveBoard_InteractionObject_K2Node_ComponentBoundEvent_0_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void ExecuteUbergraph_BP_PhysicalDetectiveBoard(int32 EntryPoint);
}; // Size: 0x330

#endif
