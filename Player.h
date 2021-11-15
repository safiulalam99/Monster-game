#pragma once
#include<iostream>
#include "Map.h"
#include "gameLog.h"

class Player : public Map, gem, gameLog
{
private:

	int energy;
	char symbol;
	int score;
	Map *play;

public:
	Player();
	void energyUp();
	void energyDown();
	void movement(char);
	void position(int, int);
	void game();
	int showEnergy();
	void displayGem();
	void createMap(int);
	void printMap(int);
	void GamePlay();
	void display_endscreen();

};


