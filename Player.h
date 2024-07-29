#pragma once

#include "GameObject.h"

class Player : public GameObject {
public:
    Player(int startX, int startY);
    void move();
    char getShape();
};