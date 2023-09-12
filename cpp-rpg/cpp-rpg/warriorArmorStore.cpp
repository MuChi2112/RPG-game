#include "warriorArmorStore.h"

void WarriorArmorStore::Show() {
	cout << "1, 白銀鎧甲，花費500元，防禦力70" << endl;
	cout << "2. 黃金鎧甲，花費1000元，防禦力130" << endl;
	cout << "3. 白金鎧甲，花費1800元，防禦力220" << endl;
	cout << "4. 鑽石鎧甲，花費3000元，防禦力350" << endl;
}

std::string WarriorArmorStore::GetInfo() {
	std::string info = "";
	info += "1. 白銀鎧甲，花費500元，防禦力70\n";
	info += "2. 黃金鎧甲，花費1000元，防禦力130\n";
	info += "3. 白金鎧甲，花費1800元，防禦力220\n";
	info += "4. 鑽石鎧甲，花費3000元，防禦力350\n";
	return info;
}

ArmorLib::Armor* WarriorArmorStore::CreateArmor(int num) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (num == 1) {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor1);
	}
	else if (num == 2) {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor2);
	}
	else if (num == 3) {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor3);
	}
	else if (num == 4) {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor4);
	}
	return armor;
}