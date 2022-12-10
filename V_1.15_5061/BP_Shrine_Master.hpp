#ifndef UE4SS_SDK_BP_Shrine_Master_HPP
#define UE4SS_SDK_BP_Shrine_Master_HPP

class ABP_Shrine_Master_C : public ASCStaticMeshPrimInstActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;
    class UBoxComponent* Box;
    class UTextRenderComponent* TextRender;
    class USCSaveGameComponent* SCSaveGame;
    class USceneComponent* HintComponent;
    class USphereComponent* Sphere;
    class UInteractionObjectComponent* InteractionObject;
    int32 MaxAge;
    int32 MinXPCombo;
    int32 MinChargeCount;
    class AFightingPlayerController* CurrentPlayerController;
    bool bUsed;
    TArray<FShrineRewardStruct> Rewards;
    bool bShowAgeHUD;
    class UUserWidget* StatusWidget;
    class UAkAudioEvent* NearEnabledShrineEvent;
    class UAkAudioEvent* NearDisabledShrineEvent;
    bool bWasShrineUsable;
    float ScoreFloor1;
    float ScoreFloor2;
    float ScoreFloor3;
    class UMaterialInstanceDynamic* ShrineMID;
    bool Rejuvenate;

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
};

#endif
