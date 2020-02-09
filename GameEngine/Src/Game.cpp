//
//  Game.cpp
//  GameEngine
//
//  Created by Wilson Melo on 08/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#include "Game.hpp"
#include "TextureManager.hpp"

SDL_Texture* playerTex;
SDL_Rect srcR, destR;

// construtor
Game::Game()
{}
// desconstrutor
Game::~Game()
{}


void Game::init(const char *tittle, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if(fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Os subsistemas foram inicializados com sucesso!" << std::endl;
        
        window = SDL_CreateWindow(tittle, xpos, ypos, width, height, flags);
        if(window)
        {
            std::cout << "A janela do jogo foi criada com sucesso!" << std::endl;
        }
        
        renderer = SDL_CreateRenderer(window, -1, 0);
        if(renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "O renderizador foi criado com sucesso!" << std::endl;
        }
        
        isRunning = true;
    } else {
        isRunning = false;
    }
    
    playerTex = TextureManager::LoadTexture("/Users/bakudas/Documents/git/GameEngine/GameEngine/Assets/player.png", renderer);
    
}


void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
            
        default:
            break;
    }
}


void Game::update()
{
    ctn++;
    destR.w = 64;
    destR.h = 64; 
    destR.y = ctn;
    
    std::cout << ctn << std::endl;
    
}


void Game::render()
{
    SDL_RenderClear(renderer);
    // Adicionar aqui tudo o que vai ser renderizado
    SDL_RenderCopy(renderer, playerTex, NULL, &destR);
    SDL_RenderPresent(renderer); 
    
}


void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Jogo finalizado." << std::endl;
}
