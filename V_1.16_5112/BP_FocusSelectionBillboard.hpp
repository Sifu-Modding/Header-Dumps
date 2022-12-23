#ifndef UE4SS_SDK_BP_FocusSelectionBillboard_HPP
#define UE4SS_SDK_BP_FocusSelectionBillboard_HPP

class ABP_FocusSelectionBillboard_C : public ABP_AimingBillboard_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTargetableActorComponent* TargetableActor;
    class UMaterialInstanceDynamic* SelectedAIMaterial;
    class UMaterialInstanceDynamic* SelectedItemMaterial;
    TArray<class UMaterialInstanceDynamic*> SelectedAIOriginalsMaterials;
    bool bAreMaterialsSaved;
    TArray<class UMeshComponent*> AllFocusedMeshes;
    int32 TEMP_idx;

    void SaveMaterialsIntoArray(TArray<class UMaterialInterface*>& Array);
    void ShowVitalPointsFXPO();
    void HideVitalPointsFXPO();
    void SetStencilAndMaterialsBack(class AAimingBillboardActor* AimingBillboardInput);
    void SetupNewFocusSelectedAI(class AAimingBillboardActor* AimingBillboardInput);
    void BP_OnSelectionChanged(bool _bSelected, class AAimingBillboardActor* aimingBillboard);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FocusSelectionBillboard(int32 EntryPoint);
};

#endif
