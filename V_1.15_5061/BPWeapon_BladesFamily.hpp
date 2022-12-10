#ifndef UE4SS_SDK_BPWeapon_BladesFamily_HPP
#define UE4SS_SDK_BPWeapon_BladesFamily_HPP

class ABPWeapon_BladesFamily_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnObjectBreak(bool _bIsSilent);
    void ExecuteUbergraph_BPWeapon_BladesFamily(int32 EntryPoint);
};

#endif
