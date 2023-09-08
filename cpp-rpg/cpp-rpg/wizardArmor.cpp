#include "wizardArmor.h"

using namespace ArmorLib;

std::map<WizardArmorCollection, ArmorElement> WizardArmorMap{
	{WizardArmorCollection::Armor1, { 500, 50, "面紗", "白銀" }},
	{ WizardArmorCollection::Armor2, {1000, 100, "面紗", "黃金"} },
	{ WizardArmorCollection::Armor3, {1800, 200, "面紗", "白金"} },
	{ WizardArmorCollection::Armor4, {3000, 250, "面紗", "鑽石"} },
};

WizardArmor::WizardArmor(WizardArmorCollection collection)
	:Armor(WizardArmorMap[collection]) {
}