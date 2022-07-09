#ifndef GB_CARTRIDGE_HPP
#define GB_CARTRIDGE_HPP

#include <vector>
#include <string>
#include <cstdint>

namespace cotiagb
{

    enum class CartridgeType
    {
        ROM_ONLY = 0x00,
        MBC1 = 0x1,
        UNDEF
    };

    class Cartridge
    {

    public:

        Cartridge(const std::string fileName);

        // Load ROM to memmory
        bool loadROM();

        // Game title
        std::string title() const;

        // Cartridge type
        CartridgeType type() const;

        // Get ROM data
        std::vector<std::uint8_t> ROM() const;

    private:

        std::string fileName;
        std::vector<std::uint8_t> rom;
    };

}

#endif