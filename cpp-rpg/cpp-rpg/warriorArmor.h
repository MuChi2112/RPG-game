#pragma once
#include "armor.h"
#include <map>

namespace ArmorLib {
	enum class WarriorArmorCollection {
		Armor1,
		Armor2,
		Armor3,
		Armor4
	};

	class WarriorArmor :public Armor {
	public:
		WarriorArmor(WarriorArmorCollection warriorArmorCollection);
	};
}
