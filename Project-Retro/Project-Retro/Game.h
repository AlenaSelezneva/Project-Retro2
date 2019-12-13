#include "Character.h"
#include "Enemy.h"
#include "Art.h"

#pragma once
class Game
{
public:
	~Game();
	Game();
	Character* getCharacter();
	void setEnemy(Enemy* en);
	void setCharacter(Character* c);
	Enemy* getEnemy();

	Art t;

private:
	Character* player;
	Enemy* enemy;

};
