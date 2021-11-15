#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;
class gameLog {
private:
	vector<string>log;
public:
	void push_log(string);
	void display_log();
};
