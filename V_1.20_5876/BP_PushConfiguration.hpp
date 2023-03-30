#ifndef UE4SS_SDK_BP_PushConfiguration_HPP
#define UE4SS_SDK_BP_PushConfiguration_HPP

class UBP_PushConfiguration_C : public UPushConfiguration
{
    FPushAnims FarAnims;                                                              // 0x0040 (size: 0xA8)
    FPushAnims CloseAnims;                                                            // 0x00E8 (size: 0xA8)
    bool InstigatorShouldSnapToVictim;                                                // 0x0190 (size: 0x1)
    TMap<TEnumAsByte<EnvironmentalImpactReceiverType>, FPushAnims> PushEnvClose;      // 0x0198 (size: 0x50)
    FHitBox PushEnvCloseHitbox;                                                       // 0x01E8 (size: 0x298)
    TMap<class ESCCardinalPoints, class FPushTraversalAnimContainer> PushTraversals;  // 0x0480 (size: 0x50)
    TArray<FPushConfigurationWeaponInfos> WeaponAnims;                                // 0x04D0 (size: 0x10)

    void GetCloseAnims(class AFightingCharacter* Victim, FPushAnims& FarAnims);
    void GetFarAnims(class AFightingCharacter* Victim, FPushAnims& FarAnims);
    void Find Weapon Anims(class AFightingCharacter* Victim, FPushConfigurationWeaponInfos& Value, bool& Success);
    void GetPushEnvCloseAnim(TEnumAsByte<EnvironmentalImpactReceiverType> ReceiverType, class AFightingCharacter* Victim, FPushAnims& Anims, bool& Success);
    bool BPE_GetPushCloseAnimOnImpactHeight(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, float _fHeight, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushCloseTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, FPushTraversalAnimContainer& _outOnVoidResult);
    bool BPE_GetPushCloseAnimOnTraversal(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, const FTraversalInfo& _traversalInfo, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushCloseAnimOnEnv(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, class UBaseEnvironmentalInteractionComponent* _env, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushAnims(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, FPushAnims& _outAnims, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap);
}; // Size: 0x4E0

#endif
