#include <iostream>
#include <fstream>

#include "Game.h"

#pragma once
class FileSaves
{
public:
	static void saveToFile(Game* game);
	static void loadFromFile(Game* game, std::string saveName);

};