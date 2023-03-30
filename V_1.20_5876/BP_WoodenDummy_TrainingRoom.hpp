#ifndef UE4SS_SDK_BP_WoodenDummy_TrainingRoom_HPP
#define UE4SS_SDK_BP_WoodenDummy_TrainingRoom_HPP

class ABP_WoodenDummy_TrainingRoom_C : public ABP_TargetableDummy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class USceneComponent* MCExitPosition;                                            // 0x0338 (size: 0x8)
    class UBoxComponent* InputCollision;                                              // 0x0340 (size: 0x8)
    class UBoxComponent* InteractionCollision;                                        // 0x0348 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject;                             // 0x0350 (size: 0x8)
    FBP_WoodenDummy_TrainingRoom_CWoodenDummy_Activated WoodenDummy_Activated;        // 0x0358 (size: 0x10)
    void WoodenDummy_Activated();
    class UBP_HUD_TrainingRoom_C* TrainingRoomWidget;                                 // 0x0368 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x0370 (size: 0x8)
    TSoftObjectPtr<ABP_TrainingManager_C> trainingManager;                            // 0x0378 (size: 0x28)
    class ABP_TrainingManager_C* trainingManagerObject;                               // 0x03A0 (size: 0x8)
    int32 ReplayTag;                                                                  // 0x03A8 (size: 0x4)

    void SetTrainingRoomWidget(class UBP_HUD_TrainingRoom_C*& TrainingRoomWidget);
    void BndEvt__BP_WoodenDummy_TrainingRoom_InteractionObject_K2Node_ComponentBoundEvent_0_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void ExitTrainingRoom();
    void ReceiveBeginPlay();
    void OnLDLevelDisplayed();
    void OnLDLevelHidden();
    void OnContinueInteraction(bool _bContinue);
    void ExecuteUbergraph_BP_WoodenDummy_TrainingRoom(int32 EntryPoint);
    void WoodenDummy_Activated__DelegateSignature();
}; // Size: 0x3AC

#endif
