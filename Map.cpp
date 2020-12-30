#include "Map.h"
#include "MapTile.h"

Map::Map(int width, int height)
{
    this->width = width;
    this->height = height;
    this->tiles = new MapTile* [width * height];
    for (int i = 0; i < width * height; i++)
    {
        this->tiles[i] = new MapTile(i % width, i / width);
    }
}

Map::~Map()
{
    for (int i = 0; i < this->width * this->height; i++)
    {
        delete this->tiles[i];
    }
    delete [] this->tiles;
}

MapTile* Map::getTile(int x, int y)
{
    if (x >= 0 && y >= 0 && x < this->width && y < this -> height)
    {
        return (this->tiles[x + (y * width)]);
    }
    return nullptr;
}