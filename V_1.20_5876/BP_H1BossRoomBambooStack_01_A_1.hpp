#ifndef UE4SS_SDK_BP_H1BossRoomBambooStack_01_A_1_HPP
#define UE4SS_SDK_BP_H1BossRoomBambooStack_01_A_1_HPP

class ABP_H1BossRoomBambooStack_01_A_1_C : public AHO1_BossRoom_PlantBoxTraversal_C
{
    class UStaticMeshComponent* SM_BambooPack_02_B_2;                                 // 0x0350 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0358 (size: 0x8)
    class UStaticMeshComponent* SM_BambooPack_02_B_1;                                 // 0x0360 (size: 0x8)
    bool FadeCam;                                                                     // 0x0368 (size: 0x1)
    float Hue;                                                                        // 0x036C (size: 0x4)
    float Lightness;                                                                  // 0x0370 (size: 0x4)
    float Saturation;                                                                 // 0x0374 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x378

#endif
