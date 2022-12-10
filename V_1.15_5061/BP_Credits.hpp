#ifndef UE4SS_SDK_BP_Credits_HPP
#define UE4SS_SDK_BP_Credits_HPP

class UBP_Credits_C : public UCreditsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeAnim;
    class UVerticalBox* CreditsContainer;
    class UScrollBox* CreditScrolling;
    bool bShouldScroll;
    class UObject* StartUpCharacter;
    bool IsTriggeredInEnding;

    bool BPE_OnBackButtonPressed();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__CreditScrolling_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BPE_OnSynchronizeProperties();
    void OnScrollEnd();
    void ExecuteUbergraph_BP_Credits(int32 EntryPoint);
};

#endif
