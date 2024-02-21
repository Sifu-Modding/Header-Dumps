#ifndef UE4SS_SDK_BP_HUD_FocusTarget_HPP
#define UE4SS_SDK_BP_HUD_FocusTarget_HPP

class UBP_HUD_FocusTarget_C : public UVitalPointWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UWidgetAnimation* SelectedAnim;                                             // 0x0320 (size: 0x8)
    class UWidgetAnimation* TargetValidatedOnMe;                                      // 0x0328 (size: 0x8)
    class UImage* ImgCost;                                                            // 0x0330 (size: 0x8)
    class URetainerBox* VitalBox;                                                     // 0x0338 (size: 0x8)
    class UCanvasPanel* VitalCanvas;                                                  // 0x0340 (size: 0x8)
    FVector Location;                                                                 // 0x0348 (size: 0xC)
    float Timer;                                                                      // 0x0354 (size: 0x4)
    float PlayerDistance;                                                             // 0x0358 (size: 0x4)
    int32 FocusCost;                                                                  // 0x035C (size: 0x4)
    TArray<FSlateBrush> VP_On_Array;                                                  // 0x0360 (size: 0x10)
    TArray<FSlateBrush> VP_Off_Array;                                                 // 0x0370 (size: 0x10)
    TArray<FSlateBrush> VP_Select_Array;                                              // 0x0380 (size: 0x10)
    class AVitalPointActor* CurrentPointSelected;                                     // 0x0390 (size: 0x8)
    float FocusValue;                                                                 // 0x0398 (size: 0x4)
    bool Display;                                                                     // 0x039C (size: 0x1)

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
}; // Size: 0x39D

#endif
