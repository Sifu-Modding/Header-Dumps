#ifndef UE4SS_SDK_BP_WeaponData_HPP
#define UE4SS_SDK_BP_WeaponData_HPP

class UBP_WeaponData_C : public UBaseWeaponData
{
    TEnumAsByte<VariableWeightLayers> PickUpAnim_midVW;
    TEnumAsByte<VariableWeightLayers> PickUpAnim_floorVW;
    TEnumAsByte<VariableWeightLayers> WeaponIdleVW;
    class UCombo* MainCharCombo;
    class UGuardDB* GuardDB;
    TEnumAsByte<VariableWeightLayers> DropAnimVW;
    FAnimContainer DropAnim;
    FAnimContainer HandSwapAnim;
    TEnumAsByte<VariableWeightLayers> HandSwapAnimVW;
    FBlendSpaceContainer BlendSpace_V1_Front_Tense;
    FBlendSpaceContainer BlendSpace_V1_Back_Tense;
    FAnimContainer V0_FL_Tense;
    FAnimContainer V0_FR_Tense;
    FAnimContainer V0_Freemove;
    bool bUseVariableWeight;
    class UBlendProfile* BlendProfile_Idle_V1;
    class UBlendProfile* BlendProfile_Idle_V0;
    class UBlendProfile* BlendProfile_Idle_V2;
    class UBlendProfile* BlendProfile_Idle_V3;
    FBlendSpaceContainer BlendSpace_V2_Front_Tense;
    FBlendSpaceContainer BlendSpace_V2_Back_Tense;
    FBlendSpaceContainer BlendSpace_V3_Front_Tense;
    FBlendSpaceContainer BlendSpace_V3_Back_Tense;
    class UBlendProfile* BlendProfile_handSwap_V0;
    FAnimContainer footPickUpAnim;
    FAnimContainer midPickUpAnim;
    class UBlendProfile* BlendProfile_Pickup_floor_V1;
    class UAnimSequence* Pushed;
    class UAnimSequence* PushedForWeapon;
    TSubclassOf<class UBP_HitAnims_C> HitAnimRequest;
    class UBaseMovementDB* MovementDB;
    FAnimContainer footPickUpAnimMirror;
    FAnimContainer midPickUpAnimMirror;
    class UBlendProfile* BlendProfile_Drop_V0;
    class UBlendProfile* BlendProfile_WeaponActionMid_V0;
    FVariableWeightLayerToBoneMask GuardVWInfo;
    FVariableWeightLayerToBoneMask TraversalVWInfo;
    class UBlendProfile* BlendProfile_PickupObject_V0;
    class UBlendProfile* BlendProfile_PickupObject_V1;
    class UBlendProfile* BlendProfile_PickupObject_V2;

    void SelectPickupAnim();
    void BPE_OnUnequipWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_PreDropWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_OnEquipWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_PrePickUpWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon, bool _bMirror);
};

#endif
