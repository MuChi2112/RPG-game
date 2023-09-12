#pragma once

#include "armor.h"

// Interface
class ArmorStore {
public:
	virtual void Show() = 0;
	virtual ArmorLib::Armor* CreateArmor(int num) = 0;
	virtual std::string GetInfo() = 0;
};
