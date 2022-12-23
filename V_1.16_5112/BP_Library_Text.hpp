#ifndef UE4SS_SDK_BP_Library_Text_HPP
#define UE4SS_SDK_BP_Library_Text_HPP

class UBP_Library_Text_C : public UObject
{
    TMap<class EMenuEnum, class FText> MenuTexts;

    void GetMenuText(const EMenuEnum& bpp__InMenu__pf__const, FText& bpp__OutText__pf);
};

#endif
