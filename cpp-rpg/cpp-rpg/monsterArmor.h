#pragma once
#include "armor.h"
#include <map>

namespace ArmorLib {
	enum class MonsterArmorCollection {
		Armor1,
		Armor2,
		Armor3,
		Armor4
	};

	class MonsterArmor :public Armor {
	public:
		MonsterArmor(MonsterArmorCollection monsterArmorCollection);
	};
}