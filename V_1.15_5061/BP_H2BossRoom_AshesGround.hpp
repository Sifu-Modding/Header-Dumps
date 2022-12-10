#ifndef UE4SS_SDK_BP_H2BossRoom_AshesGround_HPP
#define UE4SS_SDK_BP_H2BossRoom_AshesGround_HPP

class ABP_H2BossRoom_AshesGround_C : public ABP_InteractiveSurface_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* OverlappingSean;
    FVector PreviousSeanAuraPosition;
    bool bIsAuraFirstFrame;
    float SeanAuraSpeed;

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void AddOverlappingCharacter(class AActor* OverlappingCharacter);
    void SendSeanPositionToGroundMaterial(float DeltaTime);
    void ExecuteUbergraph_BP_H2BossRoom_AshesGround(int32 EntryPoint);
};

#endif
