#include <iostream>
#include <time.h>
using namespace std;

#include "GameObject.h"
#include "Player.h"
#include "Thief.h"
#include "Star.h"
#include "Game.h"

int main() {
    srand((unsigned)time(NULL));
    Game* g = new Game;
    g->game();
    delete g;
}