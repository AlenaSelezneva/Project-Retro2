#include "Character.h"
#include <windows.h>
#pragma once
class Enemy : public Character
{
public:
	Enemy();

	void disEnemyRotation();
	void setStat();
	int curHealthE(Character other);
	//int dealdmg(Enemy e, Character c);
	std::vector<std::string>list = { gandalf,voldemort,smaug };
	std::string gandalf = "Gandalf";
	std::string voldemort = "Voldemort";
	std::string smaug = "Smaug";
private:
};