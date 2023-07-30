#pragma once

#include "weaponStore.h"

#include <iostream>

#include "warriorWeapon.h"

class WarriorWeaponStore: public WeaponStore{
public:
	
	virtual void Show() override {
		cout << "白銀巨劍，花費500元，攻擊力70"<<endl;
		cout << "黃金巨劍，花費1000元，攻擊力130" << endl;
		cout << "白金巨劍，花費1800元，攻擊力220" << endl;
		cout << "鑽石巨劍，花費3000元，攻擊力350" << endl;
	}

	virtual WeaponLib::Weapon* CreateWeapon(std::string weaponName) override {
		WeaponLib::Weapon* weapon;
		if (weaponName == "白銀巨劍") {
			 weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON1);
		}
		else if (weaponName == "黃金巨劍") {
			weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON2);
		}
		else if (weaponName == "白金巨劍") {
			weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON3);
		}
		else if (weaponName == "鑽石巨劍") {
			weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON4);
		}
		return weapon;
	}
};
