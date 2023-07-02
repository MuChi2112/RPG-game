#include "wizardArmor.h"

std::map<WizardArmorCollection, ArmorElement> WizardArmorMap{
    {WizardArmorCollection::Armor1, {500, 70, "盔甲", "白銀"}},
    {WizardArmorCollection::Armor2, {1000, 130, "盔甲", "黃金"}},
    {WizardArmorCollection::Armor3, {1800, 220, "盔甲", "白金"}},
    {WizardArmorCollection::Armor4, {3000, 350, "盔甲", "鑽石"}},
};

	WizardArmor::WizardArmor(WizardArmorCollection collection)
    :Armor(WizardArmorMap[collection]){
        
    }


