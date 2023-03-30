#ifndef UE4SS_SDK_BP_FajarVanishFakePos_HPP
#define UE4SS_SDK_BP_FajarVanishFakePos_HPP

class ABP_FajarVanishFakePos_C : public ASCActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x02E8 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x02F0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x02F8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0300 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0308 (size: 0x8)
    float Auto Destroy Seconds;                                                       // 0x0310 (size: 0x4)

    void Set Debug Display Visible(bool Visible);
    void OnPoolablePostInitializeComponents();
    void ExecuteUbergraph_BP_FajarVanishFakePos(int32 EntryPoint);
}; // Size: 0x314

#endif
