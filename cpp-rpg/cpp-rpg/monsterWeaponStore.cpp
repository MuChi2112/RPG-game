#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "�ջ��F�M�A��O500���A�����O70" << endl;
	cout << "�����F�M�A��O1000���A�����O130" << endl;
	cout << "�ժ��F�M�A��O1800���A�����O220" << endl;
	cout << "�p���F�M�A��O3000���A�����O350" << endl;
}

WeaponLib::Weapon* MonsterWeaponStore::CreateWeapon(int num) {
	WeaponLib::Weapon* weapon;
	weapon = nullptr;
	if ( num == 1) {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON1);
	}
	else if ( num == 2) {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON2);
	}
	else if ( num == 3) {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON3);
	}
	else if (num == 4) {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON4);
	}
	return weapon;
}