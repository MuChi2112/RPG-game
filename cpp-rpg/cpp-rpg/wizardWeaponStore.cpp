#include "wizardWeaponStore.h"

void WizardWeaponStore::Show() {
	cout << "白銀法杖，花費500元，攻擊力70" << endl;
	cout << "黃金法杖，花費1000元，攻擊力130" << endl;
	cout << "白金法杖，花費1800元，攻擊力220" << endl;
	cout << "鑽石法杖，花費3000元，攻擊力350" << endl;
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