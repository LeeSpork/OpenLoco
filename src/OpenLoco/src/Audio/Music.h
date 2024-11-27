

namespace OpenLoco::Audio
{
    using MusicId = uint8_t;

    struct MusicInfo
    {
        Environment::PathId pathId;
        StringId titleId;
        uint16_t startYear;
        uint16_t endYear;
    };
    std::vector<uint8_t> makeSelectedPlaylist();

    const MusicInfo* getMusicInfo(MusicId track);
    constexpr int32_t kNumMusicTracks = 29;
}
