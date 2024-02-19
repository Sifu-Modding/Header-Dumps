#ifndef UE4SS_SDK_DetectiveBoardEntry_HPP
#define UE4SS_SDK_DetectiveBoardEntry_HPP

struct FDetectiveBoardEntry
{
    FGameplayTag ID_20_2ECAB41A44E9E5271B22318AAADE51BC;                              // 0x0000 (size: 0x8)
    FText Text_2_F033FE2C4D6544140DDE66958DDE87D9;                                    // 0x0008 (size: 0x18)
    bool RevealItem_11_FE9A334D4FDF01D9BF18E08477D8EE67;                              // 0x0020 (size: 0x1)
    TSoftObjectPtr<UDetectiveLinkableItem_C> Link_47_9D35A08E4A99F678032054878101133C; // 0x0028 (size: 0x28)
    FLinearColor LinkColor_46_F848166E4463C97BADC5C8A27955D3D6;                       // 0x0050 (size: 0x10)
    DetectiveEntryTypes Type_29_CD90162348CABFED2338EE88B169052B;                     // 0x0060 (size: 0x1)
    DetectiveInvestigationEnum InvestigationID_33_4A9590844B2CD2B1D43D3692576F1974;   // 0x0061 (size: 0x1)
    TSoftObjectPtr<UTexture2D> ItemImageOverride_40_FDFCA0F64F24E70FB8F42A990F1B703A; // 0x0068 (size: 0x28)
    TSoftObjectPtr<UTexture2D> LowResItemImageOverride_43_0E9963B24214106071F47D9FE0B9C1EB; // 0x0090 (size: 0x28)

}; // Size: 0xB8

#endif
