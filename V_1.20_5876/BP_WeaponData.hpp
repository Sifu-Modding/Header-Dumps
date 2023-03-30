#ifndef UE4SS_SDK_BP_WeaponData_HPP
#define UE4SS_SDK_BP_WeaponData_HPP

class UBP_WeaponData_C : public UBaseWeaponData
{
    TEnumAsByte<VariableWeightLayers> PickUpAnim_midVW;                               // 0x0190 (size: 0x1)
    TEnumAsByte<VariableWeightLayers> PickUpAnim_floorVW;                             // 0x0191 (size: 0x1)
    TEnumAsByte<VariableWeightLayers> WeaponIdleVW;                                   // 0x0192 (size: 0x1)
    class UCombo* MainCharCombo;                                                      // 0x0198 (size: 0x8)
    class UGuardDB* GuardDB;                                                          // 0x01A0 (size: 0x8)
    TEnumAsByte<VariableWeightLayers> DropAnimVW;                                     // 0x01A8 (size: 0x1)
    FAnimContainer DropAnim;                                                          // 0x01B0 (size: 0x18)
    FAnimContainer HandSwapAnim;                                                      // 0x01C8 (size: 0x18)
    TEnumAsByte<VariableWeightLayers> HandSwapAnimVW;                                 // 0x01E0 (size: 0x1)
    FBlendSpaceContainer BlendSpace_V1_Front_Tense;                                   // 0x01E8 (size: 0x10)
    FBlendSpaceContainer BlendSpace_V1_Back_Tense;                                    // 0x01F8 (size: 0x10)
    FAnimContainer V0_FL_Tense;                                                       // 0x0208 (size: 0x18)
    FAnimContainer V0_FR_Tense;                                                       // 0x0220 (size: 0x18)
    FAnimContainer V0_Freemove;                                                       // 0x0238 (size: 0x18)
    bool bUseVariableWeight;                                                          // 0x0250 (size: 0x1)
    class UBlendProfile* BlendProfile_Idle_V1;                                        // 0x0258 (size: 0x8)
    class UBlendProfile* BlendProfile_Idle_V0;                                        // 0x0260 (size: 0x8)
    class UBlendProfile* BlendProfile_Idle_V2;                                        // 0x0268 (size: 0x8)
    class UBlendProfile* BlendProfile_Idle_V3;                                        // 0x0270 (size: 0x8)
    FBlendSpaceContainer BlendSpace_V2_Front_Tense;                                   // 0x0278 (size: 0x10)
    FBlendSpaceContainer BlendSpace_V2_Back_Tense;                                    // 0x0288 (size: 0x10)
    FBlendSpaceContainer BlendSpace_V3_Front_Tense;                                   // 0x0298 (size: 0x10)
    FBlendSpaceContainer BlendSpace_V3_Back_Tense;                                    // 0x02A8 (size: 0x10)
    class UBlendProfile* BlendProfile_handSwap_V0;                                    // 0x02B8 (size: 0x8)
    FAnimContainer footPickUpAnim;                                                    // 0x02C0 (size: 0x18)
    FAnimContainer midPickUpAnim;                                                     // 0x02D8 (size: 0x18)
    class UBlendProfile* BlendProfile_Pickup_floor_V1;                                // 0x02F0 (size: 0x8)
    class UAnimSequence* Pushed;                                                      // 0x02F8 (size: 0x8)
    class UAnimSequence* PushedForWeapon;                                             // 0x0300 (size: 0x8)
    TSubclassOf<class UBP_HitAnims_C> HitAnimRequest;                                 // 0x0308 (size: 0x8)
    class UBaseMovementDB* MovementDB;                                                // 0x0310 (size: 0x8)
    FAnimContainer footPickUpAnimMirror;                                              // 0x0318 (size: 0x18)
    FAnimContainer midPickUpAnimMirror;                                               // 0x0330 (size: 0x18)
    class UBlendProfile* BlendProfile_Drop_V0;                                        // 0x0348 (size: 0x8)
    class UBlendProfile* BlendProfile_WeaponActionMid_V0;                             // 0x0350 (size: 0x8)
    FVariableWeightLayerToBoneMask GuardVWInfo;                                       // 0x0358 (size: 0x58)
    FVariableWeightLayerToBoneMask TraversalVWInfo;                                   // 0x03B0 (size: 0x58)
    class UBlendProfile* BlendProfile_PickupObject_V0;                                // 0x0408 (size: 0x8)
    class UBlendProfile* BlendProfile_PickupObject_V1;                                // 0x0410 (size: 0x8)
    class UBlendProfile* BlendProfile_PickupObject_V2;                                // 0x0418 (size: 0x8)

    void SelectPickupAnim();
    void BPE_OnUnequipWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_PreDropWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_OnEquipWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_PrePickUpWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon, bool _bMirror);
}; // Size: 0x420

#endif
