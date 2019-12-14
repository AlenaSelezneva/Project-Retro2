#include "Game.h"
#include "Character.h"
#include "Inventroy.h"
Game::Game() {
	player = new Character();
	enemy = nullptr;
}
Game::~Game() {
	delete[] player;
}
Character* Game::getCharacter() {
	return player;
}
/* */
void Game::setEnemy(Enemy* en) {
	enemy = en;
}

void Game::setCharacter(Character* c) {
	player = c;
}

Enemy* Game::getEnemy() {
	return enemy;
}