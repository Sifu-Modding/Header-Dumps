#ifndef UE4SS_SDK_AvoidPayload_HPP
#define UE4SS_SDK_AvoidPayload_HPP

class UAvoidPayload_C : public UAbilityPayload
{
    FHitBox HitBox;                                                                   // 0x0028 (size: 0x298)
    bool AttackMirror;                                                                // 0x02C0 (size: 0x1)
    bool HitboxSet;                                                                   // 0x02C1 (size: 0x1)

}; // Size: 0x2C2

#endif
