#ifndef UE4SS_SDK_MagicLeapSharedWorld_HPP
#define UE4SS_SDK_MagicLeapSharedWorld_HPP

struct FMagicLeapSharedWorldAlignmentTransforms
{
    TArray<FTransform> AlignmentTransforms;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMagicLeapSharedWorldLocalData
{
    TArray<FMagicLeapSharedWorldPinData> LocalPins;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMagicLeapSharedWorldPinData
{
    FGuid PinId;                                                                      // 0x0000 (size: 0x10)
    FMagicLeapARPinState PinState;                                                    // 0x0010 (size: 0x14)

}; // Size: 0x24

struct FMagicLeapSharedWorldSharedData
{
    TArray<FGuid> PinIDs;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

class AMagicLeapSharedWorldGameMode : public AGameMode
{
    FMagicLeapSharedWorldSharedData SharedWorldData;                                  // 0x03A0 (size: 0x10)
    FMagicLeapSharedWorldGameModeOnNewLocalDataFromClients OnNewLocalDataFromClients; // 0x03B0 (size: 0x10)
    void MagicLeapOnNewLocalDataFromClients();
    float PinSelectionConfidenceThreshold;                                            // 0x03C0 (size: 0x4)
    class AMagicLeapSharedWorldPlayerController* ChosenOne;                           // 0x0468 (size: 0x8)

    bool SendSharedWorldDataToClients();
    void SelectChosenOne();
    void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
    void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);
}; // Size: 0x470

class AMagicLeapSharedWorldGameState : public AGameState
{
    FMagicLeapSharedWorldSharedData SharedWorldData;                                  // 0x0320 (size: 0x10)
    FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;                     // 0x0330 (size: 0x10)
    FMagicLeapSharedWorldGameStateOnSharedWorldDataUpdated OnSharedWorldDataUpdated;  // 0x0340 (size: 0x10)
    void MagicLeapSharedWorldEvent();
    FMagicLeapSharedWorldGameStateOnAlignmentTransformsUpdated OnAlignmentTransformsUpdated; // 0x0350 (size: 0x10)
    void MagicLeapSharedWorldEvent();

    void OnReplicate_SharedWorldData();
    void OnReplicate_AlignmentTransforms();
    void MagicLeapSharedWorldEvent__DelegateSignature();
    FTransform CalculateXRCameraRootTransform();
}; // Size: 0x360

class AMagicLeapSharedWorldPlayerController : public APlayerController
{

    void ServerSetLocalWorldData(const FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
    void ServerSetAlignmentTransforms(const FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
    bool IsChosenOne();
    void ClientSetChosenOne(bool bChosenOne);
    void ClientMarkReadyForSendingLocalData();
    bool CanSendLocalDataToServer();
}; // Size: 0x640

#endif
