#include "Character.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <tchar.h>
#include <conio.h>
#include <Mmsystem.h>
#include <mciapi.h>
#include "Enemy.h"
#include "battle.h"
#include "Art.h"
#include "Game.h"
#include "Chapter1.h"
#include<iosfwd>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")
int main()
{
	Game* game = new Game();
	Chapter1 ch1(game);
	ch1.play();

	//chaper1.play() 

/*	SetConsoleTitle(TEXT("Suchimupankue"));
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	Character s;
	Enemy e;

	Art a;
	bool players = PlaySound(L"Thinking_about_the_Situation_Main_Asset.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	std::cout << players;
	battle arena;
	arena.fight();
	*/
	//TESTING "draw()" FUNCTIONS
	//a.draw4();
	//a.draw5();
	//a.draw6();
	//a.draw7();
	//a.avatar();
	//TESTING ENDS HERE
}