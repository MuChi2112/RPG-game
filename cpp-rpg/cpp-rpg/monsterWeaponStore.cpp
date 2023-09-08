#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "白銀槌子，花費1000元，攻擊力140" << endl;
	cout << "黃金槌子，花費1500元，攻擊力260" << endl;
	cout << "白金槌子，花費2000元，攻擊力440" << endl;
	cout << "鑽石槌子，花費4000元，攻擊力700" << endl;
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