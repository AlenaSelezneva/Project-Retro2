#include "Chapter1.h"
#include "Game.h"
#include "Art.h"
#include <iostream>
#include "battle.h"


Chapter1::Chapter1(Game* game) {
	this->game = game;
}
void Chapter1::play() {
	//Font size modifier
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 15;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	//std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	SetConsoleTitle(TEXT("Project Retro"));
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	Character* s = game->getCharacter();
	Enemy* e = new Enemy();
	game->setEnemy(e);
	Art a;
	bool players = PlaySound(L"Thinking_about_the_Situation_Main_Asset.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	std::cout << players;
	battle arena(game);
	arena.fight();

	game->setEnemy(nullptr);
	//delete[] game->setEnemy;
}