#include "Battle.h"
#include "Character.h"
#include "Menu.h"
#include "Enemy.h"
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include "Art.h"
#include<stdio.h>
#include<conio.h>
#include "Game.h"
#include "Inventory.h"
//Task simulation with a layout is a success 
Enemy* E;
Character* P;
Art t;

void Battle::fight() {//Battle simulation-------->Next is going to be interactive
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Menu m;
	srand(time(NULL));
	char choice{ 'y' };
	int f = 1;
	E = game->getEnemy();
	P = game->getCharacter();
	t = game->t;
	m.CopyR();
	P->choice();
	t.intro();
	E->disEnemyRotation();
	t.ingage();
	system("cls");
	while (P->health > 0 && E->health > 0)
	{
		if (f == 2) {//if f == 1 you are taking damage
			int dmg = max((E->str - P->dex + rand() % 10), 1);
			t.layout1b(*P, *E);
			SetConsoleTextAttribute(hConsole, 4);
			std::cout << "Damage taken: " << dmg << std::endl;
			std::cout << std::endl;
			try {
				P->takeDamage(dmg);
			}
			catch (int e) {

				t.lose();
			}
			SetConsoleTextAttribute(hConsole, 7);

			f++;
			system("pause");
			system("cls");
		}
		else if (f == 1) {//if f == 2 you are causing damage
			t.layout1b(*P, *E);
			m.charChoice();
			SetConsoleTextAttribute(hConsole, 9);
			Art potions;
			char ch{ 'h' };
			std::cin >> ch;
			if (ch == '1') {
				int dmg = max(P->str - E->dex + rand() % 10 + 1, 1);
				try {
					std::cout << "Damage dealt: " << dmg << std::endl;
					E->takeDamage(dmg);
				}
				catch (int e) {
					P->increaseXp();//Ibra Increase Xp after each win
					std::cout << "Your Level is:" << P->level;
					t.win();
				}
			}
			if (ch == '2') {
				std::cout << "Choose one of those\n";
				//std::cin >> ch;
				potions.consH();
				//P->healChar(25);//testing for heal char,
				//i.healthPo(P);//Ibrahim jaber a function from inventroy class that retain health
			}
			SetConsoleTextAttribute(hConsole, 7);
			SetConsoleTextAttribute(hConsole, 9);
			f++;
			system("pause");
			system("cls");
		}
		else if (f == 3) {
			//system("pause");
			system("cls");
			f -= 2;
		}
		SetConsoleTextAttribute(hConsole, 7);
	}
	std::cout << "Play Again? Y or Q\n";
	std::cin >> choice;
	if (choice == 'y' || choice == 'Y') {
		system("cls");
		P->health = P->maxHealth;
		E->health = E->maxHealth;
		fight();
	}
	else if (choice == 'q' || choice == 'Q') {
		std::cout << "Good bye!\n";

	}
}
void Battle::dmgdel()
{
	//*e_ptr -= *pt_r;
}
Battle::Battle(Game* g) {
	game = g;
}
