#pragma once

#include "monster.h"
#include "warrior.h"
#include "wizzard.h"

class CharacterFactory{
public:

	static CharacterLib::Character* createChacracter(CharacterLib::CharacterElemnt element);


private:
};
