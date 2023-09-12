#include "monsterWeaponStore.h"

void MonsterWeaponStore::Show() {
	cout << "1. �ջȺl�l�A��O1000���A�����O140" << endl;
	cout << "2. �����l�l�A��O1500���A�����O260" << endl;
	cout << "3. �ժ��l�l�A��O2000���A�����O440" << endl;
	cout << "4. �p�ۺl�l�A��O4000���A�����O700" << endl;
}

std::string MonsterWeaponStore::GetInfo() {
	std::string info = "";
	info += "1. �ջȺl�l�A��O1000���A�����O140\n";
	info += "2. �����l�l�A��O1500���A�����O260\n";
	info += "3. �ժ��l�l�A��O2000���A�����O440\n";
	info += "4. �p�ۺl�l�A��O4000���A�����O700\n";
	return info;
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