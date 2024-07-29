#include <iostream>
using namespace std;

#include "Thief.h"

Thief::Thief(int startX, int startY) : GameObject(startX, startY, 2) { }

void Thief::move() {
	int num = rand() % 4;
	switch (num) {
	case 0:
		if (y - distance < 0) y = y - distance + 20;
		else y -= distance;
		break;
	case 1:
		if (x + distance > 9) x = x + distance - 10;
		else x += distance;
		break;
	case 2:
		if (x - distance < 0) x = x - distance + 10;
		else x -= distance;
		break;
	case 3:
		if (y + distance > 19) y = y + distance - 20;
		else y += distance;
		break;
	}
}

char Thief::getShape() {
	return 'T';
}