#pragma once
#pragma once

#include "weaponStore.h"

#include <iostream>

#include "monsterWeapon.h"

class MonsterWeaponStore : public WeaponStore {
public:

	virtual void Show() override;

	virtual WeaponLib::Weapon* CreateWeapon(int num) override;
};
