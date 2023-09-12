#pragma once

#include "weapon.h"

// Interface
class WeaponStore {
public:
	virtual void Show() = 0;
	virtual WeaponLib::Weapon* CreateWeapon(int weaponName) = 0;
	virtual std::string GetInfo() = 0;
};
