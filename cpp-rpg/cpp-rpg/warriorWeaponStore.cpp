#include "warriorWeaponStore.h"

void WarriorWeaponStore::Show() {
	cout << "1. �ջȥ��C�A��O500���A�����O70" << endl;
	cout << "2. �������C�A��O1000���A�����O130" << endl;
	cout << "3. �ժ����C�A��O1800���A�����O220" << endl;
	cout << "4. �p�ۥ��C�A��O3000���A�����O350" << endl;
}

std::string WarriorWeaponStore::GetInfo(){
	std::string info = "";
	info += "1. �ջȥ��C�A��O500���A�����O70\n";
	info += "2. �������C�A��O1000���A�����O130\n";
	info += "3. �ժ����C�A��O1800���A�����O220\n";
	info += "4. �p�ۥ��C�A��O3000���A�����O350\n";
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