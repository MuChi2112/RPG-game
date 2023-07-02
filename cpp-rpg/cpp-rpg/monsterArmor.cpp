#include "monsterArmor.h"

using namespace ArmorLib;

std::map<MonsterArmorCollection, ArmorElement> MonsterArmorMap{
	{MonsterArmorCollection::Armor1, { 500, 70, "護甲", "白銀" }},
	{ MonsterArmorCollection::Armor2, {1000, 130, "護甲", "黃金"} },
	{ MonsterArmorCollection::Armor3, {1800, 220, "護甲", "白金"} },
	{ MonsterArmorCollection::Armor4, {3000, 350, "護甲", "鑽石"} },
};

MonsterArmor::MonsterArmor(MonsterArmorCollection collection)
	:Armor(MonsterArmorMap[collection]) {
}