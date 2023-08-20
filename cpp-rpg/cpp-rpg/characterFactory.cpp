#include "characterFactory.h"

CharacterLib::Character* CharacterFactory::createChacracter(int characterNum) {
	CharacterLib::Character* character;
	if (characterNum == 1) {
		character = new CharacterLib::Warrior();
	}
	else if (characterNum == 2) {
		character = new CharacterLib::Wizard();
	}
	else {
		character = new CharacterLib::Monster();
	}
	return character;
}