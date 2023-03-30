#ifndef UE4SS_SDK_AnimMeta_FengjieDefenderFakeWeaponAnim_HPP
#define UE4SS_SDK_AnimMeta_FengjieDefenderFakeWeaponAnim_HPP

class UAnimMeta_FengjieDefenderFakeWeaponAnim_C : public USCAnimMetaData
{
    class UAnimSequence* FakeAnimSequence;                                            // 0x0160 (size: 0x8)
    bool FakeAnimSequenceLooping;                                                     // 0x0168 (size: 0x1)

    void BPE_OnPlay(uint8 _uiOrderId, class ABaseCharacter* _character);
}; // Size: 0x169

#endif
