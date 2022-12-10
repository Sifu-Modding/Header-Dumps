#ifndef UE4SS_SDK_BP_BaseSpectatorPawn_HPP
#define UE4SS_SDK_BP_BaseSpectatorPawn_HPP

class ABP_BaseSpectatorPawn_C : public AReplaySpectatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    FCollisionProfileName SpectatorCollisionLDProfileName;

    void BndEvt__BP_SpectatorPawn_CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_BaseSpectatorPawn(int32 EntryPoint);
};

#endif
