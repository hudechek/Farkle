/*
  https://cplusplus.com/reference/random/
  Refrence for random number generation use for DiceClass
*/

#include <iostream>
#include <random>

int rolledNumber;

//array of six rolled dice
int rolledDiceArray[6];

//sorts rolled dicearray from lowest to highest int
//int sortArray = sizeof(rolledDiceArray) / sizeof(rolledDiceArray[0]);

using namespace std;

int diceRoller()
{
	random_device device;
	default_random_engine generator(device());
	uniform_int_distribution<int> dist(1, 6);

	rolledNumber = dist(generator);
	

	//for each index in rolledDiceArray genrate a random number and assign it to current index
	/*for (int i = 0; i < 6; i++)
	{

		rolledNumber = dist(generator);
		rolledDiceArray[i] =  rolledNumber;

	}*/

	//sorts array from low to high
	/*sort(rolledDiceArray, rolledDiceArray + sortArray)*/;

	//print out each index of array rolledDiceArray
	/*for (auto i : rolledDiceArray) {
		cout << i << ", ";
	}*/


	return rolledNumber;
}


