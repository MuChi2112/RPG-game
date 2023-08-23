#pragma once

#include "armorStore.h"

#include <iostream>

#include "monsterArmor.h"

class MonsterArmorStore : public ArmorStore {
public:

	virtual void Show() override;

	virtual ArmorLib::Armor* CreateArmor(int num) override;
};
