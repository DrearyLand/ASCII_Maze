#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;


GameMap::GameMap()
{
    PlayerCell = NULL;
    LoadMapFromFile();
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

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if(cells[PlayerY][PlayerX].IsBlocked() == false)
    {
        if(PlayerCell != NULL)
        {
            PlayerCell->id=' ';
        }
        PlayerCell = &cells[PlayerY][PlayerX];
        PlayerCell->id = '3';

        return true;
    }
    else
    {
        return false;
    }

    //cout << "Player Coords: " << PlayerX << "," << PlayerY << endl;
}

void GameMap::DrawIntro()
{
    
    string line;
    int row = 0;
    ifstream MyFile("Intro.txt");

    if(MyFile.is_open())
    {
        while(getline(MyFile, line))
        {
            cout << line << endl;
        }

        cin >> line;
    }
    else{
        cout << "FATAL ERROR: INTRO COULD NOT BE LOADED" << endl;
    }
}

void GameMap::LoadMapFromFile()
{
    /*ofstream FileCreated("Map.txt");

    if(FileCreated.is_open())
    {

    } else {
        cout << "FATAL ERROR: Map file could not be created" << endl;
    }*/


    string line;
    int row = 0;
    ifstream MyFile("Map.txt");

    if(MyFile.is_open())
    {
        while(getline(MyFile, line))
        {
            for(int p=0;p<line.length(); p++)
            {
                if(line[p]=='0')
                    cells[row][p].id = ' ';
                else{
                    cells[row][p].id = line[p];
                }
            }
            row++;
        }
    }
    else{
        cout << "FATAL ERROR: Map File Could not be loaded" << endl;
    }
}
