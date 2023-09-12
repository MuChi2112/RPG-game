#include "wizardWeaponStore.h"

void WizardWeaponStore::Show() {
	cout << "1. �ջȪk���A��O500���A�����O200" << endl;
	cout << "2. �����k���A��O1000���A�����O300" << endl;
	cout << "3. �ժ��k���A��O1800���A�����O500" << endl;
	cout << "4. �p�۪k���A��O3000���A�����O1000" << endl;
}

std::string WizardWeaponStore::GetInfo() {
	std::string info = "";
	info += "1. �ջȪk���A��O500���A�����O200\n";
	info += "2. �����k���A��O1000���A�����O300\n";
	info += "3. �ժ��k���A��O1800���A�����O500\n";
	info += "4. �p�۪k���A��O3000���A�����O1000\n";
	return info;
}

WeaponLib::Weapon* WizardWeaponStore::CreateWeapon(int num) {
	WeaponLib::Weapon* weapon;
	weapon = nullptr;
	if (num == 1) {
		weapon = new WeaponLib::WizardWeapon(WeaponLib::WizardWeaponCollection::WEAPON1);
	}
	else if (num == 2) {
		weapon = new WeaponLib::WizardWeapon(WeaponLib::WizardWeaponCollection::WEAPON2);
	}
	else if (num == 3) {
		weapon = new WeaponLib::WizardWeapon(WeaponLib::WizardWeaponCollection::WEAPON3);
	}
	else if (num == 4) {
		weapon = new WeaponLib::WizardWeapon(WeaponLib::WizardWeaponCollection::WEAPON4);
	}
	return weapon;
}