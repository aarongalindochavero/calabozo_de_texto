#pragma once
#include <string>
#include <vector>
class Puzzle
{
private:
	std::string question;
	std::vector<std::string> answers;
	int correctAnswer;

public:
	Puzzle();
	virtual ~Puzzle();
};

