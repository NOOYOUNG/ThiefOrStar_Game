#include <iostream>
using namespace std;

#include "Star.h"

Star::Star(int startX, int startY) : GameObject(startX, startY, 1) { }

void Star::move() {
	int num1 = rand() % 5;
	int num2 = rand() % 4;
	if (num1 >= 1 && num1 <= 2) {
		switch (num2) {
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
}


char Star::getShape() { return '*'; }