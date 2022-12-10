#ifndef UE4SS_SDK_BP_InteractiveSurface_HPP
#define UE4SS_SDK_BP_InteractiveSurface_HPP

class ABP_InteractiveSurface_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SurfaceMesh;
    class USCDynamicTextureMask* SCDynamicTextureMask;
    class UBoxComponent* DTMCollision;
    float TorsoImpactSize;
    float TorsoImpactFade;
    float TorsoImpactOpacity;
    bool bWriteTorso;
    float WeaponImpactSize;
    float WeaponImpactFade;
    float WeaponDrawOpacity;
    float WeaponSnapDistance;
    TArray<class AActor*> OverlappingWeapons;
    FVector WeaponsWriteOffset;
    bool bHasWeaponWrittenThisFrame;
    TArray<class ABP_TPSCharacter_C*> OverlappingCharacters;
    TArray<FVector> PreviousFeetPositions;
    TArray<FVector> PreviousFeetPositionsTEMP;
    float ImpactSize;
    float ImpactFade;
    float DrawOpacity;
    float FootToSurfaceDistance;
    FVector FootToSurfaceOffset;
    bool bIsClosePosition;
    float MinimumDistanceBetweenHits;
    TMap<ABP_TPSCharacter_C*, int32> CharactersID;
    int32 IDPool;
    TMap<class FString, class FVector> FeetCurrentPosition;
    TMap<class FString, class FVector> FeetPreviousPosition;
    TMap<class FString, class bool> WereFeetDrawnedPReviousFrame;
    class UMaterialInstanceDynamic* SurfaceMID;
    class UMaterial* ComputeNormalsMaterial;
    float ComputedNormalStrength;
    class UMaterialInstanceDynamic* ComputeNormalsMID;
    class UTextureRenderTarget2D* NormalsRT;
    int32 ComputedNormalSize;
    bool bIsEnabled;
    bool bAreWeaponsEnabled;
    bool bDebugWeaponCapsules;
    bool bComputeNormals;

    void WriteFeets();
    void WriteTorso();
    void TestIfCloseEnough(FVector InputPosition, bool& IsCloseEnough);
    void WriteWeapons();
    void SetupComputedNormalMaterial();
    void SetupComputedNormalTexture();
    void ComputeNormalTexture();
    void ClearFootArrays();
    void MakePositionSnapToPlane(FVector InPos, bool& IsCloseEnough, FVector& OutPos);
    void Get Feet Sockets Locations(class ABP_TPSCharacter_C* Character);
    void Send Hit From Characters Feet(TArray<class ABP_TPSCharacter_C*>& OverlappingCharacters);
    void ReceiveTick(float DeltaSeconds);
    void ComputeNormals();
    void ReceiveBeginPlay();
    void AddOverlappingCharacter(class AActor* OverlappingCharacter);
    void UpdateOverlaps();
    void BndEvt__BP_InteractiveSurface_DTMCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_InteractiveSurface_DTMCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_InteractiveSurface(int32 EntryPoint);
};

#endif
