#include "monsterArmorStore.h"

void MonsterArmorStore::Show() {
	cout << "1. 白銀鱗甲，花費1000元，防禦力140" << endl;
	cout << "2. 黃金鱗甲，花費1500元，防禦力260" << endl;
	cout << "3. 白金鱗甲，花費2000元，防禦力440" << endl;
	cout << "4. 鑽石鱗甲，花費4000元，防禦力700" << endl;
}

std::string MonsterArmorStore::GetInfo() {
	std::string info = "";
	info += "1. 白銀鱗甲，花費1000元，防禦力140\n";
	info += "2. 黃金鱗甲，花費1500元，防禦力260\n";
	info += "3. 白金鱗甲，花費2000元，防禦力440\n";
	info += "4. 鑽石鱗甲，花費4000元，防禦力700\n";
	return info;
}

ArmorLib::Armor* MonsterArmorStore::CreateArmor(int num) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (num ==1) {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor1);
	}
	else if ( num == 2) {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor2);
	}
	else if ( num == 3) {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor3);
	}
	else if (num == 4) {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor4);
	}
	return armor;
}