#include "GameMap.h"
#include <iostream>

using namespace std;


GameMap::GameMap()
{
    PlayerCell = NULL;
}

void GameMap::Draw()
{
    for(int i = 0; i < 15; i++)
    {
        for(int  p = 0; p < 10; p++)
        {
            cout << cells[i][p].id;
        }
        cout << endl;
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if(PlayerCell != NULL)
    {
        PlayerCell->id=0;
    }
    PlayerCell = &cells[PlayerX][PlayerY];
    PlayerCell->id = 3;
    
    //cout << "Player Coords: " << PlayerX << "," << PlayerY << endl;
}