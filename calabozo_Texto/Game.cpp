#include "pch.h"
#include "Game.h"


Game::Game()
{
	choice = 0;
	playing = true;
	activeCharacter = 0;
	fileName = "characters.txt";
}


Game::~Game()
{
}

// Functions

void Game::initGame() {
	createNewCharacter();
	Puzzle p("lel.txt");
	std::cout << p.getAsString() << "\n";
}

void Game::mainMenu()
{
	cout << "MAIN MENU" << endl << endl;

	cout << "0: quit" << endl;
	cout << "1: travel" << endl;
	cout << "2: shop" << endl;
	cout << "3: level up" << endl;
	cout << "4: rest" << endl;
	cout << "5: Character sheet" << endl;
	cout << "6: Create new character" << endl;
	cout << "7: Save character" << endl;
	cout << "8: Load character" << endl;
	cout << endl;

	cout << endl << "Choice: ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 0:
		playing = false;
		break;

	case 5:
		characters[activeCharacter].printStats();
		break;
	case 6:
		cin.ignore();
		createNewCharacter();
		saveCharacter();
		break;
	case 7:
		saveCharacter();
		break;
	case 8:
		loadCharacter();
		break;
	default:
		break;
	}
}

void Game::createNewCharacter()
{
	string name;
	cout << "Enter name for character: ";
	std::getline(cin, name);

	characters.push_back(Character());
	activeCharacter = characters.size() - 1;
	characters[activeCharacter].initialize(name);
}

void Game::saveCharacter()
{
	ofstream outFile(fileName);

	if (outFile.is_open()) {
		for (size_t i = 0; i < characters.size(); i++)
		{
			outFile << characters[i].getAsString() << "\n";
		}
	}

	outFile.close();
}

void Game::loadCharacter()
{

}

void Game::travel()
{
	this->characters[activeCharacter].travel();

	Event ev;

	ev.generateEvent(this->characters[activeCharacter]);
}