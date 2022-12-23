#ifndef UE4SS_SDK_BP_Btn_PickUp_HPP
#define UE4SS_SDK_BP_Btn_PickUp_HPP

class UBP_Btn_PickUp_C : public UUserWidget
{
    class UWidgetAnimation* EllipseOnAnim;
    class UWidgetAnimation* TargetAnim;
    class UBP_InputAction_C* BP_InputAction;
    class UOverlay* ItemOverlay;
    class UImage* ObjectIcon;
    class UTextBlock* TxtAction;
    FVector Location;
    float Timer;
    float PlayerDistance;
    class AInteractiveMovable* CurrentObject;
    class AInteractiveMovable* NewObject;
    bool Temp_bool_Variable;
    float Temp_float_Variable;
    float Temp_float_Variable_1;
    FInputPresetsEnumHandler K2Node_MakeStruct_InputPresetsEnumHandler;
    bool CallFunc_BPE_GetHUDActionText__bUsable;
    bool Temp_bool_Variable_1;
    FInputPresetsEnumHandler K2Node_MakeStruct_InputPresetsEnumHandler_1;
    float K2Node_Select_Default;
    bool Temp_bool_Variable_2;
    float Temp_float_Variable_2;
    float Temp_float_Variable_3;
    TScriptInterface<class IHitIngredient_C> K2Node_DynamicCast_AsHit_Ingredient;
    bool K2Node_DynamicCast_bSuccess;
    class UTexture2D* CallFunc_GetInteractionIcon_Icon;
    class AInteractiveMovable* K2Node_CustomEvent_MovableObj;
    class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon;
    bool K2Node_DynamicCast_bSuccess_1;
    bool K2Node_CustomEvent_On_Ellipse;
    FMappingID K2Node_Select_Default_1;
    float K2Node_Select_Default_2;
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;

    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void SetIcon(class AInteractiveMovable* bpp__MovableObj__pf);
    void OnEllipseEvent(bool bpp__OnxEllipse__pfT);
    void EllipseAnim(bool bpp__LocalEllipse__pf);
};

#endif
