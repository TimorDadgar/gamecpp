#include <iostream>
#include "test.h"

#include <SDL.h>

int main(int argc, char* argv[])
{
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    // Create a window
    SDL_Window* window = SDL_CreateWindow("My Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    // Wait for the user to close the window
    bool quit = false;
    SDL_Event event;
    while (!quit)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
    }

    // Clean up SDL
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

