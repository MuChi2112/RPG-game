#pragma once

#include "weaponStore.h"

#include <iostream>

#include "warriorWeapon.h"

class WarriorWeaponStore : public WeaponStore {
public:

	virtual void Show() override;
	virtual std::string GetInfo() override;
	virtual WeaponLib::Weapon* CreateWeapon(int num) override;
};
