#include "monsterWeapon.h"

std::map<MonsterWeaponCollection, WeaponElement> MonsterWeaponsMap{
    {MonsterWeaponCollection::WEAPON1, {500, 70, "槌子", "白銀"}},
    {MonsterWeaponCollection::WEAPON2, {1000, 130, "槌子", "黃金"}},
    {MonsterWeaponCollection::WEAPON3, {1800, 220, "槌子", "白金"}},
    {MonsterWeaponCollection::WEAPON4, {3000, 350, "槌子", "鑽石"}},
};

	MonsterWeapon::MonsterWeapon(MonsterWeaponCollection collection)
    :Weapon(MonsterWeaponsMap[collection]){
        
    }


