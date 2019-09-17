#pragma once
#include "Character.h"
#include <ctime>
#include "Includes.h"
#include <vector>
#include "Event.h"

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	//Operator


	// Functions
	void initGame();
	void mainMenu();
	void createNewCharacter();
	void saveCharacter();
	void loadCharacter();
	void travel();

	// Accesors
	bool getPlaying() const { return this->playing; }

	// Modifiers

private:
	int choice;
	bool playing;

	// Character related
	int activeCharacter;
	std::vector<Character> characters;
	std::string fileName;
};

