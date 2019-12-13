#pragma once
#include "Character.h"
#include <iostream>
#include "Enemy.h"
#include <Windows.h>
#include "Game.h"
class Battle
{
public:
	Battle(Game* game);
	Enemy s;
	Character x;
	void fight();
	void dmgdel();
private:
	char choice{ 'p' };
	Game* game;
};
