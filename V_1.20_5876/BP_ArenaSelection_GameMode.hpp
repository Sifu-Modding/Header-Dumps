#ifndef UE4SS_SDK_BP_ArenaSelection_GameMode_HPP
#define UE4SS_SDK_BP_ArenaSelection_GameMode_HPP

class ABP_ArenaSelection_GameMode_C : public ADefaultGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    float DefaultPixelShaderDistScale;                                                // 0x0470 (size: 0x4)
    int32 HandleForbiddenSave;                                                        // 0x0474 (size: 0x4)

    void BPE_TryGetOverrideAge(int32& _iOutAge);
    void BPE_TryGetOverrideGenderAndOutfit(ECharacterGender& _eOutGender, int32& _iOutOutfitIndex, bool& _bOutEnableOutfitPropSpawn);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ArenaSelection_GameMode(int32 EntryPoint);
}; // Size: 0x478

#endif
