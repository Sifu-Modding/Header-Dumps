#ifndef UE4SS_SDK_DetectiveBoardEntryWidget_HPP
#define UE4SS_SDK_DetectiveBoardEntryWidget_HPP

class UDetectiveBoardEntryWidget_C : public UUserWidget
{
    class UOverlay* Notif;
    class UBorder* PostItBorder;
    class URichTextBlock* RichTextBlock_104;
    FGameplayTag GameplayTag;

    void SetInfos(const FText& bpp__Text__pf__const, FGameplayTag bpp__InGameplayTag__pf, bool bpp__IsInvestigationRelated__pf);
    void IsNotifyVisible(bool& bpp__bIsVisible__pf);
    void DismissNotify(bool bpp__bUpdateVisibility__pf);
};

#endif
