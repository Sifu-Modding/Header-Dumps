#ifndef UE4SS_SDK_SCTracking_HPP
#define UE4SS_SDK_SCTracking_HPP

struct FSCTrackingEmptyPayload
{
}; // Size: 0x1

class USCTrackingConfig : public UObject
{
    FString m_ShippingApiEndpoint;                                                    // 0x0028 (size: 0x10)
    FString m_DevApiEndpoint;                                                         // 0x0038 (size: 0x10)
    FString m_ApiEventPath;                                                           // 0x0048 (size: 0x10)
    FString m_ApiTrackingLevelPath;                                                   // 0x0058 (size: 0x10)
    FString m_ApiHealthPath;                                                          // 0x0068 (size: 0x10)
    FString m_ApiKey;                                                                 // 0x0078 (size: 0x10)
    FString m_ApiHealthPathSteamOverride;                                             // 0x0088 (size: 0x10)
    FString m_ApiEventPathSteamOverride;                                              // 0x0098 (size: 0x10)

}; // Size: 0xA8

#endif
