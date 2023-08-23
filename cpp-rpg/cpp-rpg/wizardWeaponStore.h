#pragma once
#pragma once

#include "weaponStore.h"

#include <iostream>

#include "wizardWeapon.h"

class WizardWeaponStore : public WeaponStore {
public:

	virtual void Show() override;

	virtual WeaponLib::Weapon* CreateWeapon(int num) override;
};
