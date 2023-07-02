#include "warriorWeapon.h"

std::map<WarriorWeaponCollection, WeaponElement> WarriorWeaponsMap{
    {WarriorWeaponCollection::WEAPON1, {500, 70, "巨劍", "白銀"}},
    {WarriorWeaponCollection::WEAPON2, {1000, 130, "巨劍", "黃金"}},
    {WarriorWeaponCollection::WEAPON3, {1800, 220, "巨劍", "白金"}},
    {WarriorWeaponCollection::WEAPON4, {3000, 350, "巨劍", "鑽石"}},
};

	WarriorWeapon::WarriorWeapon(WarriorWeaponCollection collection)
    :Weapon(WarriorWeaponsMap[collection]){
        
    }


