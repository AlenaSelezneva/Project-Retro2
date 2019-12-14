#include "Art.h"
#include "Character.h"
#include "Enemy.h"
#include "battle.h"
#include<iostream>
#include <sstream>
#include <windows.h>
#include <mmsystem.h>
#include <tchar.h>
#include <conio.h>
#include <Mmsystem.h>
#include <mciapi.h>
#include <cwchar>



void Art::layout1a(Character P, Enemy E)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int f{ 1 };
	SetConsoleTextAttribute(hConsole, 13);
	std::cout << "================================================\n";
	std::cout << " (o_o) " << "             " << " /0\\ \n";
	std::cout << " (\\)/\\/ " << "          " << "<--( ) \n";
	std::cout << " /``\\ \ " << "            " << "  /|\\    \n";
	std::cout << "================================================\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	std::cout << "Health of the hero : ";
	Sleep(500);
	SetConsoleTextAttribute(hConsole,9);
	std::cout  << P.health << std::endl;
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "Health of the enemy : ";
	Sleep(500);
	SetConsoleTextAttribute(hConsole, 12);
	std::cout << E.health << std::endl;
	SetConsoleTextAttribute(hConsole, 7);
	
}

void Art::layout1b(Character P, Enemy E)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int f{ 1 };
	SetConsoleTextAttribute(hConsole, 13);
	std::cout << "===================================================\n";  
	std::cout << " (o_o) " << "             " << " -\\_(*~*)_/- \n";
	std::cout << " (\\)/\\/ " << "            " << "     (  ) \n";
	std::cout << " /``\\ \ " << "            " << "      /``\\    \n";
	std::cout << "================================================\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	std::cout << "Health of the hero : ";
	Sleep(500);
	SetConsoleTextAttribute(hConsole,9);
	std::cout  << P.health << std::endl;
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "Health of the enemy : ";
	Sleep(500);
	SetConsoleTextAttribute(hConsole, 12);
	std::cout << E.health << std::endl;
	SetConsoleTextAttribute(hConsole, 7);

}
void Art::ingage(Character P)//NEw function Ali & Ibra to display customizable name
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	for (int i{ 0 }; i < 10; i++) {
		unsigned int j = rand() % 3;
		unsigned int k = rand() % 15;
		SetConsoleTextAttribute(hConsole, k);
		std::cout << std::endl;
		std::cout << " _________________                   __________________\n";
		std::cout << "|      " << P.name << "      |                   |      ????      |\n";
		std::cout << "|                |       " << P.name << "        |                |\n";
		std::cout << "|      (o_o)     |         VS        |     \\\\||//     |\n";
		std::cout << "|      ( \\)/\\/   |        ????       |      (__)      |\n";
		std::cout << "|      /``\\      |                   | ^~`~^~`~^~`~^~ |\n";
		std::cout << "|________________|                   |________________|\n";
		std::cout << "| HP: 180        |                   | HP: 320        |\n";
		std::cout << "|________________|                   |________________|\n";
		Sleep(400);
		
		//change 0 to j to randomize
		system("cls");
	}
	SetConsoleTextAttribute(hConsole, 7);
	//system("pause");
}


void Art::layout3()
{
	std::cout << "                  ____.-==-, _______  _______  _______  _______  _..._\n";
	std::cout << "                  {\"\"\"\"\"LILI|[\" \" \"'\"]['\"\"'\"\"\"][''\"\"'''][\"\" \"\"\"\"][LI LI]\n";
	std::cout << "         ^#^#^#^#^/_OO====OO`'OO---OO''OO---OO''OO---OO''OO---OO`'OO-OO'^#^#^#^\n";
	std::cout << "    ^^^ jgs^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	Sleep(300);
}

void Art::draw4()
{
	std::stringstream ss;
	for (int i = 0; i < 27; i++)
	{
		ss << "    ";
		std::cout << ss.str() << "     _\n";
		std::cout << ss.str() << ".-.-.=\\-.\n";
		std::cout << ss.str() << "(_)=='(_)\n";
		Sleep(180);
		system("cls");
	}
	system("pause");

}
void Art::draw5()
{
	std::stringstream sspace;
	int x = 1;
	for (int i = 0; i < 20; i++)
	{
		sspace << "     ";
		
		if (x == 1)
		{
			
			std::cout << sspace.str() <<"  _ __\n";
			std::cout << sspace.str() <<" (_|_ '.\n";
			std::cout << sspace.str() <<"     '-'\n";
			x++;
			
			std::cout << sspace.str() << "        _ _.-.\n";
			std::cout << sspace.str() << "       (_|__.'\n";
			Sleep(320);
			system("cls");
			
		}
		else if (x == 2)
		{
			
			std::cout << sspace.str() << "       _ __\n";
			std::cout << sspace.str() << "      (_|_ '.\n";
			std::cout << sspace.str() << "          '-'\n";
			
			std::cout << sspace.str() <<"  _ _.-.\n";
			std::cout << sspace.str() <<" (_|__.'\n";
			x--;
			Sleep(320);
			system("cls");

			
		}
	}
	system("pause");
}

void Art::draw6()
{
	std::stringstream ss;
	int x = 1;
	for (int i = 0; i < 10; i++)
	{
		ss << "   ";
		if (x == 1)
		{
			std::cout <<"\n";
			std::cout << ss.str() << "                  __\n ";
			std::cout << ss.str() << "(\\  .-.   .-.   /_\")\n";
			std::cout << ss.str() << " \\\\_//^\\\\_//^\\\\_//\n";
			std::cout << ss.str() << "  `\"`   `\"`   `\"`\n";
			std::cout << "\n\n SCENE 1\n";
			Sleep(500);
			system("cls");
			x += 1;
		}
		else if(x==2)
		{
			std::cout << "\n";
			std::cout <</* ss.str() <<*/ "                           __\n";
			std::cout <</* ss.str() <<*/ " _________________________/_\")\n";
			std::cout << /*ss.str() <<*/ "<_u_n_u_n_u n_u_n_u_n_u_n__/\n";
			std::cout << /*ss.str() <<*/ "  `\"`   `\"`   `\"`   `\"`\n";
			std::cout << "\n\n SCENE 2\n";
			Sleep(500);
			system("cls");
			x += 1;
		}
		else
		{
			std::cout << "  .--.--.--.--.--.-\\_/ \n";
			std::cout << " (__(__(__(__(__(__(\") \n";
			std::cout << " ^  \"\" \"\" \"\" \"\" \"\" \"\"\n";
			std::cout << "\n\n SCENE 3\n";
			Sleep(800);
			system("pause");
			system("cls");

			std::cout <</* ss.str() <<*/ "                      .    .\n";
			std::cout << /*ss.str() <<*/ "                       )  ( \n";
			std::cout << /*ss.str() <<*/ " _ _ _ _ _ _ _ _ _ _ _(.--.)\n";
			std::cout << /*ss.str() <<*/ "{{ { { { { { { { { { {( '_')\n";
			std::cout << /*ss.str() <<*/ ">>>>>>>>>>>>>>>>>>>>>>>`--'>\n";
			std::cout << "\n\n SCENE 4\n";
			Sleep(500);
			system("pause");
			
		}

	}
	
}

void Art::intro()
{

	
	SetConsoleTextAttribute(hConsole, 13);
	Sleep(500);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout <<  " - , _/\\_\\_~0_\ ___      __   __   __   __   __   __   __   __\n";
	std::cout << "  -- /___ \\ -  `___`\"-,\n";
	std::cout << "-- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 4);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << " __-- - , _/\\_\\_~0_\ ___      __   __   __   __   __   __   __\n";
	std::cout << "       -- /___ \\ -  `___`\"-,\n";
	std::cout << "    -- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 14);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __-- - , _/\\_\\_~0_\ ___      __   __   __   __   __   __\n";
	std::cout << "            -- /___ \\ -  `___`\"-,\n";
	std::cout << "         -- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 15);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __   __-- - , _/\\_\\_~0_\ ___      __   __   __   __   __\n";
	std::cout << "                 -- /___ \\ -  `___`\"-,\n";
	std::cout << "              -- - `\"-( @ )----( @ )---`\n";
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __   __   __-- - , _/\\_\\_~0_\ ___      __   __   __   __\n";
	std::cout << "                      -- /___ \\ -  `___`\"-,\n";
	std::cout << "                   -- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 13);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __   __   __   __-- - , _/\\_\\_~0_\ ___      __   __   __\n";
	std::cout << "                           -- /___ \\ -  `___`\"-,\n";
	std::cout << "                        -- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 11);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 14);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __   __   __   __   __-- - , _/\\_\\_~0_\ ___      __   __\n";
	std::cout << "                                -- /___ \\ -  `___`\"-,\n";
	std::cout << "                             -- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 8);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __   __   __   __   __   __-- - , _/\\_\\_~0_\ ___      __\n";
	std::cout << "                                     -- /___ \\ -  `___`\"-,\n";
	std::cout << "                                  -- - `\"-( @ )----( @ )---`\n";
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(320);
	system("cls");
	SetConsoleTextAttribute(hConsole, 12);
	logo();
	introAddOn();
	std::cout << "=================================================================\n";
	std::cout << "__   __   __   __   __   __   __  __-- - , _/\\_\\_~0_\ ___   \n";
	std::cout << "                                       -- /___ \\ -  `___`\"-,\n";
	std::cout << "                                    -- - `\"-( @ )----( @ )---`\n";
	std::cout << "=================================================================\n";
	SetConsoleTextAttribute(hConsole, 7);
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
	std::cout << "CHAPTER 1\n";
	Sleep(320);
	std::cout << "------------\n";
	Sleep(320);
	std::cout<<"As Unatro drove down the streets of Nuforpolis he knew there was an odd\n";
	Beep(850, 300);
	Sleep(500);
	std::cout<<"tension in the air that he could sense.As he felt the air breezing\n";
	Beep(850, 300);
	Sleep(500);
	std::cout<<"through his convertable, he couldn't be bothered by this tension \n";
	Beep(850, 300);
	Sleep(500);
    std::cout<<"beacuse right now, he had more important things to worry about.Tonight \n";
	Beep(850, 300);
	Sleep(500);
	std::cout<<"his friends were performing and he could not wait to reunite...\n";
	Beep(850, 300);
	Sleep(500);
	
	system("pause");
	system("cls");
	plot2();
}
void Art::introAddOn()
{

	std::cout << "	                           _   _       _a_a\n";
	std::cout << "                       _   _     _{.`=`.}_    {/ ''\_\n";
	std::cout << "               _      {.`'`.}   {.'  _  '.}  {|  ._oo)\n";
	std::cout << "              { \\    {/ .-. \\} {/  .' '.  \\} {/  |\n";
	std::cout << "~^~`~^~`~^~`~^~~^~^~`^~^~`^~^~^~^~^~^~`^~~`~^~`~^~`~^~`~^~~^~^~\n";
	std::cout << "===============================================================\n";


}

void Art::plot2()
{
	SetConsoleTextAttribute(hConsole, 1);
	std::cout << ".                   .        .     .        |--|--|--|--|--|--|  |=== |== |  /    i\n";
	SetConsoleTextAttribute(hConsole, 2);
	Sleep(320);
	std::cout << "              .               ______________|__|__|__|__|__|_ |  |=== |== | *  . /=\\\n";
	SetConsoleTextAttribute(hConsole, 3);
	Sleep(320);
	std::cout << "	__  *          .     /______________________________|-|  |=== |== |      |=| .\n";
	SetConsoleTextAttribute(hConsole, 4);
	Sleep(320);
	std::cout << "	__| .      .   .    //______________________________| :----------------------.\n";
	SetConsoleTextAttribute(hConsole, 5);
	Sleep(320);
	std::cout << "	__|   /|\\      _|_|//       ooooooooooooooooooooo   |-|                     |\n";
	SetConsoleTextAttribute(hConsole, 6);
	Sleep(320);
	std::cout << "	__|  |/|\\|__   ||l|/,-------8 FRIDAY NIGHT SHOW!8 --| |        WELCOME      |\n";
	SetConsoleTextAttribute(hConsole, 8);
	Sleep(320);
	std::cout << "	__|._|/|\\|||.l |[=|/,-------8  FAMOUS CROSSWEL  8 --|-|                     |\n";
	SetConsoleTextAttribute(hConsole, 9);
	Sleep(320);
	std::cout << "	__|[+|-|-||||li|[=|---------8   BROTHERS LIVE   8 --| |           TO        |\n";
	SetConsoleTextAttribute(hConsole, 10);
	Sleep(320);
	std::cout << "	_-----.|/| //:\\_[=|\\`-------8     AT 8.35PM     8 --|-|                     |\n";
	SetConsoleTextAttribute(hConsole, 11);
	Sleep(320);
	std::cout << "	 /|  /||//8/ :   8_|\\`----- 8ooooooooooooooooooo8 --| |       NUFORPOLIS    |\n";
	SetConsoleTextAttribute(hConsole, 12);
	Sleep(320);
	std::cout << "	/=| //||/ |  .   | |\\\\____________ _____ ___________|-|                     |\n";
	SetConsoleTextAttribute(hConsole, 13);
	Sleep(320);
	std::cout << "	==|//||  /   .   \\ \\\\_____________ |X| | ___________| `---==------------==---'\n";
	SetConsoleTextAttribute(hConsole, 14);
	Sleep(320);
	std::cout << "	==| ||  /         \\ \\_____________ |X|\\| ___________|     ||            ||\n";
	SetConsoleTextAttribute(hConsole, 15);
	Sleep(320);
	std::cout << "	==| |~ /     .     \\\n";
	SetConsoleTextAttribute(hConsole, 4);
	Sleep(320);
	std::cout << "	LS|/  /             \\______________________________________________________\n";
	SetConsoleTextAttribute(hConsole, 12);
	Sleep(320);
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "=======================================================================================\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  As he got off his car,he took another glimpse at this old city. It was\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  the same as he remembered the city from his last visit.\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  Even at night, the city was bright as a daylight thanks to these old trusty bilboards.\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  But Unatro knew better than to trust the way this city was. Corrupted,full of vile\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  people who wouldn't even care about the consequences of their actions. Unatro knew not\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  to blame the people. At the end of the day they were just pawns controlled by the\n ";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  government, brain washed.He knew the root of the cause but he couldn't do anything\n";
	Beep(850, 300);
	Sleep(500);
	std::cout << "  \"there is no hope for this city...\" he mummbled as he walked into the theater... \n";
	system("pause");
}

void Art::avatar()
{
	std::cout << "      _\n";
	std::cout << "     [+] \n";
	std::cout << "   (('_'))\n";
	std::cout << "   __/ \\-/\n";
	std::cout << "    /___\\\n";
	std::cout << "    _| \\_\n";

	std::cout << "NPC 1 (name here)\n";

	std::cout << "      _\n";
	std::cout << "    _1=1_ \n";
	std::cout << "   (('_'))\n";
	std::cout << "   _/ . \\_/\n";
	std::cout << "    |_:_|\n";
	std::cout << "    _| \\_\n";

	std::cout << "NPC 2 (name here)\n";
}


void Art::lose()
{
	SetConsoleTextAttribute(hConsole, 4);
std::cout << " _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._\n";
std::cout << ".-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.\n";
std::cout << " )                                                                           (\n";
std::cout << "(                                                                             )\n";
std::cout << " )|\\     /|                          ___                                ________(\n";
std::cout << "( \\ \\___/ |  _______   __    ___     | |         _______    _________  |   _____|\n";
std::cout << " ) \\__ __/  |   __  |  | |   | |     | |        |   __  |  |   _____   |   |___\n";         
std::cout << "(    | |    |  |  | |  | |   | |     | |        |  |  | |  |  |_____   |   ____|  \n";
std::cout << " )   | |    |  |__| |  | |___| |     | |______  |  |__| |  |______  |  |   |____  \n";        
std::cout << " )   |_|    |_______|  |_______|     |________| |_______|  _________|  |________|(\n";
std::cout << "(                                                                             )\n";
std::cout << " )                                                                           (\n";
std::cout << "(                                                                             )\n";
std::cout << ")                                                                           (\n";
std::cout << "(___       _       _       _       _       _       _       _       _       ___)\n";
std::cout << "    (__  _) ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ ) (_  __)\n";
std::cout << "    ( _ __) (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _) (__ _ )\n";
std::cout << "    (__  _) (_ _ _) `-._.-'                         `-._.-' (_ _ _) (_  __)\n";
std::cout << "    (_ ___) `-._.-'                                         `-._.-' (___ _)\n";
std::cout << "    `-._.-'                                                         `-._.-'\n";
SetConsoleTextAttribute(hConsole, 7);
system("pause");
}

void Art::win()
{
	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "  _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._\n";
	std::cout << " . - '---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.\n";
	std::cout << "  )                                                                             (\n";
	std::cout << " (                                                                               )\n";
	std::cout << "  )                                                                             (\n";
	std::cout << " (  |\\     /|                          _          _    ( )  ___     ___    ___   )\n";
	std::cout << "  ) \\ \\___/ / _______   ___   ___     | |    _   | |    _  |   \\    |  |   \\  / (\n";
	std::cout << " (   \\__ __/ |   __  |  | |   | |     | |   | |  | |   | | |     \\  |  |    ||    )\n";
	std::cout << "  )    | |   |  |  | |  | |   | |     | |   | |  | |   | | |  |\\  \\ |  |    ||   (\n";
	std::cout << " (     | |   |  |__| |  | |___| |     | |___| |__| |   | | |  | \\  \\|  |    __    )\n";
	std::cout << "  )    |_|   |_______|  |_______|     \\____________/   |_| |__|  \\_____|   |__| (\n";
	std::cout << " (                                                                                 )\n";
	std::cout << "  )                                                                             (\n";
	std::cout << " (                                                                               )\n";
	std::cout << "  )                                                                           (\n";
	std::cout << " (___       _       _       _       _       _       _       _       _       ___)\n";
	std::cout << "     `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-'\n";
	std::cout <<"              `-._.-'(  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-'\n";
	std::cout << "                     `-._.-' (__  _) (__  _) (_ _ _) `-._.-'\n";
	std::cout << "                             `-._.-' (_ ___) `-._.-'\n";
	std::cout << "                                     `-._.-'\n";
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
}

void Art::consH()
{
	std::cout << "    _ \n";
	std::cout << "  (\\o/)\n";
	std::cout << "   /_\\ \n";
	std::cout << "Heal +25 \n";
	//system("pause");
}




/*void Art::changeColor(int color)
{
	int g = SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	std::cout << g;
	if (g == true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
}*/

void Art::logo()
{
	std::cout << "        ________             ________            _____     ________     _____\n";
	std::cout << "	___  __ \\__________________(_)____________   /_    ___  __ \\______  /____________\n";
	std::cout << "	__  /_/ /_  ___ / __ \\____  /_  _ \\  ___ /  __/    __  /_/ /  _ \\  __/_  ___/ __ \\\n";
	std::cout << "	_  ____/_  /   / /_/ /___/ / /  __/ /__  / /_      _  _, _//  __/ /_ _  /  / /_/ /\n";
	std::cout << "	/_/     /_/    \\____/___  /  \\___/ \\___/ \\__/      /_/ |_| \\___/\\__/ /_/   \\____/\n";
	std::cout << "	                    /___ /\n";
}

void Art::logoV2()
{
	std::cout << "___  ____ ____  _ ____ ____ ___    ____ ____ ___ ____ ____\n";
	std::cout << "|__] |__/ |  |  | |___ |     |     |__/ |___  |  |__/ |  |\n";
	std::cout << "|    |  \\ |__| _| |___ |___  |     |  \\ |___  |  |  \\ |__|\n\n";


}


