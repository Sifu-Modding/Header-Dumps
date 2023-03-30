#ifndef UE4SS_SDK_CustomPushHitbox_HPP
#define UE4SS_SDK_CustomPushHitbox_HPP

class UCustomPushHitbox_C : public UHitBoxMetaData
{
    FHitBox CustomWallSplashHitbox;                                                   // 0x0028 (size: 0x298)
    FHitBox CustomPushedHitbox;                                                       // 0x02C0 (size: 0x298)

}; // Size: 0x558

#endif
