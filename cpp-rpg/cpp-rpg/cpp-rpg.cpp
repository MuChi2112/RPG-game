#include <iostream>
#include "warriorWeaponStore.h"
#include "characterFactory.h"


using namespace std;

int main() {
	//WeaponLib::WarriorWeapon weapon1(WeaponLib::WarriorWeaponCollection::WEAPON1);
	//WeaponLib::Weapon* weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON1);
	//CharacterLib::Character* character = CharacterFactory::createChacracter(CharacterLib::CharacterElemnt::Wizrd);
	 
	WeaponStore* store = new WarriorWeaponStore();
	auto weapon = store->CreateWeapon("白金巨劍");


}

