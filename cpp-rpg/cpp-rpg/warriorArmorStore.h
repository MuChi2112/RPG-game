#pragma once

#include "armorStore.h"

#include <iostream>

#include "warriorArmor.h"

class WarriorArmorStore : public ArmorStore {
public:

	virtual void Show() override;

	virtual ArmorLib::Armor* CreateArmor(int num) override;
};
