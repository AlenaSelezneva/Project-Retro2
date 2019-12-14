#include "FileSaves.h"
#include "Game.h"
#include "Character.h"

#include <iostream>
#include <fstream>
#include <string>
/*

void FileSaves::saveToFile(Game* game){

	
	std::ofstream savesList;
	savesList.open ("savesList.txt", std::ios_base::app);


	std::ofstream save;
	save.open("save.txt");
	Character* p = game->getCharacter();

	save << "Character\n" <<
		p->level << "\n" <<
		p->vit << "\n" <<
		p->str << "\n" <<
		p->dex << "\n" <<
		p->health << "\n" <<
		p->maxHealth;

	save.close();
}

 void FileSaves::loadFromFile(Game* game, std::string saveName){//IN progress
	
 }

void FileSaves::loadFromFile(Game* game) {

	std::string line;
	std::ifstream saved("save.txt");
	if (saved.is_open())
	{
		int l, v, s, d, h, mH;
		getline(saved, line);
		getline(saved, line);
		l = stoi(line);
		getline(saved, line);
		v = stoi(line);
		getline(saved, line);
		s = stoi(line);
		getline(saved, line);
		d = stoi(line);
		getline(saved, line);
		h = stoi(line);
		getline(saved, line);
		mH = stoi(line);

		game->setCharacter(new Character(l, v, s, d, h, mH));
		saved.close();
	}
	else {
		std::cout << "No saved games\n";
	}

}*/