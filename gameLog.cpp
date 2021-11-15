#include "gameLog.h"
#include <vector>
#include <iostream>


using namespace std;
void gameLog::push_log(string input) {
	log.push_back(input);
}
void gameLog::display_log() {
	for (int i = 0; i < log.size(); i++) {
		cout << log[i] << endl;
	}
}