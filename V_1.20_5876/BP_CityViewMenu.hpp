#ifndef UE4SS_SDK_BP_CityViewMenu_HPP
#define UE4SS_SDK_BP_CityViewMenu_HPP

class ABP_CityViewMenu_C : public AInteractiveMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject;                             // 0x0318 (size: 0x8)
    FRotator defaultRotation;                                                         // 0x0320 (size: 0xC)
    FBP_CityViewMenu_CZoomIntoHideout ZoomIntoHideout;                                // 0x0330 (size: 0x10)
    void ZoomIntoHideout();
    bool bZoomInStarted;                                                              // 0x0340 (size: 0x1)
    FVector2D prevStickValue;                                                         // 0x0344 (size: 0x8)
    FVector TargetLocation;                                                           // 0x034C (size: 0xC)
    TArray<class AActor*> CirclePositions;                                            // 0x0358 (size: 0x10)
    FVector DirTotarget;                                                              // 0x0368 (size: 0xC)
    FVector OriginPos;                                                                // 0x0374 (size: 0xC)
    FVector OriginDir;                                                                // 0x0380 (size: 0xC)

    void GetHideoutNb(int32& HideoutNb);
    void ReceiveBeginPlay();
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_1_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void ZoomIntoHideout_Event();
    void OnContinueInteraction(bool _bContinue);
    void ExecuteUbergraph_BP_CityViewMenu(int32 EntryPoint);
    void ZoomIntoHideout__DelegateSignature();
}; // Size: 0x38C

#endif
