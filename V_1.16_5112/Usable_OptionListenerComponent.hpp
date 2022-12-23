#ifndef UE4SS_SDK_Usable_OptionListenerComponent_HPP
#define UE4SS_SDK_Usable_OptionListenerComponent_HPP

class UUsable_OptionListenerComponent_C : public UOptionListenerComponent
{
    bool ExpectedUsable;
    TArray<class UMeshComponent*> MatMeshComps;
    TArray<class USceneComponent*> ToHideSceneComps;
    bool bOverrideRenderCustomDepth;
    bool bRenderCustomDepthOverriden;
    bool ExpectedSelected;
    bool bOverrideSelected;
    bool bOverridenSelected;
    FUsable_OptionListenerComponent_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void UseObject(class APlayerController* bpp__PlayerController__pf);
    int32 Temp_int_Array_Index_Variable;
    int32 Temp_int_Loop_Counter_Variable;
    EGameOptionTypes K2Node_Event__eOptionType;
    FUsable_OptionListenerComponent_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void UseObject(class APlayerController* bpp__PlayerController__pf);
    TArray<class UInteractionObjectComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;
    class APlayerController* K2Node_CustomEvent_PlayerController_1;
    class UInteractionObjectComponent* CallFunc_Array_Get_Item;
    class APlayerController* K2Node_CustomEvent_PlayerController;

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
};

#endif
