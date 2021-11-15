#include "Player.h"
#include "gem.h"
#include<iostream>
#include<iomanip>
using namespace std;

int Level = 0;
int n = 5;
int apple = 0;

Player::Player()
{
	this->energy = 100;
	this->symbol = 'P';
	this->score = 0;
	this->play = new Map[10];
}


int Player::showEnergy() {
	return this->energy;
}
void Player::energyUp()
{
	this->energy++;

}

void Player::energyDown()
{
	this->energy-=5;
}


void Player::displayGem()
{
	play[Level].map[xP][yP] == 'S';
	Level++;
}
void Player::display_endscreen() {
	cout << "--------------------------"<<endl;
	cout << "--------------------------" << endl;
	display_log();
	cout << "Better luck next time"<<endl;
	cout << "************************" << endl;

}

void Player::position(int x, int y)
{
	system("CLS");
	int comp = 0;
	comp = play[Level].map[x][y];

	if (comp == 64)
	{
		apple++;
		cout << "Apple digest" << endl;
		push_log("--> Player ate an apple (@)");
		this->energy += 20;
		
		
	}

	if (comp == 77)
	{
		cout << "Monster touch" << endl;
		this->energy -= 40;
		push_log("--> Player Fought a monster (M)");
	}

	if (comp == 71)
	{
		Level++;
		cout << "Player ate the Gem" << endl;
		push_log("--> Player ate a Gem and moved to the next level (G)");
		apple = 0;
		xP = 1;
		yP = 1;
		n++;
		GamePlay();
		
	}
}

void Player::movement(char move)
{
	int temp = xP;
	int temp2 = yP;
	int rand;
	play[Level].map[xP][yP] = '.';
		if (move == 'w' || move == 'W')
		{
			xP--;
			rand = play[Level].map[xP][yP];
			if (rand == 35)
			{
				play[Level].map[temp][temp2] = 'P';
				xP++;
			}
			else
			{
				position(xP, yP);
				play[Level].map[xP][yP] = this->symbol;
				energy += 5;
			}
			
		}

		if (move == 'a'||move=='A')
		{
			yP--;
			rand = play[Level].map[xP][yP];
			if (rand == 35)
			{
				play[Level].map[temp][temp2] = 'P';
				energy += 5;
				yP++;
			}
			else
			{
				position(xP, yP);
				play[Level].map[xP][yP] = this->symbol;
			}

		}

		if (move == 's' || move == 'S')
		{
			xP++;
			rand = play[Level].map[xP][yP];
			if (rand == 35)
			{
				play[Level].map[temp][temp2] = 'P';
				energy += 5;
				xP--;
			}
			else
			{
				position(xP, yP);
				play[Level].map[xP][yP] = this->symbol;
			}
		}

		if (move == 'd' || move == 'D')
		{
			yP++;
			rand = play[Level].map[xP][yP];
			if (rand == 35)
			{
				play[Level].map[temp][temp2] = 'P';
				yP--;
				energy += 5;
			}
			else
			{
				position(xP, yP);
				play[Level].map[xP][yP] = this->symbol;
			}
		}

		if (apple == gem::apples)
		{
			play[Level].map[5][5] = 'G';
		}
	
	cin.ignore();
	system("CLS");
	cout <<"\t \t Level: " << Level << endl;
	play[Level].printMap();
	cout << "Apples eaten =" << apple << endl;
	cout << "\t \t"<<"Energy: "<<showEnergy()<<endl;
}


void Player::game()
{
	char input;
	cout << "Input wasd to control the player" << endl;
	cin >> input;
	do {

		switch (input)
		{
		case 'w':
		case'W':

		case 'a':
		case'A':
		case 's':
		case'S':
		case'D':
		case 'd': movement(input); 
			energyDown(); 
			break;

		case 'q':
		case 'Q':
				push_log("Player Quit the Game");
				display_endscreen();
			
				exit(0);
			

			
		default: cout << "Error Try again" << endl; break;
		}
		cin >> input;
	} while (this->energy >= 1);
	push_log("The end, No energy remains"); 
		display_endscreen();
}


void Player::createMap(int L)
{
	cout << "Map level is " << Level << endl;
	play[Level].printAll();
	cin.ignore();
}

void Player::printMap(int Level)
{
	play[Level].printMap();
}

void Player::GamePlay()
{
	system("CLS");
	createMap(Level);
	game();
}