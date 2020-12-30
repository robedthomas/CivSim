#include <iostream>
#include "GameState.h"

using namespace std;

int main()
{
    GameState* gs = new GameState(4, 3);
    cout << "New GameState created\n";
    delete gs;
    cout << "GameState deleted\n";
    return 0;
}