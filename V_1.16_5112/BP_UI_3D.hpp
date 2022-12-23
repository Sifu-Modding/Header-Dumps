#ifndef UE4SS_SDK_BP_UI_3D_HPP
#define UE4SS_SDK_BP_UI_3D_HPP

class ABP_UI_3D_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class USceneComponent* DefaultSceneRoot;
    TMap<TEnumAsByte<UI3DEnum>, AActor*> ActorArray;
    TEnumAsByte<UI3DEnum> CurrentDisplayedObject;
    class AActor* CurruntlyDisplayedActorRef;
    bool bAreActorsValid;
    class UBP_UI_Pendant_Animation_C* PendantAnimationBP;
    class ABP_Pendant_UI_3D_C* PendantBP;
    TMap<int32, UMaterialInstanceDynamic*> PendantChargesMIDsByMaterialIndex;
    bool bAreChargesMIDsValid;
    bool bAreGlowsMIDsValid;
    FString b_coin_;
    TMap<int32, UMaterialInstanceDynamic*> PendantGlowsMIDsByMaterialIndex;
    FRotator PreviousAppliedRotator;
    FVector CurrentDisplayedActorCenter;
    FTransform DefaultCurrentActorTransform;
    float AngleRotSpeed;
    class UTextureRenderTarget2D* MenuRenderTarget;
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;
    int32 RenderTargetWidth;
    int32 RenderTargetHeight;
    TArray<class UMaterialInstanceDynamic*> UI3D_MIDs;
    bool bHasFXBeenActivated;
    class UMaterialInstanceDynamic* ShrineMID;
    TArray<class AActor*> Light Setup MC;
    TArray<class AActor*> Light Setup Shrine+Pendant;
    class AActor* ManCharcGradiant;

    void SetupShrineMID();
    void SendHoldValueToCoin(float HoldValue, int32 LastCoinID);
    void UI3DMenuSetup(class UImage* MenuImageWidget, class UMaterialInterface* UITextureMaterial, FLinearColor BackgroundColor, class UMaterialInstanceDynamic*& Mid);
    void SetupNewRenderTarget(int32 Width, int32 Height, class UMaterialInstanceDynamic* Mid, class UTextureRenderTarget2D*& OutTextureTarget);
    void Get Pendant Socket from Charge ID(int32 Charge ID, class USkinnedMeshComponent* Skelatal Mesh, FName& Socket Name);
    void Set Coin Explode(int32 CoinID, class UBP_UI_Pendant_Animation_C* AnimPendantBP);
    void TriggersChargeFade(int32 ChargeID);
    void EnsureAllGlowsMIDs(bool& bIsGlowsMIDValid);
    void EnsureAllChargesMIDs(bool& bIsChargesMIDValid);
    void EnsureAllPendantMIDs(bool& AreMIDsValid);
    void SetTickIfMC(bool NewTickEnable);
    void EnsurePendantAnimationBP(bool& bIsValid);
    void ClearRT();
    void GetCurrentObjectReference(class AActor*& ObjectReference);
    void GetCurrentDisplayedObject(TEnumAsByte<UI3DEnum>& DisplayedObject);
    void GetCurrentState(TEnumAsByte<UI3DEnum>& ObjectCurrentlyDisplayed, class AActor*& ObjectReference);
    void CheckMapActorsValidity();
    void SetupNewObject(TEnumAsByte<UI3DEnum> New Object);
    void SetAllHidden();
    void CaptureObjectOnce(TEnumAsByte<UI3DEnum> Object);
    void StartCaptureObjectEveryFrame(TEnumAsByte<UI3DEnum> Object);
    void StopCapture();
    void SetupActorsReferences(TMap<TEnumAsByte<UI3DEnum>, AActor*> ActorsToDisplay);
    void SetPendantHoldValue(float NewBlendValue, int32 CoinID);
    void SetPendantID(int32 NewChargeID);
    void TriggerChargeExplode(int32 ExplodingChargeID);
    void ResetChargesFade();
    void SetupAvailableCharges(int32 ChargesLeft);
    void SetupChargesLimit(int32 ChargesLimit);
    void TriggerTurnChargeOff(int32 ChargeID);
    void ReceiveTick(float DeltaSeconds);
    void SetChargesEnergy(int32 Age);
    void SetShrineCharged(bool NewCharged);
    void ExecuteUbergraph_BP_UI_3D(int32 EntryPoint);
};

#endif
