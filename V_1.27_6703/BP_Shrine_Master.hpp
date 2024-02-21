#ifndef UE4SS_SDK_BP_Shrine_Master_HPP
#define UE4SS_SDK_BP_Shrine_Master_HPP

class ABP_Shrine_Master_C : public ASCStaticMeshPrimInstActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02C8 (size: 0x8)
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;          // 0x02D0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02E0 (size: 0x8)
    class USCSaveGameComponent* SCSaveGame;                                           // 0x02E8 (size: 0x8)
    class USceneComponent* HintComponent;                                             // 0x02F0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02F8 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject;                             // 0x0300 (size: 0x8)
    int32 MaxAge;                                                                     // 0x0308 (size: 0x4)
    int32 MinXPCombo;                                                                 // 0x030C (size: 0x4)
    int32 MinChargeCount;                                                             // 0x0310 (size: 0x4)
    class AFightingPlayerController* CurrentPlayerController;                         // 0x0318 (size: 0x8)
    bool bUsed;                                                                       // 0x0320 (size: 0x1)
    TArray<FShrineRewardStruct> Rewards;                                              // 0x0328 (size: 0x10)
    bool bShowAgeHUD;                                                                 // 0x0338 (size: 0x1)
    class UUserWidget* StatusWidget;                                                  // 0x0340 (size: 0x8)
    class UAkAudioEvent* NearEnabledShrineEvent;                                      // 0x0348 (size: 0x8)
    class UAkAudioEvent* NearDisabledShrineEvent;                                     // 0x0350 (size: 0x8)
    bool bWasShrineUsable;                                                            // 0x0358 (size: 0x1)
    float ScoreFloor1;                                                                // 0x035C (size: 0x4)
    float ScoreFloor2;                                                                // 0x0360 (size: 0x4)
    float ScoreFloor3;                                                                // 0x0364 (size: 0x4)
    class UMaterialInstanceDynamic* ShrineMID;                                        // 0x0368 (size: 0x8)
    bool Rejuvenate;                                                                  // 0x0370 (size: 0x1)

    bool CanInteract(class APawn* _Instigator, FText& _outReason);
    void LaunchRejuvenateFeedback(class UBP_HUD_C* BP_HUD);
    void UpdateStencilForHighContrast();
    void EnsureShrineMID();
    void SetShrineUnchargedMaterial();
    bool NeedsToShowUI();
    void DisplayConditions(bool Display);
    void UpdateUsableStatus(bool bFirstUpdate);
    void UserConstructionScript();
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_1_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void OnRewardSelected(TSubclassOf<class UGameplayEffect> SelectedReward);
    void OnCurrentMenuChanged_Event_0(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void BndEvt__SCSaveGame_K2Node_ComponentBoundEvent_4_OnUpdatedFromSave__DelegateSignature();
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_5_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_7_FailedUseObject__DelegateSignature(class APlayerController* PlayerController, FText FailReason);
    void CE_OnUseInteractionObject(class APlayerController* PlayerController);
    void BndEvt__Usable_OptionListenerComponent_K2Node_ComponentBoundEvent_2_OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes _eOptionType);
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_0_OnUsableChanged__DelegateSignature();
    void OnAlertLevelChanged(EAlertLevel EAlertLevel);
    void BndEvt__BP_Shrine_Master_InteractionObject_K2Node_ComponentBoundEvent_3_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void OnShrineCancelled_Event_0();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Shrine_Master(int32 EntryPoint);
}; // Size: 0x371

#endif
