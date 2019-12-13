#pragma once
#include<string>
#include <string>
#include<vector>
#include "Menu.h"


class Character {
public:
	Character(std::string n);
	Character();
	Character(int level, int vit, int str, int dex, int health, int maxH);
	//void runS();//Main function to run the game
	int choice();// choice of character
	std::string name;//Ibra Name input
//Functions
	int calchp();
	int stats[1] = { level };
	//void dmgdel(); used instead in battle class
	//int dealdamg(Character c, Enemy e);
	void getStat(int arr[3]);
	//Variables
	int arr[3] = { vit,str,dex };
	char decision;
	char intialDecision;
	bool quit = false;
	//GUI Material
	int health = vit * 10;// character health calculated from vitality equation : health = vitality * 10;
	int exp; // experience points of the user
	int level{ 0 }; // level of the user
	//int battlechoice(); used instead in battle class
	//stats
	int vit; // stat vit for the character also used in the calculation of health.
	int str; // damage dealt() calculated by str * 10
	int dex; // used in the calculation of dodge chance.
	void takeDamage(int dmg);
	int maxHealth;
	char useItems();//Ibrahim Jaber function for using items
	void healChar(int h);//Ibrahim Jaber Function to use healing
	int increaseXp();
	int* ptr{ &level };// Ibra Points to the level


private:

};