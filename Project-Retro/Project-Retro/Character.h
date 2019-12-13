#pragma once
#include<string>
#include<vector>
#include "Menu.h"


class Character {
public:
	Character();

	//void runS();//Main function to run the game
	int choice();// choice of character
//Functions
	int calchp();
	//void dmgdel(); used instead in battle class
	//int dealdamg(Character c, Enemy e);
	void getStat(int arr[3]);
	//Variables
	//int arr[3] = { vit,str,dex };
	char decision;
	char intialDecision;
	bool quit = false;
	//GUI Material
	int health;
	int maxHealth;// character health calculated from vitality equation : health = vitality * 10;
	int exp; // experience points of the user
	int level; // level of the user
	//int battlechoice(); used instead in battle class
	//stats
	int vit; // stat vit for the character also used in the calculation of health.
	int str; // damage dealt() calculated by str * 10
	int dex; // used in the calculation of dodge chance.
	void takeDamage(int dmg);

	char useItems();//Ibrahim Jaber function for using items

	void healChar();//Ibrahim Jaber Function to use healing

private:

};