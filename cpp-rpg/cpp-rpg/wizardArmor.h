#pragma once
#include "armor.h"
#include <map>

enum class WizardArmorCollection{
    Armor1,
    Armor2,
    Armor3,
    Armor4,
};


class WizardArmor :public Armor {
public:
    WizardArmor(WizardArmorCollection wizardArmorCollection);
};
