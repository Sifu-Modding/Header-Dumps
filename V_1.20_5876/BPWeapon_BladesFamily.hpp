#ifndef UE4SS_SDK_BPWeapon_BladesFamily_HPP
#define UE4SS_SDK_BPWeapon_BladesFamily_HPP

class ABPWeapon_BladesFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)

    void BPE_OnObjectBreak(bool _bIsSilent);
    void ExecuteUbergraph_BPWeapon_BladesFamily(int32 EntryPoint);
}; // Size: 0x908

#endif
