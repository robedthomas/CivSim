#ifndef CIVGAME_MAP_H
#define CIVGAME_MAP_H

#include "MapTile.h"

class Map
{
    public:
    int width;
    int height;
    Map(int width, int height);
    ~Map();
    MapTile* getTile(int x, int y);

    private:
    MapTile **tiles;
};

#endif