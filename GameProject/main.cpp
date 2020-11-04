#include <SDL.h>
#include <iostream>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char *args[]) {

    SDL_Window *window = NULL;
    SDL_Surface *screenSurface = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << ("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
	return 0;
}