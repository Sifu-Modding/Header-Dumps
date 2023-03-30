#ifndef UE4SS_SDK_BP_Btn_PickUp_HPP
#define UE4SS_SDK_BP_Btn_PickUp_HPP

class UBP_Btn_PickUp_C : public UUserWidget
{
    class UWidgetAnimation* EllipseOnAnim;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* TargetAnim;                                               // 0x0270 (size: 0x8)
    class UBP_InputAction_C* BP_InputAction;                                          // 0x0278 (size: 0x8)
    class UOverlay* ItemOverlay;                                                      // 0x0280 (size: 0x8)
    class UImage* ObjectIcon;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* TxtAction;                                                      // 0x0290 (size: 0x8)
    FVector Location;                                                                 // 0x0298 (size: 0xC)
    float Timer;                                                                      // 0x02A4 (size: 0x4)
    float PlayerDistance;                                                             // 0x02A8 (size: 0x4)
    class AInteractiveMovable* CurrentObject;                                         // 0x02B0 (size: 0x8)
    class AInteractiveMovable* NewObject;                                             // 0x02B8 (size: 0x8)
    bool Temp_bool_Variable;                                                          // 0x02C0 (size: 0x1)
    float Temp_float_Variable;                                                        // 0x02C4 (size: 0x4)
    float Temp_float_Variable_1;                                                      // 0x02C8 (size: 0x4)
    FInputPresetsEnumHandler K2Node_MakeStruct_InputPresetsEnumHandler;               // 0x02D0 (size: 0x50)
    bool CallFunc_BPE_GetHUDActionText__bUsable;                                      // 0x0320 (size: 0x1)
    bool Temp_bool_Variable_1;                                                        // 0x0321 (size: 0x1)
    FInputPresetsEnumHandler K2Node_MakeStruct_InputPresetsEnumHandler_1;             // 0x0328 (size: 0x50)
    float K2Node_Select_Default;                                                      // 0x0378 (size: 0x4)
    bool Temp_bool_Variable_2;                                                        // 0x037C (size: 0x1)
    float Temp_float_Variable_2;                                                      // 0x0380 (size: 0x4)
    float Temp_float_Variable_3;                                                      // 0x0384 (size: 0x4)
    TScriptInterface<class IHitIngredient_C> K2Node_DynamicCast_AsHit_Ingredient;     // 0x0388 (size: 0x10)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0398 (size: 0x1)
    class UTexture2D* CallFunc_GetInteractionIcon_Icon;                               // 0x03A0 (size: 0x8)
    class AInteractiveMovable* K2Node_CustomEvent_MovableObj;                         // 0x03A8 (size: 0x8)
    class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon;                              // 0x03B0 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x03B8 (size: 0x1)
    bool K2Node_CustomEvent_On_Ellipse;                                               // 0x03B9 (size: 0x1)
    FMappingID K2Node_Select_Default_1;                                               // 0x03C0 (size: 0x58)
    float K2Node_Select_Default_2;                                                    // 0x0418 (size: 0x4)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x041C (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x0454 (size: 0x4)

    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void SetIcon(class AInteractiveMovable* bpp__MovableObj__pf);
    void OnEllipseEvent(bool bpp__OnxEllipse__pfT);
    void EllipseAnim(bool bpp__LocalEllipse__pf);
}; // Size: 0x458

#endif
