#include "warriorArmorStore.h"

void WarriorArmorStore::Show() {
	cout << "�ջ��Z�ҡA��O500���A�����O70" << endl;
	cout << "�����Z�ҡA��O1000���A�����O130" << endl;
	cout << "�ժ��Z�ҡA��O1800���A�����O220" << endl;
	cout << "�p���Z�ҡA��O3000���A�����O350" << endl;
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