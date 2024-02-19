#ifndef UE4SS_SDK_SCSoundOcclusion_HPP
#define UE4SS_SDK_SCSoundOcclusion_HPP

#include "SCSoundOcclusion_enums.hpp"

class USCSoundOcclusionSettings : public UDeveloperSettings
{
    float m_fMaxPathDist;                                                             // 0x0038 (size: 0x4)
    float m_fMaxPathFactor;                                                           // 0x003C (size: 0x4)
    FName m_RTPCOcclusionName;                                                        // 0x0040 (size: 0x8)
    ESCOcclusionMode m_eOcclusionMode;                                                // 0x0048 (size: 0x1)

}; // Size: 0x50

#endif
