#ifndef PLATFORM_H
#define PLATFORM_H

#include <cstdint>
#include <SDL2/SDL.h>

class Platform {
    SDL_Window* window{};
    SDL_Renderer* renderer{};
    SDL_Texture* texture{};
public:
    Platform(char const*, int, int, int, int);
    ~Platform();

    void Update(void const*, int);
    bool ProcessInput(uint8_t*);
};

#endif