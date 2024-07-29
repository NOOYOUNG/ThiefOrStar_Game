#include <iostream>
using namespace std;

#include "Game.h"

Game::Game() {
	p = new Player(0, 0);

	int randTx, randTy, randSx, randSy;
	while (true) {
		randTx = rand() % 10; randTy = rand() % 20;
		randSx = rand() % 10; randSy = rand() % 20;
		if (randTx != randSx && randTy != randSy) {
			break;
		}
	}

	t = new Thief(randTx, randTy);
	s = new Star(randSx, randSy);

	cout << "������ ã�ƶ�!" << endl;
	cout << "������ ���� ������ ���� �߰��ϸ� �¸�" << endl;
}

Game::~Game() {
	delete p;
	delete t;
	delete s;
}

void Game::game() {
	bool exit = true;
	while (exit) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (t->getX() == i && t->getY() == j) cout << t->getShape();
				else if (p->getX() == i && p->getY() == j) cout << p->getShape();
				else if (s->getX() == i && s->getY() == j) cout << s->getShape();
				else cout << "-";
			}
			cout << endl;
		}
		if (t->collide(p)) {
			cout << "YOU LOSE!" << endl << "������ ����� ����߽��ϴ�." << endl;
			exit = false;
			break;
		}
		else if (t->collide(s)) {
			cout << "YOU LOSE!" << endl << "������ ������ ���� �߰��߽��ϴ�." << endl;
			exit = false;
			break;
		}
		else if (p->collide(s)) {
			cout << "YOU WIN!" << endl << "����� ������ �߰��߽��ϴ�!" << endl;
			exit = false;
			break;
		}

		p->move();
		t->move();
		s->move();
	}
}
