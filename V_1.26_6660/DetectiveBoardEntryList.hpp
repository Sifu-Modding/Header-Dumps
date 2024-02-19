#ifndef UE4SS_SDK_DetectiveBoardEntryList_HPP
#define UE4SS_SDK_DetectiveBoardEntryList_HPP

class UDetectiveBoardEntryList_C : public UUserWidget
{
    class UVerticalBox* EntriesBox;                                                   // 0x0268 (size: 0x8)
    TArray<class UDetectiveBoardEntryWidget_C*> ItemList;                             // 0x0270 (size: 0x10)

    void SetItemCount(int32 bpp__InCount__pf);
    TArray<class UDetectiveBoardEntryWidget_C*> Get Entry Items();
    void Destruct();
}; // Size: 0x280

#endif
