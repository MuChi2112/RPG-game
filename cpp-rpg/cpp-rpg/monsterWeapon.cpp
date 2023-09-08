#include "monsterWeapon.h"

using namespace WeaponLib;

std::map<MonsterWeaponCollection, WeaponElement> MonsterWeaponsMap{
    {MonsterWeaponCollection::WEAPON1, {1000, 140, "槌子", "白銀"}},
    {MonsterWeaponCollection::WEAPON2, {1500, 260, "槌子", "黃金"}},
    {MonsterWeaponCollection::WEAPON3, {2000, 440, "槌子", "白金"}},
    {MonsterWeaponCollection::WEAPON4, {4000, 700, "槌子", "鑽石"}},
};

	MonsterWeapon::MonsterWeapon(MonsterWeaponCollection collection)
    :Weapon(MonsterWeaponsMap[collection]){
        
    }


