#ifndef UE4SS_SDK_SCSoundOcclusion_HPP
#define UE4SS_SDK_SCSoundOcclusion_HPP

#include "SCSoundOcclusion_enums.hpp"

class USCSoundOcclusionSettings : public UDeveloperSettings
{
    float m_fMaxPathDist;
    float m_fMaxPathFactor;
    FName m_RTPCOcclusionName;
    ESCOcclusionMode m_eOcclusionMode;

};

#endif
