#ifndef UE4SS_SDK_BP_FocusSelectionBillboard_HPP
#define UE4SS_SDK_BP_FocusSelectionBillboard_HPP

class ABP_FocusSelectionBillboard_C : public ABP_AimingBillboard_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UTargetableActorComponent* TargetableActor;                                 // 0x0340 (size: 0x8)
    class UMaterialInstanceDynamic* SelectedAIMaterial;                               // 0x0348 (size: 0x8)
    class UMaterialInstanceDynamic* SelectedItemMaterial;                             // 0x0350 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> SelectedAIOriginalsMaterials;             // 0x0358 (size: 0x10)
    bool bAreMaterialsSaved;                                                          // 0x0368 (size: 0x1)
    TArray<class UMeshComponent*> AllFocusedMeshes;                                   // 0x0370 (size: 0x10)
    int32 TEMP_idx;                                                                   // 0x0380 (size: 0x4)

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
}; // Size: 0x384

#endif
