#ifndef UE4SS_SDK_BP_GameplayDoor_HPP
#define UE4SS_SDK_BP_GameplayDoor_HPP

class ABP_GameplayDoor_C : public ABP_2WaysInterractiveLockableDoor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_GameplayDoor_CED_OpenDoor ED_OpenDoor;
    void ED_OpenDoor();
    int32 fPlayAnimThresholdInDegree;
    bool bUseSequenceToOpen;
    FBP_GameplayDoor_CED_CloseDoor ED_CloseDoor;
    void ED_CloseDoor();

    void GetDoorOpeningAnim(bool bWay1, class UAnimSequence*& Opening);
    void GetDoorAnimAsset(bool bUseWay1, class UAnimSequence*& OpeningAnim, class UAnimSequence*& ClosingAnim, FAnimContainer& CharacterAnimContainer, FSCUserDefinedEnumHandler& VariableWeight);
    void BPE_GetOpeningDoorInfo(const class AFightingCharacter* _Instigator, bool _bInteraction1, bool& _outPlayAnimOnCharacter, bool& _outMustMirrorAnimOnCharacter);
    void OnInteraction(bool InteractedWith1, class APlayerController* PlayerController);
    void BPE_OpenedStatusChanged();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GameplayDoor(int32 EntryPoint);
    void ED_CloseDoor__DelegateSignature();
    void ED_OpenDoor__DelegateSignature();
};

#endif
