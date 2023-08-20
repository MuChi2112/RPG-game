#include "wizardArmorStore.h"

void WizardArmorStore::Show() {
	cout << "�ջȭ����A��O500���A�����O70" << endl;
	cout << "���������A��O1000���A�����O130" << endl;
	cout << "�ժ������A��O1800���A�����O220" << endl;
	cout << "�p�ۭ����A��O3000���A�����O350" << endl;
}

ArmorLib::Armor* WizardArmorStore::CreateArmor(std::string armorName) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (armorName == "�ջȭ���") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor1);
	}
	else if (armorName == "��������") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor2);
	}
	else if (armorName == "�ժ�����") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor3);
	}
	else if (armorName == "�p�ۭ���") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor4);
	}
	return armor;
}