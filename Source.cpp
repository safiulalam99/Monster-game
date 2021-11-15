#include<iostream>
#include "Player.h"
#include "Map.h"

using namespace std;

void instructions(int)
{
	cout << "\t ***************************************************" << endl;
	cout << " \t \t Tervetuloa vankityrmaan" << endl;
	cout << "\t ***************************************************" << endl;
	cin.ignore();
	cout << "gems are the portal to enter the next level"<<endl;
	cin.ignore();
	cout << "it is recomended to collect all apples and then enter new level"<<endl;
	cin.ignore();
	cout << "Press ENTER to START THE GAME"<<endl;
}

int main()
{

	system("CLS");
	instructions(2);
	cin.ignore();
	Player p;						//player object
	p.GamePlay();					//function to print the whole map
	cout << "Begin the gamae" << endl;
					//function to control the player and move about the map

	return 0;
}
