//
//  Game.hpp
//  GameEngine
//
//  Created by Wilson Melo on 08/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include "SDL2/SDL.h"
#include "SDL2_image/SDL_image.h"
#include <iostream>


class Game {
    
public:
    Game();
    ~Game();
    
    void init(const char* tittle, int xpos, int ypos, int width, int height, bool fullscreen);
    
    void handleEvents();
    void update();
    void extracted();
    
    void render();
    void clean();
    
    bool running() { return isRunning; };
    
private:
    int ctn = 0;
    bool isRunning;
    int SCREEN_WIDTH = 600;
    int SCREEN_HEIGHT = 800;
    SDL_Window *window;
    SDL_Renderer *renderer;
    
};

#endif /* Game_hpp */
