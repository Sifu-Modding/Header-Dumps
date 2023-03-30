#ifndef UE4SS_SDK_Wuguan_Sound_Global_HPP
#define UE4SS_SDK_Wuguan_Sound_Global_HPP

class AWuguan_Sound_Global_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)

    void BPE_AllSoundBanksLoaded();
    void ExecuteUbergraph_Wuguan_Sound_Global(int32 EntryPoint);
}; // Size: 0x438

#endif
