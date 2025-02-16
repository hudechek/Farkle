#pragma once

#include <iostream>
#include <string>

using namespace std;

class playerClass
{
private:

	int p_score = 0;
	string p_name;

public:
	playerClass()
	{
	}

	void SetName(string& name)
	{
		p_name = name;
	}

	const string GetName() const 
	{
		return p_name;
	}

	void SetScore(int& score)
	{
		p_score = score;
	}

	inline const int GetScore() const
	{
		return p_score;
	}
};

