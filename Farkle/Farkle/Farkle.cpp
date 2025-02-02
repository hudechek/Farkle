/*

Name: Justin Hudechek
Class: IT-312
Date: 
Project: Final - Farkle
*/

#include <iostream>
#include "my_Functions.h"
#include <algorithm>
#include <fstream>
#include <string>
#include "myClasses.h"

using namespace std;

// lets us know if player as winnable score
bool winner = false;

int numberOfPlayers;


int main()
{

	/*cout << "welcome to Farkle please spend a moment and read the rules below.\n\n";

	ifstream file;

	file.open("farkleRules.txt");

	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	}
	else {
		cout << "Error: Unable to open file" << endl;
	}*/

	playerTurn();


	//cin.get();
}
