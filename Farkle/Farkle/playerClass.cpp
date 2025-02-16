#include "playerClass.h"
#include <string>

using namespace std;

class player {
private:

	int p_score;

public:
	player() 
	{
	}
	
	void SetScore(int& score)
	{
		p_score = score;
	}

	const int GetScore() const
	{
		return p_score;
	}
};