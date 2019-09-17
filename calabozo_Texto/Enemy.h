#pragma once
#include<stdlib.h>
#include <string>

class Enemy
{
private:
	int level;
	int hp;
	int hpMax;
	int damageMin;
	float damageMax;
	float dropChance;
	int defense;
	int accuracy;
public:
	Enemy();
	Enemy(int level = 0);
	virtual ~Enemy();

	inline bool isAlive() { return this->hp > 0; }
	std::string getAsString()const;
	inline void takeDamage(int damage) { this->hp -= damage; }
	inline int getDamage()const { return rand() % (int)this->damageMax - this->damageMin; }
	inline int getExp()const { return this->level * 100; }
};

