#include "battle.h"
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

//Task simulation with a layout is a success 
Enemy* E;
Character* P;
Art t;

void Battle::fight() {//Battle simulation-------->Next is going to be interactive

	E = game->getEnemy();
	P = game->getCharacter();
	t = game->t;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Menu m;
	srand((int)time(0));
	char choice{ 'y' };
	int f = 1;
	//m.menu();
	P->choice();
	system("cls");//testing(Ali)
	Sleep(300);//added a 5 second break between initial menu and intro
	t.intro();
	E->disEnemyRotation();
	system("cls");
	while (P->health > 0 && E->health > 0)
	{
		if (f == 1) {//if f == 1 you are taking damage
			int dmg = max((E->str - P->dex + rand() % 10 + 1), 0);
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
		else if (f == 2) {//if f == 2 you are causing damage
				//e_ptr = &E.health;
			t.layout1b(*P, *E);
			m.charChoice();

			//battlechoice();
			SetConsoleTextAttribute(hConsole, 9);
			//		P->useItems();
			Art potions;
			char ch{ 'h' };
			std::cin >> ch;
			if (ch == '1') {
				int dmg = max(P->str - E->dex + rand() % 10 + 1, 0);
				try {
					std::cout << "Damage dealt: " << dmg << std::endl;
					E->takeDamage(dmg);
				}
				catch (int e) {
					t.win();
				}

			}
			if (ch == '2') {
				std::cout << "Choose one of those\n";
				potions.consH();
				P->healChar();
			}
			//			return ch;



			SetConsoleTextAttribute(hConsole, 7);

			/*P.useItems();
			if (P.useItems() == '1') {
				try {
					E.takeDamage(dmg);
				}
				catch (int e) {
					t.win();
				}*/
			SetConsoleTextAttribute(hConsole, 9);
			/*
				int dmg = max(P->str - E->dex + rand() % 10 + 1, 0);
				try {
					std::cout << "Damage dealt: " << dmg << std::endl;
					E->takeDamage(dmg);
				}
				catch (int e) {
					t.win();
				}
				*/
				//}
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
		fight();
	}
	else if (choice == 'q' || choice == 'Q') {
		std::cout << "Good bye!\n";
	}

}
/*
void battle::test()
{
	int dmg = max(P->str - E->dex + rand() % 10 + 1, 0);
		try {
			std::cout << "Damage dealt: " << dmg << std::endl;
			E->takeDamage(dmg);
		}
		catch (int e) {
			t.win();
		}
}
*/
/*
void battle::dmgdel()
{
	*e_ptr -= *pt_r;
}
*/
Battle::Battle(Game* g) {
	game = g;
}
