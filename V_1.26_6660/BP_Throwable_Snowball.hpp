#ifndef UE4SS_SDK_BP_Throwable_Snowball_HPP
#define UE4SS_SDK_BP_Throwable_Snowball_HPP

class ABP_Throwable_Snowball_C : public ABPWeapon_MakeShiftOneHandedFamilly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0960 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;              // 0x0968 (size: 0x8)
    float Size;                                                                       // 0x0970 (size: 0x4)
    class UTexture* TextureToProject;                                                 // 0x0978 (size: 0x8)
    FLinearColor BulbColor;                                                           // 0x0980 (size: 0x10)
    TArray<class AActor*> HittedActors;                                               // 0x0990 (size: 0x10)
    float ProjectionDepth;                                                            // 0x09A0 (size: 0x4)
    float PrevDepth;                                                                  // 0x09A4 (size: 0x4)
    class UMaterialInstanceDynamic* PaintMID;                                         // 0x09A8 (size: 0x8)
    class UMaterialInterface* PaintMaterial;                                          // 0x09B0 (size: 0x8)
    FName Paint Color Material Parameter Name;                                        // 0x09B8 (size: 0x8)
    int32 PaintMaterialID;                                                            // 0x09C0 (size: 0x4)
    bool bIsTargetCharacter;                                                          // 0x09C4 (size: 0x1)
    class UParticleSystem* Emitter Template;                                          // 0x09C8 (size: 0x8)
    FBP_Throwable_Snowball_CSnowball Destroyed Snowball Destroyed;                    // 0x09D0 (size: 0x10)
    void Snowball Destroyed(class AActor* Snowball, bool FromPile, int32 PileNumber );
    bool Spawned From Pile;                                                           // 0x09E0 (size: 0x1)
    int32 Pile Number;                                                                // 0x09E4 (size: 0x4)

    void OnBulbDestroyed();
    void ReceiveBeginPlay();
    void OnThrowable State Change(EThrowableState _eNewState);
    void BPE_OnObjectBreak(bool _bIsSilent);
    void ExecuteUbergraph_BP_Throwable_Snowball(int32 EntryPoint);
    void Snowball Destroyed__DelegateSignature(class AActor* Snowball, bool FromPile, int32 PileNumber );
}; // Size: 0x9E8

#endif
