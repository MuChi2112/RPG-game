#pragma once

#include "monster.h"
#include "warrior.h"
#include "wizard.h"

class CharacterFactory {
public:

	static CharacterLib::Character* createChacracter(int characterNum);

private:
};
