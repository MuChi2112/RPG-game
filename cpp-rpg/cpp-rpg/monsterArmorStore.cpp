#include "monsterArmorStore.h"

void MonsterArmorStore::Show() {
	cout << "�ջ���ҡA��O500���A�����O70" << endl;
	cout << "������ҡA��O1000���A�����O130" << endl;
	cout << "�ժ���ҡA��O1800���A�����O220" << endl;
	cout << "�p����ҡA��O3000���A�����O350" << endl;
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