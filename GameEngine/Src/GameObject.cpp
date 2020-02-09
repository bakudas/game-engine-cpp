//
//  GameObject.cpp
//  GameEngine
//
//  Created by Wilson Melo on 09/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren)
{
    renderer = ren;
    objTexture = TextureManager::LoadTexture(textureSheet, ren);
};

void GameObject::update()
{
  
    xpos = 0;
    ypos = 0;
    
    srcRect.h = 32;
    srcRect.w = 32;
    srcRect.x = 0;
    srcRect.y = 0;
    
    destRect.x = 0;
    destRect.y = 0;
    destRect.w = srcRect.w * 2;
    destRect.h = srcRect.h * 2;
    
};

void GameObject::render()
{
    SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);
}
