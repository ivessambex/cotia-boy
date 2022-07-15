#ifndef GB_CPU_HPP
#define GB_CPU_HPP

#include <cstdint>

namespace cotiagb
{

    class MMU;

    class CPU
    {

        union Register
        {

            std::uint16_t value;

            struct
            {
                std::uint8_t h;
                std::uint8_t l;
            };
        };

    public:

        CPU(MMU *mmu);
        ~CPU();

        // Power up sequence
        void boot();

        void tick();

    private:

        // Registers
        Register AF, BC, DE, HL;
        std::uint16_t SP, PC;

        MMU *mmu;

    };

}

#endif