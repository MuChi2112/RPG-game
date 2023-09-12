#include "wizardArmorStore.h"

void WizardArmorStore::Show() {
	cout << "1. �ջȭ����A��O500���A���m�O50" << endl;
	cout << "2. ���������A��O1000���A���m�O100" << endl;
	cout << "3. �ժ������A��O1800���A���m�O200" << endl;
	cout << "4. �p�ۭ����A��O3000���A���m�O250" << endl;
}

std::string WizardArmorStore::GetInfo() {
	std::string info = "";
	info += "1. �ջȭ����A��O500���A���m�O50\n";
	info += "2. ���������A��O1000���A���m�O100\n";
	info += "3. �ժ������A��O1800���A���m�O200\n";
	info += "4. �p�ۭ����A��O3000���A���m�O250\n";
	return info;
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