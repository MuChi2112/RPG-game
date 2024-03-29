#include "warriorArmor.h"

using namespace ArmorLib;

std::map<WarriorArmorCollection, ArmorElement> WarriorArmorMap{
	{WarriorArmorCollection::Armor1, { 500, 70, "鎧甲", "白銀" }},
	{ WarriorArmorCollection::Armor2, {1000, 130, "鎧甲", "黃金"} },
	{ WarriorArmorCollection::Armor3, {1800, 220, "鎧甲", "白金"} },
	{ WarriorArmorCollection::Armor4, {3000, 350, "鎧甲", "鑽石"} },
};

WarriorArmor::WarriorArmor(WarriorArmorCollection collection)
	:Armor(WarriorArmorMap[collection]) {
}