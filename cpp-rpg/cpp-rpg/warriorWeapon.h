#pragma once
#include "weapon.h"
#include <map>

namespace WeaponLib{
enum class WarriorWeaponCollection {
    WEAPON1,
    WEAPON2,
    WEAPON3,
    WEAPON4,
};


class WarriorWeapon :public Weapon {
public:
    WarriorWeapon(WarriorWeaponCollection warriorWeaponCollection);
};
}
