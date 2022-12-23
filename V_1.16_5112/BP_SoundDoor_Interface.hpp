#ifndef UE4SS_SDK_BP_SoundDoor_Interface_HPP
#define UE4SS_SDK_BP_SoundDoor_Interface_HPP

class IBP_SoundDoor_Interface_C : public IInterface
{

    void GetCloseDoorSound(bool& WasWay1Last, TArray<FSCSoundSwitchValue>& CloseSoundStateWay1, TArray<FSCSoundSwitchValue>& CloseSoundStateWay2, TEnumAsByte<AKE_Door_Material>& AkeDoorMaterial);
};

#endif
