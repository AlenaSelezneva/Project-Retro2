#include "Character.h"
#include "Enemy.h"
#include "Art.h"

#pragma once
class Game
{
public:
	Game();
	Character* getCharacter();
	void setEnemy(Enemy* en);
	Enemy* getEnemy();

	Art t;

private:
	Character* player;
	Enemy* enemy;

};
