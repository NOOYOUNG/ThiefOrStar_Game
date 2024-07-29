#include <iostream>
using namespace std;

#include "Player.h"

Player::Player(int startX, int startY) : GameObject(startX, startY, 1) { }

void Player::move() {
	char key;
	cout << "왼쪽(a키), 아래(s키), 위(d키), 오른쪽(f키): ";
	cin >> key;
	cout << endl;
	if (key == 'a') {
		if (y - distance < 0) {
			y = y - distance + 20;
		}
		else {
			y -= distance;
		}
	}
	else if (key == 's') {
		if (x + distance > 9) {
			x = x + distance - 10;
		}
		else {
			x += distance;
		}
	}
	else if (key == 'd') {
		if (x - distance < 0) {
			x = x - distance + 10;
		}
		else {
			x -= distance;
		}
	}
	else if (key == 'f') {
		if (y + distance > 19) {
			y = y + distance - 20;
		}
		else {
			y += distance;
		}
	}
	else {
		cout << "알맞은 키를 입력하세요.";
	}
}

char Player::getShape() {
	return 'P';
}
