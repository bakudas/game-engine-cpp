//
//  main.cpp
//  GameEngine
//
//  Created by Wilson Melo on 08/02/20.
//  Copyright © 2020 Vaca Roxa. All rights reserved.
//

#include "Game.cpp"

Game *game = nullptr;

int main(int argc, const char * argv[]) {
    
    game = new Game();
    
    game->init("Vaca Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
     
    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }
    
    game->clean();
    
    return 0;
    
}
