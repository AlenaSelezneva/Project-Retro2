#pragma once
#include "Character.h"
#include "battle.h"
#include "Art.h"
//template <class T>

class Inventroy//Weapons Inventroy
{
public:
	Character* x;

	Inventroy(Character* c);
//	void healthPo(Character* i);
	//void getInventroy();
private:
	int arr[4] = { 3,2,5,2 };
	std::string potions[4] = { "Health", "Damage", "Magic", "Anything else" };
};

