#include <iostream>
#include "warriorWeapon.h"
#include "characterFactory.h"


using namespace std;

int main() {
	WeaponLib::WarriorWeapon weapon(WeaponLib::WarriorWeaponCollection::WEAPON1);
	auto character = CharacterFactory::createChacracter(CharacterLib::CharacterElemnt::Wizrd);

}