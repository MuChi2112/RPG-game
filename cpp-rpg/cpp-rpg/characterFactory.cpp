#include "characterFactory.h"


CharacterLib::Character* CharacterFactory::createChacracter(CharacterLib::CharacterElemnt element) {
	
	CharacterLib::Character* character;
	if (element == CharacterLib::CharacterElemnt::Monster) {
		 character = new CharacterLib::Monster();
	}
	else if (element == CharacterLib::CharacterElemnt::Warrior) {
		character = new CharacterLib::Wizzard();
	}
	else {
		character = new CharacterLib::Warrior();
	}
	return character;
}
