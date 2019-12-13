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
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")


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
		{/*
			std::cout << " Let's Start\n";
			vit = 10;
			str = 10;
			dex = 9;
			health = vit * 10;
			*/
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
void Character::healChar() {
	health += 25;
	if (health >= 100) {
		health = 100;
	}
}/*
char Character::useItems()//Ibrahim Jaber use the items
{
	Art potions;
	//battle o(game);
	char ch{ 'h' };
	std::cin >> ch;
	if (ch == '1') {
		o.test();

	}
	if (ch == '2') {
		std::cout << "Choose one of those\n";
		potions.consH();
		healChar();
	}
	return ch;
}
*/

Character::Character() {
	level = 1;
	exp = 0;
	vit = rand() % 4 + 8;
	str = rand() % 4 + 8; ;
	dex = rand() % 4 + 8; ;
	maxHealth = vit * 10;
	health = vit * 10;
}