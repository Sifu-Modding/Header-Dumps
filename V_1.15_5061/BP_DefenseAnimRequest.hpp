#ifndef UE4SS_SDK_BP_DefenseAnimRequest_HPP
#define UE4SS_SDK_BP_DefenseAnimRequest_HPP

class UBP_DefenseAnimRequest_C : public UDefenseAnimRequest
{
    class UAnimSequence* ParrySB_parrier_ArmOutward;
    class UAnimSequence* ParrySB_parrier_ArmOutward_Mirror;
    class UAnimSequence* ParrySB_parrier_ArmInward;
    class UAnimSequence* ParrySB_parrier_ArmInward_Mirror;
    class UAnimSequence* ParrySB_parrier_LegInward;
    class UAnimSequence* ParrySB_parried_ArmInward;
    class UAnimSequence* ParrySB_parried_ArmInward_Mirror;
    class UAnimSequence* ParrySB_parried_ArmOutward;
    class UAnimSequence* ParrySB_parried_ArmOutward_Mirror;
    class UAnimSequence* ParrySB_parried_LegInward;
    class UAnimSequence* ParrySB_parrier_LegInward_Mirror;
    class UAnimSequence* ParryDizzy_parrier_ArmOutward;
    class UAnimSequence* ParryDizzy_parrier_ArmInward;
    class UAnimSequence* ParryDizzy_parrier_LegInward;
    class UAnimSequence* ParrySB_parried_LegInward_Mirror;
    class UAnimSequence* ParryDizzy_parried_ArmInward;
    class UAnimSequence* ParryDizzy_parried_ArmOutward;
    class UAnimSequence* ParryDizzy_parried_LegInward;
    class UAnimSequence* ParryPunish_parrier_ArmInward;
    class UAnimSequence* ParryPunish_parried_ArmInward;
    class UAnimSequence* ParryPunish_parrier_ArmInward_Mirror;
    class UAnimSequence* ParryPunish_parrier_ArmOutward;
    class UAnimSequence* ParryPunish_parried_ArmInward_Mirror;
    class UAnimSequence* ParryPunish_parried_ArmOutward;
    class UAnimSequence* ParryPunish_parrier_ArmOutward_Mirror;
    class UAnimSequence* ParryPunish_parrier_LegInward;
    class UAnimSequence* ParryPunish_parried_ArmOutward_Mirror;
    class UAnimSequence* ParryPunish_parried_LegInward;
    class UAnimSequence* ParryPunish_parrier_LegInward_Mirror;
    class UAnimSequence* ParryDefault_parrier;
    class UAnimSequence* ParrySB_parrier_armOutward_Back;
    class UAnimSequence* ParryPunish_parried_LegInward_Mirror;
    class UAnimSequence* ParryDefault_parried;
    class UAnimSequence* ParrySB_parrier_armOutward_Back_Mirror;
    class UAnimSequence* ParryDizzy_parrier_Back;
    class UAnimSequence* ParryPunish_parrier_armOutward_Back;
    class UAnimSequence* ParrySB_parried_armOutward_Back;
    class UAnimSequence* ParrySB_parried_armOutward_Back_Mirror;
    class UAnimSequence* ParryDizzy_parried_Back;
    class UAnimSequence* ParryPunish_parried_armOutward_Back;
    class UAnimSequence* ParryPunish_parrier_armOutward_Back_Mirror;
    class UAnimSequence* ParryPunish_parried_armOutward_Back_Mirror;
    class UAnimSequence* ParrySB_parrier_armInward_Back;
    class UAnimSequence* ParrySB_parrier_armInward_Back_Mirror;
    class UAnimSequence* ParryPunish_parrier_armInward_Back;
    class UAnimSequence* ParryPunish_parrier_armInward_Back_Mirror;
    class UAnimSequence* ParrySB_parried_armInward_Back;
    class UAnimSequence* ParrySB_parried_armInward_Back_Mirror;
    class UAnimSequence* ParryPunish_parried_armInward_Back;
    class UAnimSequence* ParryPunish_parried_armInward_Back_Mirror;
    bool disable SB Reorient on back;
    bool disable Dizzy Reorient on back;
    bool disable Parry Punish Reorient on back;

    void HandleMirror(class UAnimSequence* Anim, class UAnimSequence* AnimMirror, bool mirror, class UAnimSequence*& ResultAnim, bool& resultMirror);
    void BPE_GetHitDefenseAnimation(const FHitDescription& _hitDescription, class AFightingCharacter* _grabber, FDefenderAnimInfos& _outDefenderAnims, FDefenseAnimInfos& _outDefendeeAnims);
};

#endif
