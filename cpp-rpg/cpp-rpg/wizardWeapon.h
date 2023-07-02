#pragma once
#include "weapon.h"
#include <map>

namespace WeaponLib {
    enum class WizardWeaponCollection {
        WEAPON1,
        WEAPON2,
        WEAPON3,
        WEAPON4,
    };


    class WizardWeapon :public Weapon {
    public:
        WizardWeapon(WizardWeaponCollection wizardWeaponCollection);
    };
}
