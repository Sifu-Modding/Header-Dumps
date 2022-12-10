#ifndef UE4SS_SDK_DetectiveBoardEntryList_HPP
#define UE4SS_SDK_DetectiveBoardEntryList_HPP

class UDetectiveBoardEntryList_C : public UUserWidget
{
    class UVerticalBox* EntriesBox;
    TArray<class UDetectiveBoardEntryWidget_C*> ItemList;

    void SetItemCount(int32 bpp__InCount__pf);
    TArray<class UDetectiveBoardEntryWidget_C*> Get Entry Items();
    void Destruct();
};

#endif
