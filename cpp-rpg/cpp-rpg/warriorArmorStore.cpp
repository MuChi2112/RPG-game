#include "warriorArmorStore.h"

void WarriorArmorStore::Show() {
	cout << "1, �ջ��Z�ҡA��O500���A���m�O70" << endl;
	cout << "2. �����Z�ҡA��O1000���A���m�O130" << endl;
	cout << "3. �ժ��Z�ҡA��O1800���A���m�O220" << endl;
	cout << "4. �p���Z�ҡA��O3000���A���m�O350" << endl;
}

std::string WarriorArmorStore::GetInfo() {
	std::string info = "";
	info += "1. �ջ��Z�ҡA��O500���A���m�O70\n";
	info += "2. �����Z�ҡA��O1000���A���m�O130\n";
	info += "3. �ժ��Z�ҡA��O1800���A���m�O220\n";
	info += "4. �p���Z�ҡA��O3000���A���m�O350\n";
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