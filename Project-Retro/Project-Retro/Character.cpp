#include <iostream>
#include <windows.h>
#include <stdarg.h>
#include <string>
#include <cmath>
#include <iomanip>
#include <conio.h>
#include"Character.h"
#include "Menu.h"
#include <mmsystem.h>
#include <tchar.h>
#include <conio.h>
#include <Mmsystem.h>
#include <mciapi.h>
#include "Enemy.h"
#include "Art.h"
#include "battle.h"
#include "Game.h"

//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")
Character::Character()
{
	level = stats[0];
	exp = 0;
	vit = rand() % 4 + 8;
	str = rand() % 4 + 8; ;
	dex = rand() % 4 + 8; ;
	maxHealth = vit * 10;
	health = vit * 10;
}

Character::Character(std::string n)
{
	level = stats[0];
	exp = 0;
	vit = rand() % 4 + 8;
	str = rand() % 4 + 8; ;
	dex = rand() % 4 + 8; ;
	maxHealth = vit * 10;
	health = vit * 10;
	name = n;
}
Character::Character(int level, int vit, int str, int dex, int health, int maxH) {
	this->level = level;
	this->vit = vit;
	this->str = str;
	this->dex = dex;
	this->health = health;
	this->maxHealth = maxH;
	this->exp = level * 100;
}

void Character::getStat(int arr[3])//returns stats of a specefic character
{
	for (int i{ 0 }; i < 3; i++) {
		if (i == 0)
			std::cout << "Vit is: " << arr[0] << std::endl;
		else if (i == 1)
			std::cout << "str is: " << arr[1] << std::endl;
		else if (i == 2)
			std::cout << "Dex is: " << arr[2] << std::endl;
	}
}
int Character::choice()//Character selection
{
	Menu m;
	while (!quit) {//constant loop for the menu
		m.menu();
		std::cin >> decision;
		if (decision == 'S' || decision == 's')
		{
			std::cin >> name;
			std::cout << " Let's Start\n";
			vit = 10;
			str = 10;
			dex = 9;
			arr[0] = vit;
			arr[1] = str;
			arr[2] = dex;
			health = vit * 10;

		}
		if (decision == 'Q' || decision == 'q') {

			std::cout << "Come back again\n";
		}
		else if (/*decision == 's' || decision == 'S' ||*/ decision == 'i' || decision == 'I') {
			system("cls");
			std::cout << "Please choose a character first\n";
			choice();//Calling the func again if the player chose stats before choosing a character
		}
		else if (decision == 'b' || decision == 'B') {
			m.intialM();
		}
		return 0;
	}
	system("pause");
}
int Character::calchp() {//Calculate health
	return health;
}
void Character::takeDamage(int dmg) {
	health -= dmg;
	if (health <= 0) {
		throw 0;
	}
}
void Character::healChar(int h) {
	health += h;
	if (health >= maxHealth) {
		health = maxHealth;
	}
}

int Character::increaseXp()//Increases level no saving progress yet....
{
	(*ptr) += 1;
	//std::cout << "Your Level is: ";
	return level;
}
