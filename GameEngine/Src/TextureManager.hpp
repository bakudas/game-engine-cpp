//
//  TextureManager.hpp
//  GameEngine
//
//  Created by Wilson Melo on 09/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#ifndef TextureManager_hpp
#define TextureManager_hpp

#include "Game.hpp"
#include <stdio.h>

#endif /* TextureManager_hpp */

class TextureManager {

public:
    static SDL_Texture* LoadTexture(const char* fileName, SDL_Renderer* ren);
};
