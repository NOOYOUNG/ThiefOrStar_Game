#pragma once

#include "GameObject.h"

class Thief : public GameObject {
public:
    Thief(int startX, int startY);
    void move();
    char getShape();
};