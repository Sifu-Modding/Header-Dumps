#ifndef UE4SS_SDK_BP_TraversalActorCine_HPP
#define UE4SS_SDK_BP_TraversalActorCine_HPP

class ABP_TraversalActorCine_C : public ABP_TraversalActor_C
{
    class USceneComponent* AIEndPoint;
    class UArrowComponent* ArrowZ3;
    class UArrowComponent* ArrowY3;
    class UArrowComponent* ArrowX3;
    class USceneComponent* Anchor3;
    class UArrowComponent* ArrowZ2;
    class UArrowComponent* ArrowY2;
    class UArrowComponent* ArrowX2;
    class UArrowComponent* ArrowZ1;
    class UArrowComponent* ArrowY1;
    class UArrowComponent* ArrowX1;
    class USceneComponent* Anchor2;
    class USceneComponent* Anchor1;
    class UAnimSequence* AnimToPlay;

    FVector BP_TraversalActorCine_AutoGenFunc();
    void BPE_GetTraversalAnimation(FAnimContainer& _outResult);
    void UserConstructionScript();
};

#endif
