#ifndef UE4SS_SDK_Usable_OptionListenerComponent_HPP
#define UE4SS_SDK_Usable_OptionListenerComponent_HPP

class UUsable_OptionListenerComponent_C : public UOptionListenerComponent
{
    bool ExpectedUsable;                                                              // 0x00D8 (size: 0x1)
    TArray<class UMeshComponent*> MatMeshComps;                                       // 0x00E0 (size: 0x10)
    TArray<class USceneComponent*> ToHideSceneComps;                                  // 0x00F0 (size: 0x10)
    bool bOverrideRenderCustomDepth;                                                  // 0x0100 (size: 0x1)
    bool bRenderCustomDepthOverriden;                                                 // 0x0101 (size: 0x1)
    bool ExpectedSelected;                                                            // 0x0102 (size: 0x1)
    bool bOverrideSelected;                                                           // 0x0103 (size: 0x1)
    bool bOverridenSelected;                                                          // 0x0104 (size: 0x1)
    FUsable_OptionListenerComponent_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0108 (size: 0x10)
    void UseObject(class APlayerController* bpp__PlayerController__pf);
    int32 Temp_int_Array_Index_Variable;                                              // 0x0118 (size: 0x4)
    int32 Temp_int_Loop_Counter_Variable;                                             // 0x011C (size: 0x4)
    EGameOptionTypes K2Node_Event__eOptionType;                                       // 0x0120 (size: 0x1)
    FUsable_OptionListenerComponent_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0124 (size: 0x10)
    void UseObject(class APlayerController* bpp__PlayerController__pf);
    TArray<class UInteractionObjectComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x0138 (size: 0x10)
    class APlayerController* K2Node_CustomEvent_PlayerController_1;                   // 0x0148 (size: 0x8)
    class UInteractionObjectComponent* CallFunc_Array_Get_Item;                       // 0x0150 (size: 0x8)
    class APlayerController* K2Node_CustomEvent_PlayerController;                     // 0x0158 (size: 0x8)

    void UpdateUsable();
    void UpdateSelected();
    void UpdateRenderCustomDepth();
    void SetUsable(bool bpp__InUsable__pf);
    void ReceiveOnOptionChanged(EGameOptionTypes bpp___eOptionType__pf);
    void ReceiveBeginPlay();
    void OnNoLongerCurrentInteractionObject_Event_0(class APlayerController* bpp__PlayerController__pf);
    void OnBecomeCurrentInteractionObject_Event_0(class APlayerController* bpp__PlayerController__pf);
    bool GetIsSelected();
    void UseObject__DelegateSignature(class APlayerController* bpp__PlayerController__pf);
}; // Size: 0x160

#endif
