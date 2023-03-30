#ifndef UE4SS_SDK_BP_List_Medium_HPP
#define UE4SS_SDK_BP_List_Medium_HPP

class UBP_List_Medium_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBP_List_Medium_Item_C* BP_List_Medium_Item;                                // 0x0318 (size: 0x8)
    class UBP_List_Medium_Item_C* BP_List_Medium_Item_96;                             // 0x0320 (size: 0x8)
    class UVerticalBox* ItemsVerticalBox;                                             // 0x0328 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0330 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0338 (size: 0x8)
    bool ShowBackground;                                                              // 0x0340 (size: 0x1)
    bool isInArena;                                                                   // 0x0341 (size: 0x1)

    void InitStringList(TArray<FText>& Strings, bool SmallFontSize);
    void HideBackground(bool Hide);
    void SetDarkMode(bool DarkMode);
    void InitCheatList(TArray<FGameplayTag>& CheatTag);
    void ClearEntries();
    void TryUpdateTagEntryOrAdd(FGameplayTag GameplayTag);
    void Try Get Existing Tag Item(FGameplayTag GameplayTag, class UBP_ActiveModifierBox_Entry_C*& TaggedEntry);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_List_Medium(int32 EntryPoint);
}; // Size: 0x342

#endif
