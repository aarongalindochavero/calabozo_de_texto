#include "pch.h"
#include "Event.h"


Event::Event()
{
	this->nrOffEvents = 2;
}


Event::~Event()
{
}

void Event::generateEvent(Character &character)
{
	int i = rand() % this->nrOffEvents + 1;
	switch (i)
	{
	case 0:
		enemyEncounter(character);
		break;
	case 1:
		break;
	case 2:
		break;
	default:
		break;
	}
}

void Event::enemyEncounter(Character & character)
{
}

void Event::puzzleEncounter(Character & character)
{

}
