#ifndef UE4SS_SDK_BP_Volume_Template_HPP
#define UE4SS_SDK_BP_Volume_Template_HPP

class ABP_Volume_Template_C : public AActor
{
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;
    class USceneComponent* Root;
    FVector Width;
    FVector Length;
    FVector Height;
    FVector Extent;

    void UserConstructionScript();
};

#endif
