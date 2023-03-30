#ifndef UE4SS_SDK_BP_MenuContainer_HPP
#define UE4SS_SDK_BP_MenuContainer_HPP

class UBP_MenuContainer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0270 (size: 0x8)
    FBP_MenuContainer_COnAddedToFocusPathDelegate OnAddedToFocusPathDelegate;         // 0x0278 (size: 0x10)
    void OnAddedToFocusPathDelegate();

    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void Destruct();
    void ExecuteUbergraph_BP_MenuContainer(int32 EntryPoint);
    void OnAddedToFocusPathDelegate__DelegateSignature();
}; // Size: 0x288

#endif
