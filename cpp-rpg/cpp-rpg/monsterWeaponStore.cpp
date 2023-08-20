#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "白銀靈刀，花費500元，攻擊力70" << endl;
	cout << "黃金靈刀，花費1000元，攻擊力130" << endl;
	cout << "白金靈刀，花費1800元，攻擊力220" << endl;
	cout << "鑽石靈刀，花費3000元，攻擊力350" << endl;
}

WeaponLib::Weapon* MonsterWeaponStore::CreateWeapon(std::string weaponName) {
	WeaponLib::Weapon* weapon;
	weapon = nullptr;
	if (weaponName == "白銀靈刀") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON1);
	}
	else if (weaponName == "黃金靈刀") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON2);
	}
	else if (weaponName == "白金靈刀") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON3);
	}
	else if (weaponName == "鑽石靈刀") {
		weapon = new WeaponLib::MonsterWeapon(WeaponLib::MonsterWeaponCollection::WEAPON4);
	}
	return weapon;
}