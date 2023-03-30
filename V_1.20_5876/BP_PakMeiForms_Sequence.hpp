#ifndef UE4SS_SDK_BP_PakMeiForms_Sequence_HPP
#define UE4SS_SDK_BP_PakMeiForms_Sequence_HPP

class ABP_PakMeiForms_Sequence_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject;                             // 0x02B8 (size: 0x8)
    class UBoxComponent* InteractionCollision;                                        // 0x02C0 (size: 0x8)
    class UBoxComponent* InputCollision;                                              // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__Actor_Blueprint1_InteractionObject_K2Node_ComponentBoundEvent_2_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void ExecuteUbergraph_BP_PakMeiForms_Sequence(int32 EntryPoint);
}; // Size: 0x2D8

#endif
