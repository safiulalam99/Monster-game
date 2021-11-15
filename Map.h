#pragma once
#include<iostream>
#include "Monster.h"
#include "gem.h"

class Map : public Monster, gem
{
private:

	int width;
	int height;

public:
	char map[100][100];
	int xP;
	int yP;
	Map();
	void printAll();
	void xWalls();
	void yWalls();
	void addPlayer();
	void addMonster(int);
	void addGem(int);
	void printMap();
	void hel();

};