#include "warriorWeapon.h"

#include <iostream>

using namespace WeaponLib;

std::map<WarriorWeaponCollection, WeaponElement> WarriorWeaponsMap{
    {WarriorWeaponCollection::WEAPON1, {500, 70, "Giant Sword", "Silver"}},
    {WarriorWeaponCollection::WEAPON2, {1000, 130, "Giant Sword", "Glod"}},
    {WarriorWeaponCollection::WEAPON3, {1800, 220, "Giant Sword", "Platinum"}},
    {WarriorWeaponCollection::WEAPON4, {3000, 350, "Giant Sword", "Diamond"}},
};

	WarriorWeapon::WarriorWeapon(WarriorWeaponCollection collection)
        :Weapon(WarriorWeaponsMap[collection])
    {
       
    }


