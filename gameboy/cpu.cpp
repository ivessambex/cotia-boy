#include "cpu.hpp"
#include "mmu.hpp"

namespace cotiagb
{

    CPU::CPU(MMU *mmu) : mmu(mmu)
    {
    }

    CPU::~CPU()
    {
    }

    void CPU::tick()
    {
    }

}