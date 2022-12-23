#ifndef UE4SS_SDK_BP_HUD_Bars_Coop_HPP
#define UE4SS_SDK_BP_HUD_Bars_Coop_HPP

class UBP_HUD_Bars_Coop_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    FGeometry WidgetSize;
    class AActor* Parent;
    ERelationshipTypes Relation;
    bool isDown;

    ERelationshipTypes GetRelationshipToLocalPlayer(class AFightingCharacter* otherPlayer);
    void ComputeRelationship(class AActor* OtherActor, ERelationshipTypes& eRelation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_HUD_Bars_Coop(int32 EntryPoint);
};

#endif
