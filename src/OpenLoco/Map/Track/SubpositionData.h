#pragma once

#include "../../Types.hpp"
#include "../Map.hpp"
#include <vector>

namespace OpenLoco
{
    enum class Pitch : uint8_t;
}

namespace OpenLoco::Map::TrackData
{
#pragma pack(push, 1)
    struct MoveInfo
    {
        Map::Pos3 loc; // 0x00
        uint8_t yaw;   // 0x06
        Pitch pitch;   // 0x07
    };
#pragma pack(pop)
    static_assert(sizeof(MoveInfo) == 0x8);

    const std::vector<MoveInfo> getTrackSubPositon(const uint16_t trackAndDirection);
    const std::vector<MoveInfo> getRoadSubPositon(const uint16_t trackAndDirection);
    const std::vector<MoveInfo> getRoadPlacementSubPositon(const uint16_t trackAndDirection);
}