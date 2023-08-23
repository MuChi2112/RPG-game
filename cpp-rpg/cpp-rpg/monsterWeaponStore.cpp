#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "白銀靈刀，花費500元，攻擊力70" << endl;
	cout << "黃金靈刀，花費1000元，攻擊力130" << endl;
	cout << "白金靈刀，花費1800元，攻擊力220" << endl;
	cout << "鑽石靈刀，花費3000元，攻擊力350" << endl;
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