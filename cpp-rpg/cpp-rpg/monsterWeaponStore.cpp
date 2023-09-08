#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "�ջȺl�l�A��O1000���A�����O140" << endl;
	cout << "�����l�l�A��O1500���A�����O260" << endl;
	cout << "�ժ��l�l�A��O2000���A�����O440" << endl;
	cout << "�p�ۺl�l�A��O4000���A�����O700" << endl;
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