#ifndef UE4SS_SDK_BP_UI_3D_HPP
#define UE4SS_SDK_BP_UI_3D_HPP

class ABP_UI_3D_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    TMap<TEnumAsByte<UI3DEnum>, AActor*> ActorArray;                                  // 0x02C8 (size: 0x50)
    TEnumAsByte<UI3DEnum> CurrentDisplayedObject;                                     // 0x0318 (size: 0x1)
    class AActor* CurruntlyDisplayedActorRef;                                         // 0x0320 (size: 0x8)
    bool bAreActorsValid;                                                             // 0x0328 (size: 0x1)
    class UBP_UI_Pendant_Animation_C* PendantAnimationBP;                             // 0x0330 (size: 0x8)
    class ABP_Pendant_UI_3D_C* PendantBP;                                             // 0x0338 (size: 0x8)
    TMap<int32, UMaterialInstanceDynamic*> PendantChargesMIDsByMaterialIndex;         // 0x0340 (size: 0x50)
    bool bAreChargesMIDsValid;                                                        // 0x0390 (size: 0x1)
    bool bAreGlowsMIDsValid;                                                          // 0x0391 (size: 0x1)
    FString b_coin_;                                                                  // 0x0398 (size: 0x10)
    TMap<int32, UMaterialInstanceDynamic*> PendantGlowsMIDsByMaterialIndex;           // 0x03A8 (size: 0x50)
    FRotator PreviousAppliedRotator;                                                  // 0x03F8 (size: 0xC)
    FVector CurrentDisplayedActorCenter;                                              // 0x0404 (size: 0xC)
    FTransform DefaultCurrentActorTransform;                                          // 0x0410 (size: 0x30)
    float AngleRotSpeed;                                                              // 0x0440 (size: 0x4)
    class UTextureRenderTarget2D* MenuRenderTarget;                                   // 0x0448 (size: 0x8)
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;                       // 0x0450 (size: 0x1)
    int32 RenderTargetWidth;                                                          // 0x0454 (size: 0x4)
    int32 RenderTargetHeight;                                                         // 0x0458 (size: 0x4)
    TArray<class UMaterialInstanceDynamic*> UI3D_MIDs;                                // 0x0460 (size: 0x10)
    bool bHasFXBeenActivated;                                                         // 0x0470 (size: 0x1)
    class UMaterialInstanceDynamic* ShrineMID;                                        // 0x0478 (size: 0x8)
    TArray<class AActor*> Light Setup MC;                                             // 0x0480 (size: 0x10)
    TArray<class AActor*> Light Setup Shrine+Pendant;                                 // 0x0490 (size: 0x10)
    class AActor* ManCharcGradiant;                                                   // 0x04A0 (size: 0x8)

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
}; // Size: 0x4A8

#endif
