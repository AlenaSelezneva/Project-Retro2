#pragma once
#include "Character.h"
#include <iostream>
#include "Enemy.h"
#include <windows.h>
class Art
{
public:
	//Character P;
	//Enemy E;

	void layout1a(Character c, Enemy e);
	void layout1b(Character c, Enemy e);
	void ingage();
	void charChoice();
	void layout3();
	void draw4();
	void draw5();
	void draw6();
	void intro();
	void introAddOn();
	void logo();
	void logoV2();
	void plot2();
	void win();
	void lose();
	void avatar();
	void consH();

private:
	int color{ 0 };
	char choice{ 'p' };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//HANDLE consoleHandle;
};