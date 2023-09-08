#include "monsterArmorStore.h"

void MonsterArmorStore::Show() {
	cout << "�ջ���ҡA��O1000���A���m�O140" << endl;
	cout << "������ҡA��O1500���A���m�O260" << endl;
	cout << "�ժ���ҡA��O2000���A���m�O440" << endl;
	cout << "�p����ҡA��O4000���A���m�O700" << endl;
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