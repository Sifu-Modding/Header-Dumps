#ifndef UE4SS_SDK_BP_Menu_DemoPreStart_HPP
#define UE4SS_SDK_BP_Menu_DemoPreStart_HPP

class UBP_Menu_DemoPreStart_C : public UDemoPreStartMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* Image_111;                                                          // 0x0410 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BP_Menu_DemoPreStart(int32 EntryPoint);
}; // Size: 0x418

#endif
