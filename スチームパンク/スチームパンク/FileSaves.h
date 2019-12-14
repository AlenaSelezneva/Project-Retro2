#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Game.h"

#pragma once
class FileSaves
{
public:
	static void saveToFile(Game* game);
	static std::vector<std::string> getSaves();
	static void loadFromFile(Game* game, std::string saveName);
};