#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell* PlayerCell;
        MapCell cells[15][10];

        void DrawIntro();
        void Draw();

        //Function that obtains player coords and updates the map
        bool SetPlayerCell(int PlayerX,int PlayerY);

    protected:
        void LoadMapFromFile();

    private:
};

#endif // GAMEMAP_H
