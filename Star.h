#pragma once

#include "GameObject.h"

class Star : public GameObject {
public:
    Star(int startX, int startY);
    void move();
    char getShape();
};