#pragma once

#include <iostream>
#include "my_Functions.h"
#include <random>
#include <vector>
#include <algorithm>



using namespace std;

//data manipulation variables
vector<int> playersDice;
vector<int> userInputs;
vector<int> uniqueNumbers;
int value;
float lastInputValue;
int numberOfDiceToAdd;
int i = 0;
string placementName[6] = { "first ","second ","third ","forth ","Fifth " };

//stores first value of playerDice vector for case valuse of switch statement in function three of a kind
int threeOfAKind;

// score of kept dice 
int score;

//function to output and return of score for three of a kind's
int threeOfAKindScore(int caseValue);

//main function
int main(int playerScore)
{

	// pushes rolled dice result to the back of players dice vector
	for (int i = 0; i < 6; i++) {
		playersDice.push_back(diceRoller());
	}

	//sorts array from low to high
	stable_sort(playersDice.begin(), playersDice.end());

	//outputs dice on screen for player to see
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

		//redundant sort but used incase of error
		sort(userInputs.begin(), userInputs.end());

		for (int i = 0; i < userInputs.size(); i++) {
			if (i == 0 || playersDice[userInputs[i]] != playersDice[userInputs[i-1]]) {
				uniqueNumbers.push_back(playersDice[userInputs[i]]);
			}
		}

		for (int i = 0; i < uniqueNumbers.size(); i++) {

			int numberToEvaluate = uniqueNumbers[i];

			int evaluatedNumberQuantity = count(playersDice.begin(), playersDice.end(), numberToEvaluate);

			if (evaluatedNumberQuantity >= 3)
			{
				int overflowNumbers = evaluatedNumberQuantity - 3;

				threeOfAKind = numberToEvaluate;

				threeOfAKindScore(threeOfAKind);

				if (overflowNumbers > 0) {
					for (int i = 1; i < overflowNumbers; i++) {
						if (uniqueNumbers[i] == 5) {
							score += 50;
						}
						else if (uniqueNumbers[i] == 1) {
							score += 100;
						}
					}
				}
			}
			else if (uniqueNumbers[i] == 1 || uniqueNumbers[i] == 5)
			{
					if (playersDice[userInputs[i]] == 1) {
						score += 100;
					}
					else if (playersDice[userInputs[i]] == 5) {
						score += 50;
					}
			}
		}

		cout << "you scored: " << score << " Points!";
		
		
	}

	playerScore = score;
	return playerScore;
}

//uses caseValue for determination of case to return
int threeOfAKindScore(int caseValue) {

	switch (caseValue)
	{
	case 1:
		score += 1000;
		break;
	case 2:
		score += 200;
		break;
	case 3:
		score += 300;
		break;
	case 4:
		score += 400;
		break;
	case 5:
		score += 500;
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