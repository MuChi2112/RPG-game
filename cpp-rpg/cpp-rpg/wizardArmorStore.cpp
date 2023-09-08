#include "wizardArmorStore.h"

void WizardArmorStore::Show() {
	cout << "�ջȭ����A��O500���A���m�O50" << endl;
	cout << "���������A��O1000���A���m�O100" << endl;
	cout << "�ժ������A��O1800���A���m�O200" << endl;
	cout << "�p�ۭ����A��O3000���A���m�O250" << endl;
}

ArmorLib::Armor* WizardArmorStore::CreateArmor(int num) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (num == 1) {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor1);
	}
	else if (num == 2) {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor2);
	}
	else if (num == 3) {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor3);
	}
	else if (num == 4) {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor4);
	}
	return armor;
}