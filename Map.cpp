#include"Map.h"
#include<iostream>

using namespace std;

Map::Map()
{
	this->height = 10;
	this->width = 20;
	this->xP = 1;
	this->yP = 1;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			map[i][j] = '.';
		}
	}
}

void Map::xWalls()
{
	for (int i = 0; i < height; i++)
	{
		if (i == 0 || i == height - 1)
		{
			for (int j = 0; j < width; j++)
			{
				map[i][j] = '#';
			}
		}

	}
}


void Map::yWalls()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				map[i][j] = '#';
			}

		}

	}
}


void Map::printMap()
{
	//system("CLS");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}



void Map::addPlayer()
{
	int x = xP;
	int y = yP;
	map[x][y] = 'P';
}

void Map::addMonster(int x)
{
	for (int i = 0; i < 5 + x; i++)
	{
		int x = rand() % width + 1;
		int y = rand() % height + 1;
		if (x < width - 1 && y > 0 && y < height - 1)
		{
			map[x][y] = Monster::getSymbol();
		}
	}

}

void Map::addGem(int x)
{
	for (int i = 0; i < 5 + x; i++)
	{
		int x = rand() % width + 1;
		int y = rand() % height + 1;
		if (x < width - 1 && y > 0 && y < height - 1)
		{
			map[x][y] = gem::getSymbol();
			gem::apples++;
		}
	}

}


void Map::printAll()
{
	//system("CLS");
	xWalls();
	yWalls();
	addPlayer();
	addMonster(1);
	addGem(1);
	printMap();
}

void Map::hel()
{
	cout << this->xP << "Should show height" << endl;
}