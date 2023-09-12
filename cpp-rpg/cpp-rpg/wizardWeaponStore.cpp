#include "wizardWeaponStore.h"

void WizardWeaponStore::Show() {
	cout << "1. 白銀法杖，花費500元，攻擊力200" << endl;
	cout << "2. 黃金法杖，花費1000元，攻擊力300" << endl;
	cout << "3. 白金法杖，花費1800元，攻擊力500" << endl;
	cout << "4. 鑽石法杖，花費3000元，攻擊力1000" << endl;
}

std::string WizardWeaponStore::GetInfo() {
	std::string info = "";
	info += "1. 白銀法杖，花費500元，攻擊力200\n";
	info += "2. 黃金法杖，花費1000元，攻擊力300\n";
	info += "3. 白金法杖，花費1800元，攻擊力500\n";
	info += "4. 鑽石法杖，花費3000元，攻擊力1000\n";
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