#include "GameState.h"

using namespace std;

GameState::GameState(int mapWidth, int mapHeight)
{
    this->map = new Map(mapWidth, mapHeight);
}

GameState::~GameState()
{
    delete this->map;
}