#ifndef UE4SS_SDK_BP_FightSoundSwitchOwner_Interface_HPP
#define UE4SS_SDK_BP_FightSoundSwitchOwner_Interface_HPP

class IBP_FightSoundSwitchOwner_Interface_C : public IInterface
{

    void Is Trigger Post Fight Switchs On Resolve All Groups(bool& bpp__Result__pf);
    void GetPostFightSwitchs(TArray<FSCSoundSwitchValue>& bpp__OutPostFightSwitchs__pf, TArray<FSCSoundSwitchValue>& bpp__OutPostFightAbandonSwitchs__pf);
};

#endif
