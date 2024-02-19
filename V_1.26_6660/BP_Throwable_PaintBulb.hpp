#ifndef UE4SS_SDK_BP_Throwable_PaintBulb_HPP
#define UE4SS_SDK_BP_Throwable_PaintBulb_HPP

class ABP_Throwable_PaintBulb_C : public ABPWeapon_MakeShiftOneHandedFamilly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0960 (size: 0x8)
    class UStaticMeshComponent* SM_PaintBulb_01_A_1;                                  // 0x0968 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;              // 0x0970 (size: 0x8)
    float Size;                                                                       // 0x0978 (size: 0x4)
    class UTexture* TextureToProject;                                                 // 0x0980 (size: 0x8)
    FLinearColor BulbColor;                                                           // 0x0988 (size: 0x10)
    TArray<class AActor*> HittedActors;                                               // 0x0998 (size: 0x10)
    float ProjectionDepth;                                                            // 0x09A8 (size: 0x4)
    float PrevDepth;                                                                  // 0x09AC (size: 0x4)
    class UMaterialInstanceDynamic* PaintMID;                                         // 0x09B0 (size: 0x8)
    class UMaterialInterface* PaintMaterial;                                          // 0x09B8 (size: 0x8)
    FName Paint Color Material Parameter Name;                                        // 0x09C0 (size: 0x8)
    int32 PaintMaterialID;                                                            // 0x09C8 (size: 0x4)
    bool bIsTargetCharacter;                                                          // 0x09CC (size: 0x1)
    class UParticleSystem* Emitter Template;                                          // 0x09D0 (size: 0x8)

    void DebugPaintProjection(FLinearColor PointColor, FVector InputPin, FVector InputPin2);
    void SetupBulbMaterial(FLinearColor NewColor);
    void OnBulbDestroyed();
    void BPE_OnObjectBreak(bool _bIsSilent);
    void SetBulbColor(FLinearColor BulbColor);
    void ExecuteUbergraph_BP_Throwable_PaintBulb(int32 EntryPoint);
}; // Size: 0x9D8

#endif
