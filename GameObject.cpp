#include <iostream>
using namespace std;

#include "GameObject.h"

GameObject::GameObject(int startX, int startY, int distance) {
	this->x = startX;
	this->y = startY;
	this->distance = distance;
}

int GameObject::getX() { return x; }

int GameObject::getY() { return y; }

bool GameObject::collide(GameObject* p) {
	if (this->x == p->getX() && this->y == p->getY()) {
		return true;
	}
	else {
		return false;
	}
}