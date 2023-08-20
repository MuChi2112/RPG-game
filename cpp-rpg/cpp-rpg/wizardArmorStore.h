#pragma once

#include "armorStore.h"

#include <iostream>

#include "wizardArmor.h"

class WizardArmorStore : public ArmorStore {
public:

	virtual void Show() override;

	virtual ArmorLib::Armor* CreateArmor(std::string armorName) override;
};
