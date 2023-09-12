#include "warriorWeaponStore.h"

void WarriorWeaponStore::Show() {
	cout << "1. 白銀巨劍，花費500元，攻擊力70" << endl;
	cout << "2. 黃金巨劍，花費1000元，攻擊力130" << endl;
	cout << "3. 白金巨劍，花費1800元，攻擊力220" << endl;
	cout << "4. 鑽石巨劍，花費3000元，攻擊力350" << endl;
}

std::string WarriorWeaponStore::GetInfo(){
	std::string info = "";
	info += "1. 白銀巨劍，花費500元，攻擊力70\n";
	info += "2. 黃金巨劍，花費1000元，攻擊力130\n";
	info += "3. 白金巨劍，花費1800元，攻擊力220\n";
	info += "4. 鑽石巨劍，花費3000元，攻擊力350\n";
	return info;
}

WeaponLib::Weapon* WarriorWeaponStore::CreateWeapon(int num) {
	WeaponLib::Weapon* weapon;
	weapon = nullptr;
	if (num == 1) {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON1);
	}
	else if (num == 2) {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON2);
	}
	else if (num == 3) {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON3);
	}
	else if (num == 4) {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON4);
	}
	return weapon;
}