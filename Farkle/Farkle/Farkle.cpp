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
#include "playerClass.h"

using namespace std;

// lets us know if player as winnable score
bool winner = false;

int numberOfPlayers;


//int farkle()
//{
//
//	cout << "welcome to Farkle please spend a moment and read the rules below.\n\n";
//
//	ifstream file;
//
//	file.open("farkleRules.txt");
//
//	if (file.is_open()) {
//		string line;
//		while (getline(file, line)) {
//			cout << line << endl;
//		}
//		file.close();
//	}
//	else {
//		cout << "Error: Unable to open file" << endl;
//	}
//
//	cout << "press any key to continue";
//
//	system("pause");
//	system("cls");
//
//	cout << "How many players will there be?";
//
//	cin >> numberOfPlayers;
//
//	playerClass* players = new playerClass[numberOfPlayers];
//
//	for (int i = 0; i < numberOfPlayers; i++) {
//
//		playerClass p;
//		cout << "ENTER NAME: ";
//		string name;
//		cin >> name;
//		p.SetName(name);
//
//		players[i] = p;
//	}
//
//	for (int i = 0; i < numberOfPlayers; i++) {
//		cout << players[i].GetName() << endl;
//	}
//
//	while (winner == false) {
//		int currentPlayer = -1;
//		currentPlayer = (currentPlayer + 1) % numberOfPlayers;
//		int currentScore = players[currentPlayer].GetScore();
//
//		cout << players[currentPlayer].GetName() << "'s turn";
//		cout << "current score: " << players[currentPlayer].GetScore() << endl;
//
//		currentScore =  currentScore + playerTurn(currentScore);
//
//		players[currentPlayer].SetScore(currentScore);
//
//		currentPlayer++;
//
//	}
//	delete [] players;
//}
