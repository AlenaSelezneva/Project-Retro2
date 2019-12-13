#include "Chapter1.h"
#include "Game.h"
#include "Art.h"
#include <iostream>
#include "battle.h"


Chapter1::Chapter1(Game* game) {
	this->game = game;
}
void Chapter1::play() {
	SetConsoleTitle(TEXT("Suchimupankue"));
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	Character* s = game->getCharacter();

	Enemy* e = new Enemy();
	game->setEnemy(e);

	Art a;
	//bool players = PlaySound(L"Thinking_about_the_Situation_Main_Asset.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	//std::cout << players;
	Battle arena(game);
	arena.fight();

	game->setEnemy(nullptr);
}