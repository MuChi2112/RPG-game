#include "monsterArmor.h"

using namespace ArmorLib;

std::map<MonsterArmorCollection, ArmorElement> MonsterArmorMap{
	{MonsterArmorCollection::Armor1, { 1000, 140, "鱗甲", "白銀" }},
	{ MonsterArmorCollection::Armor2, {1500, 260, "鱗甲", "黃金"} },
	{ MonsterArmorCollection::Armor3, {2000, 440, "鱗甲", "白金"} },
	{ MonsterArmorCollection::Armor4, {4000, 700, "鱗甲", "鑽石"} },
};

MonsterArmor::MonsterArmor(MonsterArmorCollection collection)
	:Armor(MonsterArmorMap[collection]) {
}