//
//  GameObject.hpp
//  GameEngine
//
//  Created by Wilson Melo on 09/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp

#include "Game.hpp"
#include <stdio.h>

#endif /* GameObject_hpp */

class GameObject {
    
public:
    GameObject(const char* textureSheet, SDL_Renderer* ren);
    ~GameObject();
    
    void update();
    void render();
    
private:
    
    int xpos;
    int ypos;
    
    SDL_Texture* objTexture;
    SDL_Rect srcRect, destRect;
    SDL_Renderer* renderer;
    
    
};
