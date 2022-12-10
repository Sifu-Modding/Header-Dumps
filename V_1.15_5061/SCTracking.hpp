#ifndef UE4SS_SDK_SCTracking_HPP
#define UE4SS_SDK_SCTracking_HPP

class USCTrackingConfig : public UObject
{
    FString m_ShippingApiEndpoint;
    FString m_DevApiEndpoint;
    FString m_ApiEventPath;
    FString m_ApiTrackingLevelPath;
    FString m_ApiHealthPath;
    FString m_ApiKey;
    FString m_ApiHealthPathSteamOverride;
    FString m_ApiEventPathSteamOverride;

};

struct FSCTrackingEmptyPayload
{
};

#endif
