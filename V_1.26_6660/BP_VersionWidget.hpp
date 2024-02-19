#ifndef UE4SS_SDK_BP_VersionWidget_HPP
#define UE4SS_SDK_BP_VersionWidget_HPP

class UBP_VersionWidget_C : public UVersionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UTextBlock* Version;                                                        // 0x0328 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BP_VersionWidget(int32 EntryPoint);
}; // Size: 0x330

#endif
