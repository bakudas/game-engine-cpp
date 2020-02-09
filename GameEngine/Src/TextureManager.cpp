//
//  TextureManager.cpp
//  GameEngine
//
//  Created by Wilson Melo on 09/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texture, SDL_Renderer* ren)
{
    SDL_Surface* tmpSurface = IMG_Load(texture);
    SDL_Texture* tx = SDL_CreateTextureFromSurface(ren, tmpSurface);
    SDL_FreeSurface(tmpSurface);
    
    return tx;
};
