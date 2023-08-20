#pragma once

#include "weapon.h"

// Interface
class WeaponStore {
public:
	virtual void Show() = 0;
	virtual WeaponLib::Weapon* CreateWeapon(std::string weaponName) = 0;
};
