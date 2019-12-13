#include "Enemy.h"
#include <cstdlib>
#include <iostream>
#include <time.h>
#include "Character.h"
#include "Art.h"



void Enemy::disEnemyRotation()
{
	Art t;
	std::string curr;
	srand(time(0));
	Sleep(30);
	std::vector <int> test{ vit,str,dex };
	std::string list[3] = { gandalf,smaug,voldemort };
	int abil[3];
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	for (int i{ 0 }; i < 10; i++) {
		unsigned int j = rand() % 3;
		unsigned int k = rand() % 15;
		SetConsoleTextAttribute(hConsole, k);
		Sleep(400);
		system("cls");
		t.ingage();
		//change 0 to j to randomize
		curr = list[0];
		//system("cls");

	}
	std::cout << std::endl;
	SetConsoleTextAttribute(hConsole, 7);

	//std::cout << "You are fighting: " << curr;
	//commented list out because we want to test with a stable enemy
	if (curr == list[0]) {

		str = 10;
		vit = 9;
		health = vit * 10;
		dex = 9;
		abil[0] = vit;
		abil[1] = str;
		abil[2] = dex;
		/*std::cout << calchp();
		std::cout << std::endl;
		std::cout << dmgdel();
		std::cout << std::endl;*/
		std::cout << list[0] << std::endl;
		getStat(abil);
		std::cout << "Health: " << health << std::endl;

	}
	else if (curr == list[1]) {
		str = 15;
		vit = 15;
		health = vit * 10;
		dex = 7;
		abil[0] = vit;
		abil[1] = str;
		abil[2] = dex;
		std::cout << calchp();
		std::cout << std::endl;
		//	std::cout << dmgdel();
		std::cout << std::endl;
		getStat(abil);
	}
	else if (curr == list[2]) {
		//std::cout << "Hello Gandalf";
		str = 3;
		vit = 12;
		health = vit * 10;
		dex = 8;
		abil[0] = vit;
		abil[1] = str;
		abil[2] = dex;
		std::cout << calchp();
		std::cout << std::endl;
		//std::cout << dmgdel();
		std::cout << std::endl;
		getStat(abil);
	}
	std::cout << std::endl;

}

void Enemy::setStat()//Not in use For now
{


}

int Enemy::curHealthE(Character other)
{
	while (this->health > 0) {
		this->health -= other.vit;
	}
	return this->health;
}


Enemy::Enemy() {
	level = 1;
	exp = 0;
	vit = rand() % 4 + 6;
	str = rand() % 4 + 6; ;
	dex = rand() % 4 + 6; ;
	maxHealth = vit * 10;
	health = vit * 10;
}