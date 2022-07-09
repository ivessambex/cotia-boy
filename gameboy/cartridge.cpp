#include <fstream>
#include <iostream>
#include "cartridge.hpp"

namespace cotiagb
{

    Cartridge::Cartridge(const std::string fileName) : fileName(fileName)
    {
    }

    bool Cartridge::loadROM()
    {

        std::fstream file(fileName, std::ios::in | std::ios::binary);
        if (!file.is_open())
        {
            std::cerr << "Couldn't open file" << std::endl;
            return false;
        }

        rom = std::vector<std::uint8_t>((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));

        file.close();

        return true;
    }

    std::string Cartridge::title() const
    {

        std::string s;

        for (int i = 0x134; i < 0x143; i++)
        {

            const char c = static_cast<char>(rom[i]);
            if (c == '\0')
                break;

            s.push_back(c);
        }

        return s;
    }

    CartridgeType Cartridge::type() const
    {

        const std::uint8_t type = rom[0x147];
        switch (type)
        {

        case 0x0:
            return CartridgeType::ROM_ONLY;

        case 0x1:
            return CartridgeType::MBC1;

        default:
            return CartridgeType::UNDEF;
        }
    }

    std::vector<std::uint8_t> Cartridge::ROM() const
    {
        return rom;
    }

}