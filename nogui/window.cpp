#include <SDL.h>
#include <iostream>
#include "window.hpp"

Window::~Window()
{

    if (window != nullptr)
        SDL_DestroyWindow(window);

    SDL_Quit();
}

bool Window::Initialize()
{
    if (SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO) < 0)
    {
        std::cerr << "Failed to initialize SDL2: " << SDL_GetError() << std::endl;
        return -1;
    }

    window = SDL_CreateWindow("CotiaGB", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 160, 144, SDL_WINDOW_SHOWN);
    if (!window)
    {
        std::cerr << "Cannot create window: " << SDL_GetError() << std::endl;
    }

    return true;
}

void Window::run()
{

    SDL_Event ev;
    bool quit = false;
    while (!quit)
    {

        while (SDL_PollEvent(&ev) != 0)
        {

            if (ev.type == SDL_QUIT)
                quit = true;
        }
    }
}