#include "Game.h"
#include "Character.h"

Game::Game() {
	player = new Character();
	enemy = nullptr;
}
Character* Game::getCharacter() {
	return player;
}
/* */
void Game::setEnemy(Enemy* en) {
	enemy = en;
}

Enemy* Game::getEnemy() {
	return enemy;
}