#pragma once

#include <iostream>
#include "my_Functions.h"
#include <random>
#include <vector>


using namespace std;

vector<int> playersDice;
int value;
vector<int> userInputs;

int lastInputValue;

int numberOfDiceToAdd;
int i = 0;
string placementName[6] = { "first ","second ","third ","forth ","Fifth " };

int threeOfAKind;

int score;

int threeOfAKindScore(int caseValue);

void playerTurn() {


	for (int i = 0; i < 6; i++) {
		playersDice.push_back(diceRoller());
	}

	//sorts array from low to high
	stable_sort(playersDice.begin(), playersDice.end());

	for (int j = 0; j < playersDice.size(); j++) {
		cout << j + 1 << ":" << "[ " << playersDice[j] << " ]" << endl;
	}

	cout << "How many dice would you like to keep? (enter 0 if scoring is not possible)";


	cin >> numberOfDiceToAdd;

	if (numberOfDiceToAdd == 0) {
		cout << "Six Dice Farkle! To bad!";
	}
	else {
		while (i < numberOfDiceToAdd) {
			cout << "enter " << placementName[i] << "dice (number to left of die): ";
			cin >> value;
			userInputs.push_back(value - 1);
			i++;
		}

		lastInputValue = userInputs.size();
		lastInputValue = lastInputValue - 1;


		if (playersDice[userInputs[0]] == playersDice[userInputs[lastInputValue]] &&
			playersDice[userInputs[1]] == playersDice[userInputs[lastInputValue]]) {

			threeOfAKind = playersDice[userInputs[0]];

			threeOfAKindScore(threeOfAKind);

			cout << "you scored: " << score << " Points!";
		}
		else {
			cout << "rip you suck";
		}
	}


	

	



}

int threeOfAKindScore(int caseValue) {

	switch (caseValue)
	{
	case 1:
		score = 1000;
		break;
	case 2:
		score = 200;
		break;
	case 3:
		score = 300;
		break;
	case 4:
		score = 400;
		break;
	case 5:
		score = 500;
		break;
	case 6:
		score = 600;
		break;
	default:
		cout << "Error no score possible";
		break;
	}

	return 0;
}