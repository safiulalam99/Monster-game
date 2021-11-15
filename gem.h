#pragma once

class gem
{
private:

	char symbol;
	int energy;

public:
	int apples;
	gem();				//gem constructor
	int getEnergy();	//return energy value
	char getSymbol();	//return gem symbol @
	int appleC();
};