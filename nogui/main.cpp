#include <gameboy/cartridge.hpp>
#include <iostream>
#include "window.hpp"

int main(int argc, char *argv[])
{

    Window w;
    if (!w.Initialize())
        return -1;

    cotiagb::Cartridge cart("Games/Tetris.gb");
    if (!cart.loadROM())
        return -1;

    std::cout << "Game title: " << cart.title() << std::endl;

    w.run();

    return 0;
}