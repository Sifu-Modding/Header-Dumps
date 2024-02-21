#ifndef UE4SS_SDK_ShrineEffectUIData_HPP
#define UE4SS_SDK_ShrineEffectUIData_HPP

class UShrineEffectUIData_C : public UGameplayEffectUIData
{
    FSlateBrush IconBrush;                                                            // 0x0028 (size: 0x88)
    FSlateBrush MainImageBrush;                                                       // 0x00B0 (size: 0x88)
    FText Title;                                                                      // 0x0138 (size: 0x18)
    FText Description;                                                                // 0x0150 (size: 0x18)

}; // Size: 0x168

#endif
