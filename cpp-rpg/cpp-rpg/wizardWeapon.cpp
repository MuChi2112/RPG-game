#include "wizardWeapon.h"

std::map<WizardWeaponCollection, WeaponElement> WizardWeaponsMap{
    {WizardWeaponCollection::WEAPON1, {500, 70, "法杖", "白銀"}},
    {WizardWeaponCollection::WEAPON2, {1000, 130, "法杖", "黃金"}},
    {WizardWeaponCollection::WEAPON3, {1800, 220, "法杖", "白金"}},
    {WizardWeaponCollection::WEAPON4, {3000, 350, "法杖", "鑽石"}},
};

	WizardWeapon::WizardWeapon(WizardWeaponCollection collection)
    :Weapon(WizardWeaponsMap[collection]){
        
    }


