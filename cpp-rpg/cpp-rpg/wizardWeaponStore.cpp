#include "wizardWeaponStore.h"

void WizardWeaponStore::Show() {
	cout << "�ջȪk���A��O500���A�����O70" << endl;
	cout << "�����k���A��O1000���A�����O130" << endl;
	cout << "�ժ��k���A��O1800���A�����O220" << endl;
	cout << "�p�۪k���A��O3000���A�����O350" << endl;
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