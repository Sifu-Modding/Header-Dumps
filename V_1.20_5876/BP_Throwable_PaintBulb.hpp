#ifndef UE4SS_SDK_BP_Throwable_PaintBulb_HPP
#define UE4SS_SDK_BP_Throwable_PaintBulb_HPP

class ABP_Throwable_PaintBulb_C : public ABPWeapon_MakeShiftOneHandedFamilly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0908 (size: 0x8)
    class UStaticMeshComponent* SM_PaintBulb_01_A_1;                                  // 0x0910 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;              // 0x0918 (size: 0x8)
    float Size;                                                                       // 0x0920 (size: 0x4)
    class UTexture* TextureToProject;                                                 // 0x0928 (size: 0x8)
    FLinearColor BulbColor;                                                           // 0x0930 (size: 0x10)
    TArray<class AActor*> HittedActors;                                               // 0x0940 (size: 0x10)
    float ProjectionDepth;                                                            // 0x0950 (size: 0x4)
    float PrevDepth;                                                                  // 0x0954 (size: 0x4)
    class UMaterialInstanceDynamic* PaintMID;                                         // 0x0958 (size: 0x8)
    class UMaterialInterface* PaintMaterial;                                          // 0x0960 (size: 0x8)
    FName Paint Color Material Parameter Name;                                        // 0x0968 (size: 0x8)
    int32 PaintMaterialID;                                                            // 0x0970 (size: 0x4)
    bool bIsTargetCharacter;                                                          // 0x0974 (size: 0x1)
    class UParticleSystem* Emitter Template;                                          // 0x0978 (size: 0x8)

    void DebugPaintProjection(FLinearColor PointColor, FVector InputPin, FVector InputPin2);
    void SetupBulbMaterial(FLinearColor NewColor);
    void OnBulbDestroyed();
    void BPE_OnObjectBreak(bool _bIsSilent);
    void SetBulbColor(FLinearColor BulbColor);
    void ExecuteUbergraph_BP_Throwable_PaintBulb(int32 EntryPoint);
}; // Size: 0x980

#endif
