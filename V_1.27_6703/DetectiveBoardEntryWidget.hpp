#ifndef UE4SS_SDK_DetectiveBoardEntryWidget_HPP
#define UE4SS_SDK_DetectiveBoardEntryWidget_HPP

class UDetectiveBoardEntryWidget_C : public UUserWidget
{
    class UOverlay* Notif;                                                            // 0x0268 (size: 0x8)
    class UBorder* PostItBorder;                                                      // 0x0270 (size: 0x8)
    class URichTextBlock* RichTextBlock_104;                                          // 0x0278 (size: 0x8)
    FGameplayTag GameplayTag;                                                         // 0x0280 (size: 0x8)

    void SetInfos(const FText& bpp__Text__pf__const, FGameplayTag bpp__InGameplayTag__pf, bool bpp__IsInvestigationRelated__pf);
    void IsNotifyVisible(bool& bpp__bIsVisible__pf);
    void DismissNotify(bool bpp__bUpdateVisibility__pf);
}; // Size: 0x288

#endif
