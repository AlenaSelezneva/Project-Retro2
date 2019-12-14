#include "Menu.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include "Art.h"
#include <iomanip>
#include "Character.h"
Character P;
void Menu::intialM()
{
	

	std::cout <<
		"*************** Chaprupanku * ***************\n" <<
		"*      ===================================   *\n" <<
		"*                                            *\n" <<
		"* (S) Story                                  *\n" <<
		"*                                            *\n" <<
		"* (B) Get to Battle                          *\n" <<
		"*											  *\n" <<
		"*                                            *\n" <<
		"* (Q)  Quit program                          *\n" <<
		"*                                            *\n" <<
		"**********************************************\n";
	
}

void Menu::menu()
{
	Art t;//testing (Ali)
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font 
	cfi.dwFontSize.Y = 17;                 // Height 
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	//std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	t.logoV2();//printing logo  on the initial menu(Ali)
	std::cout <<
		"***************** Start game *****************\n" <<
		"*      ===================================   *\n" <<
		"*                                            *\n" <<
		"* (S)Start                                   *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"* (Q)  Quit program                          *\n" <<
		"**********************************************\n";
	SetConsoleTextAttribute(hConsole, 7);
}


void Menu::personalMenu()//Not integrated yet..... in progress to intiate or not.
{
	std::cout <<
		"****** Character personalization * ***************\n" <<
		"*      ===================================   *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"*                                            *\n" <<
		"*											  *\n" <<
		"* (S) Stats                                  *\n" <<
		"* (I) Inventory                              *\n" <<
		"* (B) GO Back                                *\n" <<
		"**********************************************\n";

}

void Menu::charChoice()
{
		std::cout << "~~~~~~~~~~~\n";
		std::cout << "Take action ! \n";
		std::cout << "1-Attack\n";
		std::cout << "2-Items\n";
		std::cout << "3-Flee\n";
}

void Menu::CopyR()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font 
	cfi.dwFontSize.Y = 17;                 // Height 
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	//std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	std::cout <<
		"***************   Studio Crew  * ***************\n" <<
		"*      ===================================     *\n" <<
		"*                                              *\n" <<
		"* Ali Samlioglu                                *\n" <<
		"* Game layout Engineer/Director                *\n" <<
		"* Ibrahim Jaber                                *\n" <<
		"* Structure and research/Logic                 *\n" <<
		"* Alena ??                                     *\n" <<
		"*  Logic and algorithms                        *\n" <<
		"* Sean Doucet                                  *\n" <<
		"* Sound engineer                               *\n" <<
		"**********************************************\n";
	system("pause");
	system("cls");
}

