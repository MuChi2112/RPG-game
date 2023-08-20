#include "warriorArmorStore.h"

void WarriorArmorStore::Show() {
	cout << "�ջ��Z�ҡA��O500���A�����O70" << endl;
	cout << "�����Z�ҡA��O1000���A�����O130" << endl;
	cout << "�ժ��Z�ҡA��O1800���A�����O220" << endl;
	cout << "�p���Z�ҡA��O3000���A�����O350" << endl;
}

ArmorLib::Armor* WarriorArmorStore::CreateArmor(std::string armorName) {
	ArmorLib::Armor* armor;
	armor = nullptr;
	if (armorName == "�ջ��Z��") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor1);
	}
	else if (armorName == "�����Z��") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor2);
	}
	else if (armorName == "�ժ��Z��") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor3);
	}
	else if (armorName == "�p���Z��") {
		armor = new ArmorLib::WarriorArmor(ArmorLib::WarriorArmorCollection::Armor4);
	}
	return armor;
}