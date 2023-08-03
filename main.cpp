#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"
using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    cout << "Inicia el juego" << endl;
    while(isGameOver == false)
    {
        //Loop of the Game
        Hero.CallInput();
        Map.Draw();
    }

    return 0;
}
