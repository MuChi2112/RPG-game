#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "�ջ��F�M�A��O500���A�����O70" << endl;
	cout << "�����F�M�A��O1000���A�����O130" << endl;
	cout << "�ժ��F�M�A��O1800���A�����O220" << endl;
	cout << "�p���F�M�A��O3000���A�����O350" << endl;
}

WeaponLib::Weapon* MonsterWeaponStore::CreateWeapon(std::string weaponName) {
	WeaponLib::Weapon* weapon;
	weapon = nullptr;
	if (weaponName == "�ջ��F�M") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON1);
	}
	else if (weaponName == "�����F�M") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON2);
	}
	else if (weaponName == "�ժ��F�M") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON3);
	}
	else if (weaponName == "�p���F�M") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON4);
	}
	return weapon;
}