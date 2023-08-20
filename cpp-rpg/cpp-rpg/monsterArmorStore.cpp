#include "monsterArmorStore.h"

void MonsterArmorStore::Show() {
	cout << "�ջ���ҡA��O500���A�����O70" << endl;
	cout << "������ҡA��O1000���A�����O130" << endl;
	cout << "�ժ���ҡA��O1800���A�����O220" << endl;
	cout << "�p����ҡA��O3000���A�����O350" << endl;
}

ArmorLib::Armor* MonsterArmorStore::CreateArmor(std::string armorName) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (armorName == "�ջ����") {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor1);
	}
	else if (armorName == "�������") {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor2);
	}
	else if (armorName == "�ժ����") {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor3);
	}
	else if (armorName == "�p�����") {
		armor = new ArmorLib::MonsterArmor(ArmorLib::MonsterArmorCollection::Armor4);
	}
	return armor;
}