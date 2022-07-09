#ifndef NOGUI_WINDOW_HPP
#define NOGUI_WINDOW_HPP

#include <string>

typedef struct SDL_Window SDL_Window;

class Window
{

public:

    ~Window();

    bool Initialize();
    void run();

private:

    SDL_Window *window = nullptr;

};

#endif