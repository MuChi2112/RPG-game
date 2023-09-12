#pragma once
#pragma once

#include "weaponStore.h"

#include <iostream>

#include "monsterWeapon.h"

class MonsterWeaponStore : public WeaponStore {
public:

	virtual void Show() override;
	virtual std::string GetInfo() override;
	virtual WeaponLib::Weapon* CreateWeapon(int num) override;
};
