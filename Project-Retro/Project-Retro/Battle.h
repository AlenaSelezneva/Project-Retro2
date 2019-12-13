#pragma once
#include "Character.h"
#include <iostream>
#include "Enemy.h"
#include <Windows.h>
#include "Game.h"
class Battle
{
public:
	Game* game;
	Battle(Game* g);
	/*Enemy s;
	Character x;*/

	//void fight(Character player,Enemy other);
	void fight();
	//int h = SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	//int d = SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	//void changeColor(int color);
	//void ClearScreen();
	void dmgdel();
	void test();
	//void battlechoice();
/*	int* pt_r{&x.str};//Pointers for reducing Enemy's health by pointing this to character health
	int* e_ptr{&s.health};//Pointer to the Enemy's health which we use this pointer int the reduc health function
*/
private:
	char choice{ 'p' };
};