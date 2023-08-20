#include "warriorWeaponStore.h"

void WarriorWeaponStore::Show() {
	cout << "�ջȥ��C�A��O500���A�����O70" << endl;
	cout << "�������C�A��O1000���A�����O130" << endl;
	cout << "�ժ����C�A��O1800���A�����O220" << endl;
	cout << "�p�ۥ��C�A��O3000���A�����O350" << endl;
}

WeaponLib::Weapon* WarriorWeaponStore::CreateWeapon(std::string weaponName) {
	WeaponLib::Weapon* weapon;
	weapon = nullptr;
	if (weaponName == "�ջȥ��C") {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON1);
	}
	else if (weaponName == "�������C") {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON2);
	}
	else if (weaponName == "�ժ����C") {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON3);
	}
	else if (weaponName == "�p�ۥ��C") {
		weapon = new WeaponLib::WarriorWeapon(WeaponLib::WarriorWeaponCollection::WEAPON4);
	}
	return weapon;
}