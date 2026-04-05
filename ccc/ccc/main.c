#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // SDL'yi başlat
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL başlatılamadı: %s\n", SDL_GetError());
        return 1;
    }

    // Pencere oluştur
    SDL_Window *window = SDL_CreateWindow("SDL Penceresi",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("Pencere oluşturulamadı: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Bekleme süresi (5 saniye açık kalacak)
    SDL_Delay(5000);

    // SDL kaynaklarını temizle
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}
