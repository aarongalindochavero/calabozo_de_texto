#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class Puzzle
{
private:
	std::string question;
	std::vector<std::string> answers;
	int correctAnswer;

public:
	Puzzle();
	Puzzle(std::string fileName);
	virtual ~Puzzle();
	std::string getAsString();
};

