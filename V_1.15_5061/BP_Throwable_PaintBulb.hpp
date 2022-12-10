#ifndef UE4SS_SDK_BP_Throwable_PaintBulb_HPP
#define UE4SS_SDK_BP_Throwable_PaintBulb_HPP

class ABP_Throwable_PaintBulb_C : public ABPWeapon_MakeShiftOneHandedFamilly_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_PaintBulb_01_A_1;
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;
    float Size;
    class UTexture* TextureToProject;
    FLinearColor BulbColor;
    TArray<class AActor*> HittedActors;
    float ProjectionDepth;
    float PrevDepth;
    class UMaterialInstanceDynamic* PaintMID;
    class UMaterialInterface* PaintMaterial;
    FName Paint Color Material Parameter Name;
    int32 PaintMaterialID;
    bool bIsTargetCharacter;
    class UParticleSystem* Emitter Template;

    void DebugPaintProjection(FLinearColor PointColor, FVector InputPin, FVector InputPin2);
    void SetupBulbMaterial(FLinearColor NewColor);
    void OnBulbDestroyed();
    void BPE_OnObjectBreak(bool _bIsSilent);
    void SetBulbColor(FLinearColor BulbColor);
    void ExecuteUbergraph_BP_Throwable_PaintBulb(int32 EntryPoint);
};

#endif
