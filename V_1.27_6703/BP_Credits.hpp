#ifndef UE4SS_SDK_BP_Credits_HPP
#define UE4SS_SDK_BP_Credits_HPP

class UBP_Credits_C : public UCreditsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class UWidgetAnimation* FadeAnim;                                                 // 0x0400 (size: 0x8)
    class UVerticalBox* CreditsContainer;                                             // 0x0408 (size: 0x8)
    class UScrollBox* CreditScrolling;                                                // 0x0410 (size: 0x8)
    bool bShouldScroll;                                                               // 0x0418 (size: 0x1)
    class UObject* StartUpCharacter;                                                  // 0x0420 (size: 0x8)
    bool IsTriggeredInEnding;                                                         // 0x0428 (size: 0x1)

    bool BPE_OnBackButtonPressed();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__CreditScrolling_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BPE_OnSynchronizeProperties();
    void OnScrollEnd();
    void ExecuteUbergraph_BP_Credits(int32 EntryPoint);
}; // Size: 0x429

#endif
