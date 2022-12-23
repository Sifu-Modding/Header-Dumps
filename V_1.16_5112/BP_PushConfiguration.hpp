#ifndef UE4SS_SDK_BP_PushConfiguration_HPP
#define UE4SS_SDK_BP_PushConfiguration_HPP

class UBP_PushConfiguration_C : public UPushConfiguration
{
    FPushAnims FarAnims;
    FPushAnims CloseAnims;
    bool InstigatorShouldSnapToVictim;
    TMap<TEnumAsByte<EnvironmentalImpactReceiverType>, FPushAnims> PushEnvClose;
    FHitBox PushEnvCloseHitbox;
    TMap<class ESCCardinalPoints, class FPushTraversalAnimContainer> PushTraversals;
    TArray<FPushConfigurationWeaponInfos> WeaponAnims;

    void GetCloseAnims(class AFightingCharacter* Victim, FPushAnims& FarAnims);
    void GetFarAnims(class AFightingCharacter* Victim, FPushAnims& FarAnims);
    void Find Weapon Anims(class AFightingCharacter* Victim, FPushConfigurationWeaponInfos& Value, bool& Success);
    void GetPushEnvCloseAnim(TEnumAsByte<EnvironmentalImpactReceiverType> ReceiverType, class AFightingCharacter* Victim, FPushAnims& Anims, bool& Success);
    bool BPE_GetPushCloseAnimOnImpactHeight(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, float _fHeight, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushCloseTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, FPushTraversalAnimContainer& _outOnVoidResult);
    bool BPE_GetPushCloseAnimOnTraversal(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, const FTraversalInfo& _traversalInfo, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushCloseAnimOnEnv(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, class UBaseEnvironmentalInteractionComponent* _env, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushAnims(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, FPushAnims& _outAnims, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap);
};

#endif
