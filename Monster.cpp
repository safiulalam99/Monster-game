#include "Monster.h"
#include<iostream>


using namespace std;

Monster::Monster()
{
	this->strength = 30;
	this->symbol = 'M';
}


int Monster::getStrength()
{
	return this->strength;
}

char Monster::getSymbol()
{
	return this->symbol;
}