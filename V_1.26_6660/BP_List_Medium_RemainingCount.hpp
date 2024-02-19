#ifndef UE4SS_SDK_BP_List_Medium_RemainingCount_HPP
#define UE4SS_SDK_BP_List_Medium_RemainingCount_HPP

class UBP_List_Medium_RemainingCount_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UPerPlatformTextBlock* CheatSmallDesc;                                      // 0x0318 (size: 0x8)
    class UPerPlatformImage* Icon_4;                                                  // 0x0320 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0328 (size: 0x8)
    class UPerPlatformTextBlock* TXT_Cheats_Number;                                   // 0x0330 (size: 0x8)
    FGameplayTag CheatGameplayTag;                                                    // 0x0338 (size: 0x8)
    bool isInArena;                                                                   // 0x0340 (size: 0x1)

    void Fill Text(int32 Text);
    void SetBlack(bool Black);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_List_Medium_RemainingCount(int32 EntryPoint);
}; // Size: 0x341

#endif
