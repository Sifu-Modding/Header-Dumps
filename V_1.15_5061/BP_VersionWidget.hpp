#ifndef UE4SS_SDK_BP_VersionWidget_HPP
#define UE4SS_SDK_BP_VersionWidget_HPP

class UBP_VersionWidget_C : public UVersionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Version;

    void Construct();
    void ExecuteUbergraph_BP_VersionWidget(int32 EntryPoint);
};

#endif
