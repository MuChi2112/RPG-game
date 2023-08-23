#include "monsterArmorStore.h"

void MonsterArmorStore::Show() {
	cout << "白銀鱗甲，花費500元，攻擊力70" << endl;
	cout << "黃金鱗甲，花費1000元，攻擊力130" << endl;
	cout << "白金鱗甲，花費1800元，攻擊力220" << endl;
	cout << "鑽石鱗甲，花費3000元，攻擊力350" << endl;
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