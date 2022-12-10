#ifndef UE4SS_SDK_BP_HUD_FocusTarget_HPP
#define UE4SS_SDK_BP_HUD_FocusTarget_HPP

class UBP_HUD_FocusTarget_C : public UVitalPointWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SelectedAnim;
    class UWidgetAnimation* TargetValidatedOnMe;
    class UImage* ImgCost;
    class URetainerBox* VitalBox;
    class UCanvasPanel* VitalCanvas;
    FVector Location;
    float Timer;
    float PlayerDistance;
    int32 FocusCost;
    TArray<FSlateBrush> VP_On_Array;
    TArray<FSlateBrush> VP_Off_Array;
    TArray<FSlateBrush> VP_Select_Array;
    class AVitalPointActor* CurrentPointSelected;
    float FocusValue;
    bool Display;

    void HUD Visibility();
    void OnSelected(bool bSelected, class AVitalPointActor* vitalPoint);
    void UnselectedCost(class AVitalPointActor* VitalPointLocal);
    void SelectedCost(class AVitalPointActor* VitalPointLocal);
    void IsConsumable(class AVitalPointActor* vitalPoint, bool& Consumable, int32& FocusCost);
    void SetBrushesArrays();
    void SetBrushFromSocket(TArray<FSlateBrush>& Array, class AVitalPointActor* Target, class UImage* Image);
    void SetBrushFromArray(TArray<FSlateBrush>& Array, int32 Variable, class UImage* Image);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_OnVitalPointActorSet(class AVitalPointActor* _vitalPointOwner);
    void BPE_OnVitalPointActorRemove(class AVitalPointActor* _vitalPointPreviousOwner);
    void BPE_OnGetFromPool();
    void BPE_OnReturnToPool();
    void FocusAttackLaunched(bool _bCancel);
    void BPE_BindToDelegates(bool _bPawnOnly);
    void FocusValidated(class AVitalPointActor* vitalPoint);
    void ExecuteUbergraph_BP_HUD_FocusTarget(int32 EntryPoint);
};

#endif
