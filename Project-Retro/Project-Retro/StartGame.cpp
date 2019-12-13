#include "StartGame.h"
#include <windows.h>
#include "FileSaves.h"


#include <iostream>

void StartGame::showMenu()//Intial menu to load new or to save a game
{

	std::cout << "******\n" <<
		"N - start new game\n" <<
		"L - Load old game\n" <<
		"Q - quit\n" <<
		"*****";
}

char StartGame::getChoice()//function for choice input which will be called in start
{
	char c;
	std::cin >> c;
	return c;
}

Game* StartGame::start()//takes achar input in case statements and execute accordinglly 
{
	char c;
	while (true) {
		system("cls");
		showMenu();
		c = getChoice();
		//
		switch (c) {
		case 'n':
		case 'N':
		{
			std::cout << "Enter a name for a character: ";
			std::string n;
			std::cin >> n;

			Character* p = new Character(n);
			Game* game = new Game();
			game->setCharacter(p);

			FileSaves::saveToFile(game);
			return game;

			break;
		}
		case 'l':
		case 'L':
		{
			Game* game = new Game();
			//FileSaves::loadFromFile(game);
			return game;

			break;
		}
		case 'q':
		case 'Q':

			exit;
			break;
		default: break;
		}

	}



	//it does nothing
	Game* game;
	return game;
}