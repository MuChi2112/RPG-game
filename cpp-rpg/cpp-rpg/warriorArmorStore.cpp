#include "warriorArmorStore.h"

void WarriorArmorStore::Show() {
	cout << "白銀鎧甲，花費500元，攻擊力70" << endl;
	cout << "黃金鎧甲，花費1000元，攻擊力130" << endl;
	cout << "白金鎧甲，花費1800元，攻擊力220" << endl;
	cout << "鑽石鎧甲，花費3000元，攻擊力350" << endl;
}

ArmorLib::Armor* WarriorArmorStore::CreateArmor(std::string armorName) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (armorName == "白銀鎧甲") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor1);
	}
	else if (armorName == "黃金鎧甲") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor2);
	}
	else if (armorName == "白金鎧甲") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor3);
	}
	else if (armorName == "鑽石鎧甲") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor4);
	}
	return armor;
}