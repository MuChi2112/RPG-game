#include "wizardArmorStore.h"

void WizardArmorStore::Show() {
	cout << "白銀面紗，花費500元，攻擊力70" << endl;
	cout << "黃金面紗，花費1000元，攻擊力130" << endl;
	cout << "白金面紗，花費1800元，攻擊力220" << endl;
	cout << "鑽石面紗，花費3000元，攻擊力350" << endl;
}

ArmorLib::Armor* WizardArmorStore::CreateArmor(std::string armorName) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (armorName == "白銀面紗") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor1);
	}
	else if (armorName == "黃金面紗") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor2);
	}
	else if (armorName == "白金面紗") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor3);
	}
	else if (armorName == "鑽石面紗") {
		armor = new ArmorLib::WizardArmor(ArmorLib::WizardArmorCollection::Armor4);
	}
	return armor;
}