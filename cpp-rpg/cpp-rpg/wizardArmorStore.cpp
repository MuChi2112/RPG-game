#include "wizardArmorStore.h"

void WizardArmorStore::Show() {
	cout << "1. 白銀面紗，花費500元，防禦力50" << endl;
	cout << "2. 黃金面紗，花費1000元，防禦力100" << endl;
	cout << "3. 白金面紗，花費1800元，防禦力200" << endl;
	cout << "4. 鑽石面紗，花費3000元，防禦力250" << endl;
}

std::string WizardArmorStore::GetInfo() {
	std::string info = "";
	info += "1. 白銀面紗，花費500元，防禦力50\n";
	info += "2. 黃金面紗，花費1000元，防禦力100\n";
	info += "3. 白金面紗，花費1800元，防禦力200\n";
	info += "4. 鑽石面紗，花費3000元，防禦力250\n";
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