#ifndef UE4SS_SDK_BP_TraversalActorCine_HPP
#define UE4SS_SDK_BP_TraversalActorCine_HPP

class ABP_TraversalActorCine_C : public ABP_TraversalActor_C
{
    class USceneComponent* AIEndPoint;                                                // 0x0338 (size: 0x8)
    class UArrowComponent* ArrowZ3;                                                   // 0x0340 (size: 0x8)
    class UArrowComponent* ArrowY3;                                                   // 0x0348 (size: 0x8)
    class UArrowComponent* ArrowX3;                                                   // 0x0350 (size: 0x8)
    class USceneComponent* Anchor3;                                                   // 0x0358 (size: 0x8)
    class UArrowComponent* ArrowZ2;                                                   // 0x0360 (size: 0x8)
    class UArrowComponent* ArrowY2;                                                   // 0x0368 (size: 0x8)
    class UArrowComponent* ArrowX2;                                                   // 0x0370 (size: 0x8)
    class UArrowComponent* ArrowZ1;                                                   // 0x0378 (size: 0x8)
    class UArrowComponent* ArrowY1;                                                   // 0x0380 (size: 0x8)
    class UArrowComponent* ArrowX1;                                                   // 0x0388 (size: 0x8)
    class USceneComponent* Anchor2;                                                   // 0x0390 (size: 0x8)
    class USceneComponent* Anchor1;                                                   // 0x0398 (size: 0x8)
    class UAnimSequence* AnimToPlay;                                                  // 0x03A0 (size: 0x8)

    FVector BPE_GetTraversalEndPos();
    FVector BP_TraversalActorCine_AutoGenFunc();
    void BPE_GetTraversalAnimation(FAnimContainer& _outResult);
    void UserConstructionScript();
}; // Size: 0x3A8

#endif
