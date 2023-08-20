#pragma once

#include "armor.h"

// Interface
class ArmorStore {
public:
	virtual void Show() = 0;
	virtual ArmorLib::Armor* CreateArmor(std::string armorName) = 0;
};
