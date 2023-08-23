#include "weapon.h"

using namespace WeaponLib;

Weapon::Weapon() {
	ATK = 0;
}

Weapon::Weapon(WeaponElement element) {
	Price = element.price;
	ATK = element.atk;
	mName = element.name;
	Rank = element.rank;
}

int Weapon::GetPrice() { return Price; }
int Weapon::GetATK() { return ATK; }
string Weapon::GetName() {
	return mName;
}
string Weapon::GetRank() { return Rank; }