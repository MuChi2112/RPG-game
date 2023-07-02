#pragma once
#include "weapon.h"
#include <map>

enum class MonsterWeaponCollection{
    WEAPON1,
    WEAPON2,
    WEAPON3,
    WEAPON4,
};


class MonsterWeapon:public Weapon{
public:
    MonsterWeapon(MonsterWeaponCollection monsterWeaponCollection);
};
 
