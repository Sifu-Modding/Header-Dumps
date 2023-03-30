#ifndef UE4SS_SDK_OnlineSubsystemSteam_HPP
#define UE4SS_SDK_OnlineSubsystemSteam_HPP

class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
}; // Size: 0x28

class USteamNetConnection : public UIpConnection
{
    bool bIsPassthrough;                                                              // 0x1BE0 (size: 0x1)

}; // Size: 0x1BF0

class USteamNetDriver : public UIpNetDriver
{
}; // Size: 0x7C0

#endif
