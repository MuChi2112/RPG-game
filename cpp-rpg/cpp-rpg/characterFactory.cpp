#include "characterFactory.h"

CharacterLib::Character* CharacterFactory::createChacracter(int characterNum) {
	CharacterLib::Character* character;
	if (characterNum == 1) {
		character = new CharacterLib::Warrior();
		character->SetName("Warrior");
	}
	else if (characterNum == 2) {
		character = new CharacterLib::Wizard();
		character->SetName("Wizard");
	}
	else {
		character = new CharacterLib::Monster();
		character->SetName("Monster");
	}
	return character;
}