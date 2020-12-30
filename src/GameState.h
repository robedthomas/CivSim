#ifndef CIVGAME_GAMESTATE_H
#define CIVGAME_GAMESTATE_H

#include "Map.h"

class GameState
{
    public:
    int turnNumber;
    Map* map;
    GameState(int mapWidth, int mapHeight);
    ~GameState();
};

#endif