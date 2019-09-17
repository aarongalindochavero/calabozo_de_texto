#include "pch.h"
#include "Enemy.h"


Enemy::Enemy()
{
}

Enemy::Enemy(int level)
{
	this->level = level;
	this->hpMax = level * 10;
	this->hp = this->hpMax;
	this->damageMin = this->level * 4;
	this->damageMax = this->level * 5;
	this->dropChance = rand() % 100;
	this->defense = rand() % 100;
	this->accuracy = rand() % 100;
}


Enemy::~Enemy()
{
}

std::string Enemy::getAsString() const
{
	return "Level: " + std::to_string(this->level) + "\n" +
		"Hp: " + std::to_string(this->hp) + "\n" + "/" + std::to_string(this->hpMax) + "\n" +
		"Damage: " + std::to_string(this->damageMin) + "\n" + "-" + std::to_string(this->damageMax) + "\n" +
		"Defense: " + std::to_string(this->defense) + "\n" +
		"Accuracy: " + std::to_string(this->accuracy) + "\n" +
		"Drop chance: " + std::to_string(this->dropChance) + "\n";
}
