#ifndef UE4SS_SDK_BP_HUD_Bars_Coop_HPP
#define UE4SS_SDK_BP_HUD_Bars_Coop_HPP

class UBP_HUD_Bars_Coop_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBorder* Border;                                                            // 0x0270 (size: 0x8)
    FGeometry WidgetSize;                                                             // 0x0278 (size: 0x38)
    class AActor* Parent;                                                             // 0x02B0 (size: 0x8)
    ERelationshipTypes Relation;                                                      // 0x02B8 (size: 0x1)
    bool isDown;                                                                      // 0x02B9 (size: 0x1)

    ERelationshipTypes GetRelationshipToLocalPlayer(class AFightingCharacter* otherPlayer);
    void ComputeRelationship(class AActor* OtherActor, ERelationshipTypes& eRelation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_HUD_Bars_Coop(int32 EntryPoint);
}; // Size: 0x2BA

#endif
