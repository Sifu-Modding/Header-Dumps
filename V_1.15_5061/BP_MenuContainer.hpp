#ifndef UE4SS_SDK_BP_MenuContainer_HPP
#define UE4SS_SDK_BP_MenuContainer_HPP

class UBP_MenuContainer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* MainBorder;
    FBP_MenuContainer_COnAddedToFocusPathDelegate OnAddedToFocusPathDelegate;
    void OnAddedToFocusPathDelegate();

    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void Destruct();
    void ExecuteUbergraph_BP_MenuContainer(int32 EntryPoint);
    void OnAddedToFocusPathDelegate__DelegateSignature();
};

#endif
