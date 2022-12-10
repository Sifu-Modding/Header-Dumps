#ifndef UE4SS_SDK_BP_AIPositionningPOI_HPP
#define UE4SS_SDK_BP_AIPositionningPOI_HPP

class ABP_AIPositionningPOI_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    class UTextRenderComponent* TextRender;
    class UAIPositionningPOIComponent* AIPositionningPOI;
    class USceneComponent* DefaultSceneRoot;
    FAIPositionningPOI Point Of Interest;
    TArray<class AAISpawner*> Allowed Spawners;

    void IsActive(bool& Is Active);
    void Set Active(bool Active);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AIPositionningPOI(int32 EntryPoint);
};

#endif
