#ifndef UE4SS_SDK_BP_Menu_DemoPreStart_HPP
#define UE4SS_SDK_BP_Menu_DemoPreStart_HPP

class UBP_Menu_DemoPreStart_C : public UDemoPreStartMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_111;

    void Construct();
    void ExecuteUbergraph_BP_Menu_DemoPreStart(int32 EntryPoint);
};

#endif
