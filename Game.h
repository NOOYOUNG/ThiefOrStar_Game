#pragma once

using namespace std;
#include "Player.h"
#include "Thief.h"
#include "Star.h"

class Game {
public:
    Player* p;
    Thief* t;
    Star* s;
    Game();
    ~Game();
    void game();
};