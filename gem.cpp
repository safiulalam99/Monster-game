#include "gem.h"
#include<iostream>


using namespace std;

gem::gem()
{
	this->energy = 50;
	this->symbol = '@';
	this->apples = 0;
}



int gem::getEnergy()
{
	return this->energy;
}

char gem::getSymbol()
{
	return this->symbol;
}

int gem::appleC()
{
	return this->apples;
}